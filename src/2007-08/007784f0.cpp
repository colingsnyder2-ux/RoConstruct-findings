// roc 2007-08 007784f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007784f0
//
// 007784f0  a124e18b00           mov eax, dword ptr [0x8be124]
// 007784f5  50                   push eax
// 007784f6  e86777ebff           call 0x62fc62
// 007784fb  83c404               add esp, 4
// 007784fe  c70508e18b00b4707800 mov dword ptr [0x8be108], 0x7870b4
// 00778508  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007784f0(int);
void func_007784f0()
{
    G4_func_007784f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
