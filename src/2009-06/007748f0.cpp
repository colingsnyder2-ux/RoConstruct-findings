// roc 2009-06 007748f0  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007748f0
//
// 007748f0  b860bc8f00           mov eax, 0x8fbc60
// 007748f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007748f0()
{
    return &G;
}
