// roc 2007-08 00779960  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779960
//
// 00779960  a100178c00           mov eax, dword ptr [0x8c1700]
// 00779965  50                   push eax
// 00779966  e8f762ebff           call 0x62fc62
// 0077996b  83c404               add esp, 4
// 0077996e  c705e8168c00b4707800 mov dword ptr [0x8c16e8], 0x7870b4
// 00779978  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779960(int);
void func_00779960()
{
    G4_func_00779960(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
