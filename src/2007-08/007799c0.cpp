// roc 2007-08 007799c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007799c0
//
// 007799c0  a154178c00           mov eax, dword ptr [0x8c1754]
// 007799c5  50                   push eax
// 007799c6  e89762ebff           call 0x62fc62
// 007799cb  83c404               add esp, 4
// 007799ce  c7053c178c00b4707800 mov dword ptr [0x8c173c], 0x7870b4
// 007799d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007799c0(int);
void func_007799c0()
{
    G4_func_007799c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
