// roc 2011-06 00591240  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00591240
//
// 00591240  b86c92c100           mov eax, 0xc1926c
// 00591245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00591240()
{
    return &G;
}
