// roc 2009-06 007b2320  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b2320
//
// 007b2320  b8c82b9000           mov eax, 0x902bc8
// 007b2325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b2320()
{
    return &G;
}
