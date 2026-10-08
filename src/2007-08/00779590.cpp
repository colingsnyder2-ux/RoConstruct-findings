// roc 2007-08 00779590  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779590
//
// 00779590  a1b8148c00           mov eax, dword ptr [0x8c14b8]
// 00779595  50                   push eax
// 00779596  e8c766ebff           call 0x62fc62
// 0077959b  83c404               add esp, 4
// 0077959e  c7059c148c00b4707800 mov dword ptr [0x8c149c], 0x7870b4
// 007795a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779590(int);
void func_00779590()
{
    G4_func_00779590(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
