# BoAT-X-Framework for ��������L610����˵��


## һ��ǰ��

���ĵ�˵�������L610 OpenCPU��������������BoAT-X-Framework������BoAT-X-Framework��̬�⣬�Լ�����demo����


## ���������ļ�

1������ BoAT���룬BoAT-X-Framework �����ļ��з���L610ƽ̨�����Ŀ¼�£�������CMakeLists.txtƽ����

2������ BoAT-X-Framework\vendor\platform\Fibocom-L610\L610RootDirCode\demo.c��L610ƽ̨�����Ŀ¼�¡�

3������ BoAT-X-Framework\vendor\platform\Fibocom-L610\L610RootDirCode\my_contract.cpp.abi.c��L610ƽ̨�����Ŀ¼�¡�

4������ BoAT-X-Framework\vendor\platform\Fibocom-L610\L610RootDirCode\my_contract.cpp.abi.h��L610ƽ̨�����Ŀ¼�¡�


�������Ŀ¼���ļ��ṹ���£�
```
<L610ƽ̨�����Ŀ¼>
|
+---BoAT-X-Framework
+---cmake
+---components
+---ldscripts
+---out
+---prebuilt
+---tools
\---CMakeList.txt
\---demo.c
\---my_contract.cpp.abi.c
\---my_contract.cpp.abi.h
```


## �����ļ��޸�

### 1�����BoAT-X-Framework���ɵľ�̬��.a�ļ���L610ƽ̨

  ��L610ƽ̨�����Ŀ¼\cmake\toolchain-gcc.cmake�ļ�
  
  ������������ӵ���Ӧ�ɼ��ص��ĵط���
  ```
  set(libboatwallet_file_name ${CMAKE_CURRENT_SOURCE_DIR}/components/newlib/armca5/libboatwallet.a)
  set(libboathvendor_file_name ${CMAKE_CURRENT_SOURCE_DIR}/components/newlib/armca5/libboatvendor.a)
  ```

### 2�����BoAT-X-Framework�й�ͷ�ļ�·����L610ƽ̨

  ��L610ƽ̨�����Ŀ¼�µ���CMakeLists.txt�ļ�
  
  �ҵ�include_directories(xxx ), ������������BoAT-X-Frameworkt���ݣ�
  ```
  include_directories(BoAT-X-Framework/include BoAT-X-Framework/include/protocolapi)
  ```

### 3�����BoAT-X-Framework lib�ļ���target_link_libraries

  ��L610ƽ̨�����Ŀ¼�µ���CMakeLists.txt�ļ�
  
  �ҵ�target_link_libraries(XXX ${libc_file_name}) ��������${libc_file_name} ǰ����� ${libboatwallet_file_name} ${libboathvendor_file_name} ���磺
  ```
  target_link_libraries(${target} PRIVATE ${libboatwallet_file_name} ${libboathvendor_file_name} ${libc_file_name} ${libm_file_name} 
  ```

### 4�����BoAT-X-Framework����Demo�����ܺ�Լ�ļ�������Ŀ¼

  ��L610ƽ̨�����Ŀ¼�µ���CMakeLists.txt�ļ�

  �ҵ�add_appimg(${target} xxx ) ��������������demo.c my_contract.cpp.abi.c���磺
  ```
  add_appimg(${target} ${flash_ldscript} demo.c my_contract.cpp.abi.c)
  ```

## �ġ�����BoAT-X-Framework��̬��

### 1����Linux�����±���BoAT-X-Framework��̬��.a�ļ�

   #### a���޸�BoAT-X-Framework\Makefile�е�target
   ```
   PLATFORM_TARGET ?= Fibocom-L610
   ```
   
   #### b����Linux�ն˽���BoAT-X-FrameworkĿ¼����BoAT��̬��
   ```
   cd BoAT-X-Framework
   make clean
   make all
   ```
   
   ����ɹ�����BoAT-X-Framework\lib�»����ɾ�̬��libboatvendor.a��libboatwallet.a��
   

### 2������L610��ʾdemo��������.pac�����ļ�

   ͨ��BoAT-X-Framework��������������ʾ���룬��L610ƽ̨�����Ŀ¼�µ�demo.c
   
   ��Linux�ն˽���L610��Ŀ¼
   ```
   cd L610�����Ŀ¼
   cd out
   rm -r appimage_release//��Ҫ��ɾ������֮ǰ���ɵ��ļ�
   cd ..
   . tools/core_launch.sh
   cout
   cmake ../.. -G Ninja
   ninja
   ```
   ����ɹ�����out\appimage_debug\hex������.pac�ļ�	
