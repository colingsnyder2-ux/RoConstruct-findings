// roc 2010-06 0046d100  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d100
//
// 0046d100  b890ffa000           mov eax, 0xa0ff90
// 0046d105  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046d100()
{
    return &G;
}
