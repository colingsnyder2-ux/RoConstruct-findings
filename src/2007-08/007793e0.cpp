// roc 2007-08 007793e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007793e0
//
// 007793e0  a18c0e8c00           mov eax, dword ptr [0x8c0e8c]
// 007793e5  50                   push eax
// 007793e6  e87768ebff           call 0x62fc62
// 007793eb  83c404               add esp, 4
// 007793ee  c705740e8c00b4707800 mov dword ptr [0x8c0e74], 0x7870b4
// 007793f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007793e0(int);
void func_007793e0()
{
    G4_func_007793e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
