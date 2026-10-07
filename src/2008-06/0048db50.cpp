// roc 2008-06 0048db50  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048db50
//
// 0048db50  b880599300           mov eax, 0x935980
// 0048db55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048db50()
{
    return &G;
}
