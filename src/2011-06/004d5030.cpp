// roc 2011-06 004d5030  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d5030
//
// 004d5030  b82064c200           mov eax, 0xc26420
// 004d5035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004d5030()
{
    return &G;
}
