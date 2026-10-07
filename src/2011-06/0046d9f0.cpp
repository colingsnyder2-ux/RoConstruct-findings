// roc 2011-06 0046d9f0  unit: CRobloxControlMaterialSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d9f0
//
// 0046d9f0  b86052c100           mov eax, 0xc15260
// 0046d9f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046d9f0()
{
    return &G;
}
