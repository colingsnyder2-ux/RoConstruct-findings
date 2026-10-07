// roc 2008-06 006a9450  unit: CXTPControlEditCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a9450
//
// 006a9450  b8f4138500           mov eax, 0x8513f4
// 006a9455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a9450()
{
    return &G;
}
