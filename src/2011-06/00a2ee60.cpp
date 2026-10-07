// roc 2011-06 00a2ee60  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee60
//
// 00a2ee60  e8ab21e1ff           call 0x841010
// 00a2ee65  50                   push eax
// 00a2ee66  e8b3bbddff           call 0x80aa1e
// 00a2ee6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ee60();
extern int __stdcall G2_func_00a2ee60(int);
int func_00a2ee60()
{
    return G2_func_00a2ee60(G1_func_00a2ee60());
}
