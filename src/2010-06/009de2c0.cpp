// roc 2010-06 009de2c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de2c0
//
// 009de2c0  a1f4b1c000           mov eax, dword ptr [0xc0b1f4]
// 009de2c5  50                   push eax
// 009de2c6  e8cf96dcff           call 0x7a799a
// 009de2cb  83c404               add esp, 4
// 009de2ce  c705d8b1c0001809a000 mov dword ptr [0xc0b1d8], 0xa00918
// 009de2d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de2c0(int);
void func_009de2c0()
{
    G4_func_009de2c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
