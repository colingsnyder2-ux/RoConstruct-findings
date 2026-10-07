// roc 2010-06 009e37f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e37f0
//
// 009e37f0  a15cb2c100           mov eax, dword ptr [0xc1b25c]
// 009e37f5  50                   push eax
// 009e37f6  e89f41dcff           call 0x7a799a
// 009e37fb  83c404               add esp, 4
// 009e37fe  c70540b2c1001809a000 mov dword ptr [0xc1b240], 0xa00918
// 009e3808  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e37f0(int);
void func_009e37f0()
{
    G4_func_009e37f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
