// roc 2007-08 0077a7b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a7b0
//
// 0077a7b0  a1a0348c00           mov eax, dword ptr [0x8c34a0]
// 0077a7b5  50                   push eax
// 0077a7b6  e8a754ebff           call 0x62fc62
// 0077a7bb  83c404               add esp, 4
// 0077a7be  c70588348c00b4707800 mov dword ptr [0x8c3488], 0x7870b4
// 0077a7c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a7b0(int);
void func_0077a7b0()
{
    G4_func_0077a7b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
