// roc 2007-08 0077bf50  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bf50
//
// 0077bf50  a1a46f8c00           mov eax, dword ptr [0x8c6fa4]
// 0077bf55  50                   push eax
// 0077bf56  e8073debff           call 0x62fc62
// 0077bf5b  83c404               add esp, 4
// 0077bf5e  c7058c6f8c00b4707800 mov dword ptr [0x8c6f8c], 0x7870b4
// 0077bf68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bf50(int);
void func_0077bf50()
{
    G4_func_0077bf50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
