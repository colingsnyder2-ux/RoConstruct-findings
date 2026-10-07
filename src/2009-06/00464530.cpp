// roc 2009-06 00464530  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464530
//
// 00464530  b8acbb8b00           mov eax, 0x8bbbac
// 00464535  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00464530()
{
    return &G;
}
