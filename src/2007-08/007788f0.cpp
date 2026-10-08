// roc 2007-08 007788f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007788f0
//
// 007788f0  a1ace88b00           mov eax, dword ptr [0x8be8ac]
// 007788f5  50                   push eax
// 007788f6  e86773ebff           call 0x62fc62
// 007788fb  83c404               add esp, 4
// 007788fe  c70594e88b00b4707800 mov dword ptr [0x8be894], 0x7870b4
// 00778908  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007788f0(int);
void func_007788f0()
{
    G4_func_007788f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
