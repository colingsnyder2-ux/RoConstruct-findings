// roc 2007-08 00779ac0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ac0
//
// 00779ac0  a1101d8c00           mov eax, dword ptr [0x8c1d10]
// 00779ac5  50                   push eax
// 00779ac6  e89761ebff           call 0x62fc62
// 00779acb  83c404               add esp, 4
// 00779ace  c705f81c8c00b4707800 mov dword ptr [0x8c1cf8], 0x7870b4
// 00779ad8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779ac0(int);
void func_00779ac0()
{
    G4_func_00779ac0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
