// roc 2009-06 00893150  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893150
//
// 00893150  e80baaedff           call 0x76db60
// 00893155  50                   push eax
// 00893156  e89d62e8ff           call 0x7193f8
// 0089315b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893150();
extern int __stdcall G2_func_00893150(int);
int func_00893150()
{
    return G2_func_00893150(G1_func_00893150());
}
