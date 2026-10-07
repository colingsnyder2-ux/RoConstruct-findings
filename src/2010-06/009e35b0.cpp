// roc 2010-06 009e35b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e35b0
//
// 009e35b0  a154adc100           mov eax, dword ptr [0xc1ad54]
// 009e35b5  50                   push eax
// 009e35b6  e8df43dcff           call 0x7a799a
// 009e35bb  83c404               add esp, 4
// 009e35be  c70538adc1001809a000 mov dword ptr [0xc1ad38], 0xa00918
// 009e35c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e35b0(int);
void func_009e35b0()
{
    G4_func_009e35b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
