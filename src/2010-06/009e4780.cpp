// roc 2010-06 009e4780  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4780
//
// 009e4780  a1a8ccc100           mov eax, dword ptr [0xc1cca8]
// 009e4785  50                   push eax
// 009e4786  e80f32dcff           call 0x7a799a
// 009e478b  83c404               add esp, 4
// 009e478e  c70588ccc1001809a000 mov dword ptr [0xc1cc88], 0xa00918
// 009e4798  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4780(int);
void func_009e4780()
{
    G4_func_009e4780(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
