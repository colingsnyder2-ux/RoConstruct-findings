// roc 2007-08 0077b6d0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b6d0
//
// 0077b6d0  a1705e8c00           mov eax, dword ptr [0x8c5e70]
// 0077b6d5  50                   push eax
// 0077b6d6  e88745ebff           call 0x62fc62
// 0077b6db  83c404               add esp, 4
// 0077b6de  c705585e8c00b4707800 mov dword ptr [0x8c5e58], 0x7870b4
// 0077b6e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b6d0(int);
void func_0077b6d0()
{
    G4_func_0077b6d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
