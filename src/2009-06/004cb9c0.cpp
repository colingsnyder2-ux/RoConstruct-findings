// roc 2009-06 004cb9c0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cb9c0
//
// 004cb9c0  b890039f00           mov eax, 0x9f0390
// 004cb9c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004cb9c0()
{
    return &G;
}
