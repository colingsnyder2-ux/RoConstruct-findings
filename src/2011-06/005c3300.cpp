// roc 2011-06 005c3300  unit: RBX::TextService::W4YAlignment::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3300
//
// 005c3300  b820d6c300           mov eax, 0xc3d620
// 005c3305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c3300()
{
    return &G;
}
