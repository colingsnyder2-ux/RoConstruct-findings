// roc 2010-06 004caf80  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004caf80
//
// 004caf80  b8c8e7b800           mov eax, 0xb8e7c8
// 004caf85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004caf80()
{
    return &G;
}
