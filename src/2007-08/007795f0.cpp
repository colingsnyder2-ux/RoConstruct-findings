// roc 2007-08 007795f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007795f0
//
// 007795f0  a198148c00           mov eax, dword ptr [0x8c1498]
// 007795f5  50                   push eax
// 007795f6  e86766ebff           call 0x62fc62
// 007795fb  83c404               add esp, 4
// 007795fe  c70580148c00b4707800 mov dword ptr [0x8c1480], 0x7870b4
// 00779608  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007795f0(int);
void func_007795f0()
{
    G4_func_007795f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
