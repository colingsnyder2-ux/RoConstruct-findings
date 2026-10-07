// roc 2011-06 004180d0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004180d0
//
// 004180d0  b870acc000           mov eax, 0xc0ac70
// 004180d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004180d0()
{
    return &G;
}
