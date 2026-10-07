// roc 2007-08 0077c400  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c400
//
// 0077c400  a10c7e8c00           mov eax, dword ptr [0x8c7e0c]
// 0077c405  50                   push eax
// 0077c406  e85738ebff           call 0x62fc62
// 0077c40b  83c404               add esp, 4
// 0077c40e  c705f07d8c00b4707800 mov dword ptr [0x8c7df0], 0x7870b4
// 0077c418  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c400(int);
void func_0077c400()
{
    G4_func_0077c400(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
