// roc 2008-06 00743cf0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743cf0
//
// 00743cf0  b820398600           mov eax, 0x863920
// 00743cf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00743cf0()
{
    return &G;
}
