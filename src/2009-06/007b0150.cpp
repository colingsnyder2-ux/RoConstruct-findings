// roc 2009-06 007b0150  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0150
//
// 007b0150  b80083a200           mov eax, 0xa28300
// 007b0155  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b0150()
{
    return &G;
}
