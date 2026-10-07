// roc 2011-06 0087c810  unit: CXTPPropertyGridItemEnum  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c810
//
// 0087c810  b81ce5ac00           mov eax, 0xace51c
// 0087c815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0087c810()
{
    return &G;
}
