// roc 2008-06 007fdbb0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdbb0
//
// 007fdbb0  c7056863970030b78000 mov dword ptr [0x976368], 0x80b730
// 007fdbba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fdbb0;
extern char G2_func_007fdbb0;
void func_007fdbb0()
{
    G1_func_007fdbb0 = &G2_func_007fdbb0;
}
