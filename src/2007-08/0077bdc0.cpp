// roc 2007-08 0077bdc0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bdc0
//
// 0077bdc0  a1646d8c00           mov eax, dword ptr [0x8c6d64]
// 0077bdc5  50                   push eax
// 0077bdc6  e8973eebff           call 0x62fc62
// 0077bdcb  83c404               add esp, 4
// 0077bdce  c705486d8c00b4707800 mov dword ptr [0x8c6d48], 0x7870b4
// 0077bdd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bdc0(int);
void func_0077bdc0()
{
    G4_func_0077bdc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
