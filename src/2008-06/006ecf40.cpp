// roc 2008-06 006ecf40  unit: CXTPCustomizeOptionsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ecf40
//
// 006ecf40  b850838500           mov eax, 0x858350
// 006ecf45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ecf40()
{
    return &G;
}
