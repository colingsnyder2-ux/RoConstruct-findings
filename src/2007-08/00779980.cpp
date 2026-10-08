// roc 2007-08 00779980  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779980
//
// 00779980  a138188c00           mov eax, dword ptr [0x8c1838]
// 00779985  50                   push eax
// 00779986  e8d762ebff           call 0x62fc62
// 0077998b  83c404               add esp, 4
// 0077998e  c70520188c00b4707800 mov dword ptr [0x8c1820], 0x7870b4
// 00779998  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779980(int);
void func_00779980()
{
    G4_func_00779980(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
