// roc 2009-06 004678a0  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004678a0
//
// 004678a0  b87cc68b00           mov eax, 0x8bc67c
// 004678a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004678a0()
{
    return &G;
}
