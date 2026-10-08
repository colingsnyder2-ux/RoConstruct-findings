// roc 2007-08 00779aa0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779aa0
//
// 00779aa0  a1481d8c00           mov eax, dword ptr [0x8c1d48]
// 00779aa5  50                   push eax
// 00779aa6  e8b761ebff           call 0x62fc62
// 00779aab  83c404               add esp, 4
// 00779aae  c705301d8c00b4707800 mov dword ptr [0x8c1d30], 0x7870b4
// 00779ab8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779aa0(int);
void func_00779aa0()
{
    G4_func_00779aa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
