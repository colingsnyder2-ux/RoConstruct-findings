// roc 2007-08 004963e0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004963e0
//
// 004963e0  b820f48800           mov eax, 0x88f420
// 004963e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004963e0()
{
    return &G;
}
