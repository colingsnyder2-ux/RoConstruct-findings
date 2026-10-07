// roc 2011-06 004e4890  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e4890
//
// 004e4890  b8f8abc000           mov eax, 0xc0abf8
// 004e4895  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e4890()
{
    return &G;
}
