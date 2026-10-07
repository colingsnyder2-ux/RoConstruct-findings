// roc 2009-06 0078bf30  unit: CPropertyGridItemBrickColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078bf30
//
// 0078bf30  b894e78f00           mov eax, 0x8fe794
// 0078bf35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078bf30()
{
    return &G;
}
