// roc 2011-06 008f2200  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2200
//
// 008f2200  b808a4ad00           mov eax, 0xada408
// 008f2205  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f2200()
{
    return &G;
}
