// roc 2007-08 0077a3e0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a3e0
//
// 0077a3e0  a1c42e8c00           mov eax, dword ptr [0x8c2ec4]
// 0077a3e5  50                   push eax
// 0077a3e6  e87758ebff           call 0x62fc62
// 0077a3eb  83c404               add esp, 4
// 0077a3ee  c705ac2e8c00b4707800 mov dword ptr [0x8c2eac], 0x7870b4
// 0077a3f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a3e0(int);
void func_0077a3e0()
{
    G4_func_0077a3e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
