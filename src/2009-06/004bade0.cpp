// roc 2009-06 004bade0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bade0
//
// 004bade0  b8e0d39e00           mov eax, 0x9ed3e0
// 004bade5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004bade0()
{
    return &G;
}
