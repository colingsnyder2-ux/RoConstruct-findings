// roc 2007-08 0077b370  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b370
//
// 0077b370  a160598c00           mov eax, dword ptr [0x8c5960]
// 0077b375  50                   push eax
// 0077b376  e8e748ebff           call 0x62fc62
// 0077b37b  83c404               add esp, 4
// 0077b37e  c70544598c00b4707800 mov dword ptr [0x8c5944], 0x7870b4
// 0077b388  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b370(int);
void func_0077b370()
{
    G4_func_0077b370(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
