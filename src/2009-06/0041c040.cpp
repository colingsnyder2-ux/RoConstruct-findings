// roc 2009-06 0041c040  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041c040
//
// 0041c040  b83c028b00           mov eax, 0x8b023c
// 0041c045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041c040()
{
    return &G;
}
