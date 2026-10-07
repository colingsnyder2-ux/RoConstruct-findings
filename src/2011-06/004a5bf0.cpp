// roc 2011-06 004a5bf0  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5bf0
//
// 004a5bf0  b880b0c100           mov eax, 0xc1b080
// 004a5bf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5bf0()
{
    return &G;
}
