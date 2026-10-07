// roc 2007-08 0077bd00  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd00
//
// 0077bd00  a1ec698c00           mov eax, dword ptr [0x8c69ec]
// 0077bd05  50                   push eax
// 0077bd06  e8573febff           call 0x62fc62
// 0077bd0b  83c404               add esp, 4
// 0077bd0e  c705d4698c00b4707800 mov dword ptr [0x8c69d4], 0x7870b4
// 0077bd18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bd00(int);
void func_0077bd00()
{
    G4_func_0077bd00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
