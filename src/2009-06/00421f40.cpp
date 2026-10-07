// roc 2009-06 00421f40  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00421f40
//
// 00421f40  b834088b00           mov eax, 0x8b0834
// 00421f45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00421f40()
{
    return &G;
}
