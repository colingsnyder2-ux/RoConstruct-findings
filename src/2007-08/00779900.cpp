// roc 2007-08 00779900  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779900
//
// 00779900  a18c188c00           mov eax, dword ptr [0x8c188c]
// 00779905  50                   push eax
// 00779906  e85763ebff           call 0x62fc62
// 0077990b  83c404               add esp, 4
// 0077990e  c70574188c00b4707800 mov dword ptr [0x8c1874], 0x7870b4
// 00779918  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779900(int);
void func_00779900()
{
    G4_func_00779900(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
