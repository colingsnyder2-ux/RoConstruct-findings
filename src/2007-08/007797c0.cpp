// roc 2007-08 007797c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007797c0
//
// 007797c0  a1e4188c00           mov eax, dword ptr [0x8c18e4]
// 007797c5  50                   push eax
// 007797c6  e89764ebff           call 0x62fc62
// 007797cb  83c404               add esp, 4
// 007797ce  c705cc188c00b4707800 mov dword ptr [0x8c18cc], 0x7870b4
// 007797d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007797c0(int);
void func_007797c0()
{
    G4_func_007797c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
