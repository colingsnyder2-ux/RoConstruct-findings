// roc 2007-08 0077c0b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c0b0
//
// 0077c0b0  a150758c00           mov eax, dword ptr [0x8c7550]
// 0077c0b5  50                   push eax
// 0077c0b6  e8a73bebff           call 0x62fc62
// 0077c0bb  83c404               add esp, 4
// 0077c0be  c70538758c00b4707800 mov dword ptr [0x8c7538], 0x7870b4
// 0077c0c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c0b0(int);
void func_0077c0b0()
{
    G4_func_0077c0b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
