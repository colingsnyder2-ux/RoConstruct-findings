// roc 2007-08 0077bfa0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bfa0
//
// 0077bfa0  a10c708c00           mov eax, dword ptr [0x8c700c]
// 0077bfa5  50                   push eax
// 0077bfa6  e8b73cebff           call 0x62fc62
// 0077bfab  83c404               add esp, 4
// 0077bfae  c705f46f8c00b4707800 mov dword ptr [0x8c6ff4], 0x7870b4
// 0077bfb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bfa0(int);
void func_0077bfa0()
{
    G4_func_0077bfa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
