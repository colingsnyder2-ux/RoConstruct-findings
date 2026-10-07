// roc 2010-06 009e5da0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5da0
//
// 009e5da0  a1eceac100           mov eax, dword ptr [0xc1eaec]
// 009e5da5  50                   push eax
// 009e5da6  e8ef1bdcff           call 0x7a799a
// 009e5dab  83c404               add esp, 4
// 009e5dae  c705d0eac1001809a000 mov dword ptr [0xc1ead0], 0xa00918
// 009e5db8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5da0(int);
void func_009e5da0()
{
    G4_func_009e5da0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
