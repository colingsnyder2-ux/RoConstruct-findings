// roc 2009-06 0044d350  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044d350
//
// 0044d350  b8587c8b00           mov eax, 0x8b7c58
// 0044d355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044d350()
{
    return &G;
}
