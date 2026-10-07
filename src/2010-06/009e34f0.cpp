// roc 2010-06 009e34f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e34f0
//
// 009e34f0  a17cadc100           mov eax, dword ptr [0xc1ad7c]
// 009e34f5  50                   push eax
// 009e34f6  e89f44dcff           call 0x7a799a
// 009e34fb  83c404               add esp, 4
// 009e34fe  c70560adc1001809a000 mov dword ptr [0xc1ad60], 0xa00918
// 009e3508  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e34f0(int);
void func_009e34f0()
{
    G4_func_009e34f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
