// roc 2007-08 0077be00  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077be00
//
// 0077be00  a1a06d8c00           mov eax, dword ptr [0x8c6da0]
// 0077be05  50                   push eax
// 0077be06  e8573eebff           call 0x62fc62
// 0077be0b  83c404               add esp, 4
// 0077be0e  c705846d8c00b4707800 mov dword ptr [0x8c6d84], 0x7870b4
// 0077be18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077be00(int);
void func_0077be00()
{
    G4_func_0077be00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
