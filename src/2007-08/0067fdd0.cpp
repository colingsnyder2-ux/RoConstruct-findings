// roc 2007-08 0067fdd0  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067fdd0
//
// 0067fdd0  b8c0ea7c00           mov eax, 0x7ceac0
// 0067fdd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067fdd0()
{
    return &G;
}
