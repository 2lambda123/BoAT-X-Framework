/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: token/transaction.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "token/transaction.pb-c.h"
void   token_transaction__init
                     (TokenTransaction         *message)
{
  static TokenTransaction init_value = TOKEN_TRANSACTION__INIT;
  *message = init_value;
}
size_t token_transaction__get_packed_size
                     (const TokenTransaction *message)
{
  assert(message->base.descriptor == &token_transaction__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t token_transaction__pack
                     (const TokenTransaction *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &token_transaction__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t token_transaction__pack_to_buffer
                     (const TokenTransaction *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &token_transaction__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TokenTransaction *
       token_transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TokenTransaction *)
     protobuf_c_message_unpack (&token_transaction__descriptor,
                                allocator, len, data);
}
void   token_transaction__free_unpacked
                     (TokenTransaction *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &token_transaction__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_token_action__init
                     (PlainTokenAction         *message)
{
  static PlainTokenAction init_value = PLAIN_TOKEN_ACTION__INIT;
  *message = init_value;
}
size_t plain_token_action__get_packed_size
                     (const PlainTokenAction *message)
{
  assert(message->base.descriptor == &plain_token_action__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_token_action__pack
                     (const PlainTokenAction *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_token_action__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_token_action__pack_to_buffer
                     (const PlainTokenAction *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_token_action__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainTokenAction *
       plain_token_action__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainTokenAction *)
     protobuf_c_message_unpack (&plain_token_action__descriptor,
                                allocator, len, data);
}
void   plain_token_action__free_unpacked
                     (PlainTokenAction *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_token_action__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_import__init
                     (PlainImport         *message)
{
  static PlainImport init_value = PLAIN_IMPORT__INIT;
  *message = init_value;
}
size_t plain_import__get_packed_size
                     (const PlainImport *message)
{
  assert(message->base.descriptor == &plain_import__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_import__pack
                     (const PlainImport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_import__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_import__pack_to_buffer
                     (const PlainImport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_import__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainImport *
       plain_import__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainImport *)
     protobuf_c_message_unpack (&plain_import__descriptor,
                                allocator, len, data);
}
void   plain_import__free_unpacked
                     (PlainImport *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_import__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_transfer__init
                     (PlainTransfer         *message)
{
  static PlainTransfer init_value = PLAIN_TRANSFER__INIT;
  *message = init_value;
}
size_t plain_transfer__get_packed_size
                     (const PlainTransfer *message)
{
  assert(message->base.descriptor == &plain_transfer__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_transfer__pack
                     (const PlainTransfer *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_transfer__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_transfer__pack_to_buffer
                     (const PlainTransfer *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_transfer__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainTransfer *
       plain_transfer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainTransfer *)
     protobuf_c_message_unpack (&plain_transfer__descriptor,
                                allocator, len, data);
}
void   plain_transfer__free_unpacked
                     (PlainTransfer *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_transfer__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_approve__init
                     (PlainApprove         *message)
{
  static PlainApprove init_value = PLAIN_APPROVE__INIT;
  *message = init_value;
}
size_t plain_approve__get_packed_size
                     (const PlainApprove *message)
{
  assert(message->base.descriptor == &plain_approve__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_approve__pack
                     (const PlainApprove *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_approve__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_approve__pack_to_buffer
                     (const PlainApprove *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_approve__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainApprove *
       plain_approve__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainApprove *)
     protobuf_c_message_unpack (&plain_approve__descriptor,
                                allocator, len, data);
}
void   plain_approve__free_unpacked
                     (PlainApprove *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_approve__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_transfer_from__init
                     (PlainTransferFrom         *message)
{
  static PlainTransferFrom init_value = PLAIN_TRANSFER_FROM__INIT;
  *message = init_value;
}
size_t plain_transfer_from__get_packed_size
                     (const PlainTransferFrom *message)
{
  assert(message->base.descriptor == &plain_transfer_from__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_transfer_from__pack
                     (const PlainTransferFrom *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_transfer_from__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_transfer_from__pack_to_buffer
                     (const PlainTransferFrom *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_transfer_from__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainTransferFrom *
       plain_transfer_from__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainTransferFrom *)
     protobuf_c_message_unpack (&plain_transfer_from__descriptor,
                                allocator, len, data);
}
void   plain_transfer_from__free_unpacked
                     (PlainTransferFrom *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_transfer_from__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_output__init
                     (PlainOutput         *message)
{
  static PlainOutput init_value = PLAIN_OUTPUT__INIT;
  *message = init_value;
}
size_t plain_output__get_packed_size
                     (const PlainOutput *message)
{
  assert(message->base.descriptor == &plain_output__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_output__pack
                     (const PlainOutput *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_output__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_output__pack_to_buffer
                     (const PlainOutput *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_output__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainOutput *
       plain_output__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainOutput *)
     protobuf_c_message_unpack (&plain_output__descriptor,
                                allocator, len, data);
}
void   plain_output__free_unpacked
                     (PlainOutput *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_output__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   input_id__init
                     (InputId         *message)
{
  static InputId init_value = INPUT_ID__INIT;
  *message = init_value;
}
size_t input_id__get_packed_size
                     (const InputId *message)
{
  assert(message->base.descriptor == &input_id__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t input_id__pack
                     (const InputId *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &input_id__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t input_id__pack_to_buffer
                     (const InputId *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &input_id__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
InputId *
       input_id__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (InputId *)
     protobuf_c_message_unpack (&input_id__descriptor,
                                allocator, len, data);
}
void   input_id__free_unpacked
                     (InputId *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &input_id__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   plain_delegated_output__init
                     (PlainDelegatedOutput         *message)
{
  static PlainDelegatedOutput init_value = PLAIN_DELEGATED_OUTPUT__INIT;
  *message = init_value;
}
size_t plain_delegated_output__get_packed_size
                     (const PlainDelegatedOutput *message)
{
  assert(message->base.descriptor == &plain_delegated_output__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t plain_delegated_output__pack
                     (const PlainDelegatedOutput *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &plain_delegated_output__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t plain_delegated_output__pack_to_buffer
                     (const PlainDelegatedOutput *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &plain_delegated_output__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PlainDelegatedOutput *
       plain_delegated_output__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PlainDelegatedOutput *)
     protobuf_c_message_unpack (&plain_delegated_output__descriptor,
                                allocator, len, data);
}
void   plain_delegated_output__free_unpacked
                     (PlainDelegatedOutput *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &plain_delegated_output__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor token_transaction__field_descriptors[1] =
{
  {
    "plain_action",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(TokenTransaction, action_case),
    offsetof(TokenTransaction, plain_action),
    &plain_token_action__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned token_transaction__field_indices_by_name[] = {
  0,   /* field[0] = plain_action */
};
static const ProtobufCIntRange token_transaction__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor token_transaction__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "TokenTransaction",
  "TokenTransaction",
  "TokenTransaction",
  "",
  sizeof(TokenTransaction),
  1,
  token_transaction__field_descriptors,
  token_transaction__field_indices_by_name,
  1,  token_transaction__number_ranges,
  (ProtobufCMessageInit) token_transaction__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_token_action__field_descriptors[5] =
{
  {
    "plain_import",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTokenAction, data_case),
    offsetof(PlainTokenAction, plain_import),
    &plain_import__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "plain_transfer",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTokenAction, data_case),
    offsetof(PlainTokenAction, plain_transfer),
    &plain_transfer__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "plain_redeem",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTokenAction, data_case),
    offsetof(PlainTokenAction, plain_redeem),
    &plain_transfer__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "plain_approve",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTokenAction, data_case),
    offsetof(PlainTokenAction, plain_approve),
    &plain_approve__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "plain_transfer_From",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTokenAction, data_case),
    offsetof(PlainTokenAction, plain_transfer_from),
    &plain_transfer_from__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_token_action__field_indices_by_name[] = {
  3,   /* field[3] = plain_approve */
  0,   /* field[0] = plain_import */
  2,   /* field[2] = plain_redeem */
  1,   /* field[1] = plain_transfer */
  4,   /* field[4] = plain_transfer_From */
};
static const ProtobufCIntRange plain_token_action__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor plain_token_action__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainTokenAction",
  "PlainTokenAction",
  "PlainTokenAction",
  "",
  sizeof(PlainTokenAction),
  5,
  plain_token_action__field_descriptors,
  plain_token_action__field_indices_by_name,
  1,  plain_token_action__number_ranges,
  (ProtobufCMessageInit) plain_token_action__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_import__field_descriptors[1] =
{
  {
    "outputs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainImport, n_outputs),
    offsetof(PlainImport, outputs),
    &plain_output__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_import__field_indices_by_name[] = {
  0,   /* field[0] = outputs */
};
static const ProtobufCIntRange plain_import__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor plain_import__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainImport",
  "PlainImport",
  "PlainImport",
  "",
  sizeof(PlainImport),
  1,
  plain_import__field_descriptors,
  plain_import__field_indices_by_name,
  1,  plain_import__number_ranges,
  (ProtobufCMessageInit) plain_import__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_transfer__field_descriptors[2] =
{
  {
    "inputs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTransfer, n_inputs),
    offsetof(PlainTransfer, inputs),
    &input_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outputs",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTransfer, n_outputs),
    offsetof(PlainTransfer, outputs),
    &plain_output__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_transfer__field_indices_by_name[] = {
  0,   /* field[0] = inputs */
  1,   /* field[1] = outputs */
};
static const ProtobufCIntRange plain_transfer__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor plain_transfer__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainTransfer",
  "PlainTransfer",
  "PlainTransfer",
  "",
  sizeof(PlainTransfer),
  2,
  plain_transfer__field_descriptors,
  plain_transfer__field_indices_by_name,
  1,  plain_transfer__number_ranges,
  (ProtobufCMessageInit) plain_transfer__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_approve__field_descriptors[3] =
{
  {
    "inputs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainApprove, n_inputs),
    offsetof(PlainApprove, inputs),
    &input_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "delegated_outputs",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainApprove, n_delegated_outputs),
    offsetof(PlainApprove, delegated_outputs),
    &plain_delegated_output__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "output",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(PlainApprove, output),
    &plain_output__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_approve__field_indices_by_name[] = {
  1,   /* field[1] = delegated_outputs */
  0,   /* field[0] = inputs */
  2,   /* field[2] = output */
};
static const ProtobufCIntRange plain_approve__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor plain_approve__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainApprove",
  "PlainApprove",
  "PlainApprove",
  "",
  sizeof(PlainApprove),
  3,
  plain_approve__field_descriptors,
  plain_approve__field_indices_by_name,
  1,  plain_approve__number_ranges,
  (ProtobufCMessageInit) plain_approve__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_transfer_from__field_descriptors[3] =
{
  {
    "inputs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTransferFrom, n_inputs),
    offsetof(PlainTransferFrom, inputs),
    &input_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outputs",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PlainTransferFrom, n_outputs),
    offsetof(PlainTransferFrom, outputs),
    &plain_output__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "delegated_output",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(PlainTransferFrom, delegated_output),
    &plain_delegated_output__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_transfer_from__field_indices_by_name[] = {
  2,   /* field[2] = delegated_output */
  0,   /* field[0] = inputs */
  1,   /* field[1] = outputs */
};
static const ProtobufCIntRange plain_transfer_from__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor plain_transfer_from__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainTransferFrom",
  "PlainTransferFrom",
  "PlainTransferFrom",
  "",
  sizeof(PlainTransferFrom),
  3,
  plain_transfer_from__field_descriptors,
  plain_transfer_from__field_indices_by_name,
  1,  plain_transfer_from__number_ranges,
  (ProtobufCMessageInit) plain_transfer_from__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_output__field_descriptors[3] =
{
  {
    "owner",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(PlainOutput, has_owner),
    offsetof(PlainOutput, owner),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PlainOutput, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "quantity",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(PlainOutput, has_quantity),
    offsetof(PlainOutput, quantity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_output__field_indices_by_name[] = {
  0,   /* field[0] = owner */
  2,   /* field[2] = quantity */
  1,   /* field[1] = type */
};
static const ProtobufCIntRange plain_output__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor plain_output__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainOutput",
  "PlainOutput",
  "PlainOutput",
  "",
  sizeof(PlainOutput),
  3,
  plain_output__field_descriptors,
  plain_output__field_indices_by_name,
  1,  plain_output__number_ranges,
  (ProtobufCMessageInit) plain_output__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor input_id__field_descriptors[2] =
{
  {
    "tx_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(InputId, tx_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "index",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(InputId, has_index),
    offsetof(InputId, index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned input_id__field_indices_by_name[] = {
  1,   /* field[1] = index */
  0,   /* field[0] = tx_id */
};
static const ProtobufCIntRange input_id__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor input_id__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "InputId",
  "InputId",
  "InputId",
  "",
  sizeof(InputId),
  2,
  input_id__field_descriptors,
  input_id__field_indices_by_name,
  1,  input_id__number_ranges,
  (ProtobufCMessageInit) input_id__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor plain_delegated_output__field_descriptors[4] =
{
  {
    "owner",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(PlainDelegatedOutput, has_owner),
    offsetof(PlainDelegatedOutput, owner),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "delegatees",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(PlainDelegatedOutput, n_delegatees),
    offsetof(PlainDelegatedOutput, delegatees),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PlainDelegatedOutput, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "quantity",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(PlainDelegatedOutput, has_quantity),
    offsetof(PlainDelegatedOutput, quantity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned plain_delegated_output__field_indices_by_name[] = {
  1,   /* field[1] = delegatees */
  0,   /* field[0] = owner */
  3,   /* field[3] = quantity */
  2,   /* field[2] = type */
};
static const ProtobufCIntRange plain_delegated_output__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor plain_delegated_output__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PlainDelegatedOutput",
  "PlainDelegatedOutput",
  "PlainDelegatedOutput",
  "",
  sizeof(PlainDelegatedOutput),
  4,
  plain_delegated_output__field_descriptors,
  plain_delegated_output__field_indices_by_name,
  1,  plain_delegated_output__number_ranges,
  (ProtobufCMessageInit) plain_delegated_output__init,
  NULL,NULL,NULL    /* reserved[123] */
};
