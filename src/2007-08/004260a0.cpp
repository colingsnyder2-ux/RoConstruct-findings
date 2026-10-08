// roc 2007-08 004260a0  unit: RBX::Reflection::Metadata::Item  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004260a0
//
// 004260a0  b840917800           mov eax, 0x789140
// 004260a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004260a0()
{
    return &G;
}
