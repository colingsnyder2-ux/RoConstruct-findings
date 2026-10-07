// roc 2009-06 0089aaa0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aaa0
//
// 0089aaa0  a1accda400           mov eax, dword ptr [0xa4cdac]
// 0089aaa5  50                   push eax
// 0089aaa6  e887dfe7ff           call 0x718a32
// 0089aaab  83c404               add esp, 4
// 0089aaae  c70594cda40030d28a00 mov dword ptr [0xa4cd94], 0x8ad230
// 0089aab8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aaa0(int);
void func_0089aaa0()
{
    G4_func_0089aaa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
