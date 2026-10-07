// roc 2010-06 00840890  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840890
//
// 00840890  b8d072a600           mov eax, 0xa672d0
// 00840895  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00840890()
{
    return &G;
}
