// roc 2008-06 00412c50  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412c50
//
// 00412c50  b848e68000           mov eax, 0x80e648
// 00412c55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412c50()
{
    return &G;
}
