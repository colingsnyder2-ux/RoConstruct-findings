// roc 2007-08 00777c20  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777c20
//
// 00777c20  a130bc8b00           mov eax, dword ptr [0x8bbc30]
// 00777c25  50                   push eax
// 00777c26  e83780ebff           call 0x62fc62
// 00777c2b  83c404               add esp, 4
// 00777c2e  c70518bc8b00b4707800 mov dword ptr [0x8bbc18], 0x7870b4
// 00777c38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777c20(int);
void func_00777c20()
{
    G4_func_00777c20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
