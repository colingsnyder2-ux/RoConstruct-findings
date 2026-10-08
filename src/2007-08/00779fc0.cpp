// roc 2007-08 00779fc0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779fc0
//
// 00779fc0  a190278c00           mov eax, dword ptr [0x8c2790]
// 00779fc5  50                   push eax
// 00779fc6  e8975cebff           call 0x62fc62
// 00779fcb  83c404               add esp, 4
// 00779fce  c70578278c00b4707800 mov dword ptr [0x8c2778], 0x7870b4
// 00779fd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779fc0(int);
void func_00779fc0()
{
    G4_func_00779fc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
