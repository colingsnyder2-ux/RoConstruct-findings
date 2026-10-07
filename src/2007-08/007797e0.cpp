// roc 2007-08 007797e0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007797e0
//
// 007797e0  a1e4168c00           mov eax, dword ptr [0x8c16e4]
// 007797e5  50                   push eax
// 007797e6  e87764ebff           call 0x62fc62
// 007797eb  83c404               add esp, 4
// 007797ee  c705cc168c00b4707800 mov dword ptr [0x8c16cc], 0x7870b4
// 007797f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007797e0(int);
void func_007797e0()
{
    G4_func_007797e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
