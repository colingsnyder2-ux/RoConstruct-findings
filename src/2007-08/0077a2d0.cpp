// roc 2007-08 0077a2d0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a2d0
//
// 0077a2d0  a15c2a8c00           mov eax, dword ptr [0x8c2a5c]
// 0077a2d5  50                   push eax
// 0077a2d6  e88759ebff           call 0x62fc62
// 0077a2db  83c404               add esp, 4
// 0077a2de  c705442a8c00b4707800 mov dword ptr [0x8c2a44], 0x7870b4
// 0077a2e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a2d0(int);
void func_0077a2d0()
{
    G4_func_0077a2d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
