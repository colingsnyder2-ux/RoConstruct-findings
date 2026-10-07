// roc 2008-06 006d7f10  unit: CInstanceRecord  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7f10
//
// 006d7f10  b8246f9600           mov eax, 0x966f24
// 006d7f15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d7f10()
{
    return &G;
}
