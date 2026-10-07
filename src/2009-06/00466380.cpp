// roc 2009-06 00466380  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00466380
//
// 00466380  b8acbf8b00           mov eax, 0x8bbfac
// 00466385  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466380()
{
    return &G;
}
