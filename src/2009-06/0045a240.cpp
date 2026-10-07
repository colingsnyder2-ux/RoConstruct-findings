// roc 2009-06 0045a240  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a240
//
// 0045a240  b8c0a08b00           mov eax, 0x8ba0c0
// 0045a245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045a240()
{
    return &G;
}
