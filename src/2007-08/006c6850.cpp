// roc 2007-08 006c6850  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6850
//
// 006c6850  b87c838b00           mov eax, 0x8b837c
// 006c6855  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c6850()
{
    return &G;
}
