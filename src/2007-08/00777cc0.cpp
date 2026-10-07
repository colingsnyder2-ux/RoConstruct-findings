// roc 2007-08 00777cc0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777cc0
//
// 00777cc0  a1f4bc8b00           mov eax, dword ptr [0x8bbcf4]
// 00777cc5  50                   push eax
// 00777cc6  e8977febff           call 0x62fc62
// 00777ccb  83c404               add esp, 4
// 00777cce  c705dcbc8b00b4707800 mov dword ptr [0x8bbcdc], 0x7870b4
// 00777cd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777cc0(int);
void func_00777cc0()
{
    G4_func_00777cc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
