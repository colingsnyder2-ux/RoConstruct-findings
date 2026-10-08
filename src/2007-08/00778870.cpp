// roc 2007-08 00778870  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778870
//
// 00778870  a174e88b00           mov eax, dword ptr [0x8be874]
// 00778875  50                   push eax
// 00778876  e8e773ebff           call 0x62fc62
// 0077887b  83c404               add esp, 4
// 0077887e  c7055ce88b00b4707800 mov dword ptr [0x8be85c], 0x7870b4
// 00778888  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778870(int);
void func_00778870()
{
    G4_func_00778870(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
