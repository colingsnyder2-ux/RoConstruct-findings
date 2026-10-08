// roc 2007-08 007798a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007798a0
//
// 007798a0  a11c198c00           mov eax, dword ptr [0x8c191c]
// 007798a5  50                   push eax
// 007798a6  e8b763ebff           call 0x62fc62
// 007798ab  83c404               add esp, 4
// 007798ae  c70504198c00b4707800 mov dword ptr [0x8c1904], 0x7870b4
// 007798b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007798a0(int);
void func_007798a0()
{
    G4_func_007798a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
