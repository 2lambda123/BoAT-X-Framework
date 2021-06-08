# BoAT-X-Framework for ��������Yanfei����˵��


## һ��ǰ��

���ĵ�˵�������Yanfei OpenCPU��������������BoAT-X-Framework������BoAT-X-Framework��̬�⣬�Լ�����demo����


## ���������ļ�

1������ BoAT���룬BoAT-X-Framework �����ļ��з���Yanfeiƽ̨�����Ŀ¼�£�������CMakeLists.txtƽ����

2������ BoAT-X-Framework\vendor\platform\YanFei-CUIot-MZ-60\YanfeiRootDirCode\app\demo\src��Yanfeiƽ̨�����Ŀ¼\app\demo\src\�¡�


�������Ŀ¼���ļ��ṹ���£�
```
<Yanfeiƽ̨�����Ŀ¼>
|
+---app
+---BoAT-X-Framework
+---cmake
+---components
+---examples
+---ldscripts
+---littlevgl
+---out
+---prebuilt
+---tools
\---CMakeList.txt
```


## �����ļ��޸�

### 1�����BoAT-X-Framework���ɵľ�̬��.a�ļ���Yanfeiƽ̨

  ��Yanfeiƽ̨�����Ŀ¼\cmake\toolchain-gcc.cmake�ļ�
  
  ����������е���Ӧ�ɼ��ص��ĵط���
  ```
  set(libbw_file_name ${CMAKE_CURRENT_SOURCE_DIR}/BoAT-X-Frameworkt/lib/libboatwallet.a)
  set(libbh_file_name ${CMAKE_CURRENT_SOURCE_DIR}/BoAT-X-Frameworkt/lib/libboatvendor.a)
  ```

### 2�����BoAT-X-Framework lib�ļ���target_link_libraries

  ��Yanfeiƽ̨�����Ŀ¼\app\demo\CMakeList.txt�ļ�
  
  �ҵ�target_link_libraries(XXX ${libc_file_name}) ��������${libc_file_name} ǰ����� ${libbw_file_name} ${libbh_file_name} ���磺
  ```
  target_link_libraries(${target} PRIVATE ${libbw_file_name} ${libbh_file_name} ${libc_file_name} ${libm_file_name} ${libgcc_file_name})
  ```

### 3�����BoAT-X-Framework�й�ͷ�ļ�·����Yanfeiƽ̨

  ��Yanfeiƽ̨�����Ŀ¼�µ���CMakeLists.txt�ļ�
  
  �ҵ�include_directories(xxx ), ������½�һ���������BoAT-X-Frameworkt���ݣ�
  ```
  include_directories(BoAT-X-Frameworkt/include BoAT-X-Frameworkt/include/protocolapi)
  ```

### 4�����BoAT-X-Framework����Demo�����ܺ�Լ�ļ�������Ŀ¼

  ��Yanfeiƽ̨�����Ŀ¼\app\demo\CMakeList.txt�ļ�

  �ҵ�add_appimg(${target} xxx ) �������ں������${target_file_path}/my_contract.c���磺
  ```
  add_appimg(${target} ${flash_ldscript} ${target_file_path}/${target_file}.c ${target_file_path}/my_contract.c ${OEM})
  ```

## �ġ�����BoAT-X-Framework��̬��

### 1����Linux�����±���BoAT-X-Framework��̬��.a�ļ�

   #### a���޸�BoAT-X-Framework\Makefile�е�target
   ```
   PLATFORM_TARGET ?= YanFei-CUIot-MZ-6
   ```
   
   #### b����Linux�ն˽���BoAT-X-FrameworkĿ¼����BoAT��̬��
   ```
   cd BoAT-X-Framework
   make clean
   make all
   ```
   
   ����ɹ�����BoAT-X-Framework\lib�»����ɾ�̬��libboatvendor.a��libboatwallet.a��
   

### 2������Yanfei��ʾdemo��������.pac�����ļ�

   ͨ��BoAT-X-Framework��������������ʾ���룬��Yanfeiƽ̨�����Ŀ¼�µ�\app\demo\src\main.c
   
   ��Linux�ն˽���Yanfei��Ŀ¼
   ```
   cd Yanfei�����Ŀ¼
   cd out
   rm -r appimage_debug//��Ҫ��ɾ������֮ǰ���ɵ��ļ�
   cd ..
   . tools/core_launch.sh
   cout
   cmake ../.. -G Ninja
   ninja
   ```
   ����ɹ�����out\appimage_debug\hex������main_flash.pac�ļ�	
