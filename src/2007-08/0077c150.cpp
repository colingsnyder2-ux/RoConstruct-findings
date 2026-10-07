// roc 2007-08 0077c150  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c150
//
// 0077c150  a1f8738c00           mov eax, dword ptr [0x8c73f8]
// 0077c155  50                   push eax
// 0077c156  e8073bebff           call 0x62fc62
// 0077c15b  83c404               add esp, 4
// 0077c15e  c705e0738c00b4707800 mov dword ptr [0x8c73e0], 0x7870b4
// 0077c168  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c150(int);
void func_0077c150()
{
    G4_func_0077c150(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
