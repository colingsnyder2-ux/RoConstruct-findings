// roc 2009-06 004271e0  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004271e0
//
// 004271e0  b8380d8b00           mov eax, 0x8b0d38
// 004271e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004271e0()
{
    return &G;
}
