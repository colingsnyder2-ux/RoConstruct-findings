// roc 2007-08 007796e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007796e0
//
// 007796e0  a1c8168c00           mov eax, dword ptr [0x8c16c8]
// 007796e5  50                   push eax
// 007796e6  e87765ebff           call 0x62fc62
// 007796eb  83c404               add esp, 4
// 007796ee  c705b0168c00b4707800 mov dword ptr [0x8c16b0], 0x7870b4
// 007796f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007796e0(int);
void func_007796e0()
{
    G4_func_007796e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
