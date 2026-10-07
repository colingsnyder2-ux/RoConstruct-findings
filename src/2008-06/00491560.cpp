// roc 2008-06 00491560  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491560
//
// 00491560  b810709300           mov eax, 0x937010
// 00491565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00491560()
{
    return &G;
}
