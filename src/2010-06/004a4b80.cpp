// roc 2010-06 004a4b80  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4b80
//
// 004a4b80  b8307cb800           mov eax, 0xb87c30
// 004a4b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a4b80()
{
    return &G;
}
