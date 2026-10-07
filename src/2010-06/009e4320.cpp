// roc 2010-06 009e4320  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4320
//
// 009e4320  a1a4cac100           mov eax, dword ptr [0xc1caa4]
// 009e4325  50                   push eax
// 009e4326  e86f36dcff           call 0x7a799a
// 009e432b  83c404               add esp, 4
// 009e432e  c70588cac1001809a000 mov dword ptr [0xc1ca88], 0xa00918
// 009e4338  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4320(int);
void func_009e4320()
{
    G4_func_009e4320(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
