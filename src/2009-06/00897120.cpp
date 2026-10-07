// roc 2009-06 00897120  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897120
//
// 00897120  a1083ba400           mov eax, dword ptr [0xa43b08]
// 00897125  50                   push eax
// 00897126  e80719e8ff           call 0x718a32
// 0089712b  83c404               add esp, 4
// 0089712e  c705f03aa40030d28a00 mov dword ptr [0xa43af0], 0x8ad230
// 00897138  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897120(int);
void func_00897120()
{
    G4_func_00897120(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
