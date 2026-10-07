// roc 2008-06 007115f0  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007115f0
//
// 007115f0  b874d48500           mov eax, 0x85d474
// 007115f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007115f0()
{
    return &G;
}
