// roc 2007-08 0077b7e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b7e0
//
// 0077b7e0  a1805f8c00           mov eax, dword ptr [0x8c5f80]
// 0077b7e5  50                   push eax
// 0077b7e6  e87744ebff           call 0x62fc62
// 0077b7eb  83c404               add esp, 4
// 0077b7ee  c705685f8c00b4707800 mov dword ptr [0x8c5f68], 0x7870b4
// 0077b7f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b7e0(int);
void func_0077b7e0()
{
    G4_func_0077b7e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
