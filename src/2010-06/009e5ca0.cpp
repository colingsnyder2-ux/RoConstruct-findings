// roc 2010-06 009e5ca0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ca0
//
// 009e5ca0  a194ebc100           mov eax, dword ptr [0xc1eb94]
// 009e5ca5  50                   push eax
// 009e5ca6  e8ef1cdcff           call 0x7a799a
// 009e5cab  83c404               add esp, 4
// 009e5cae  c70578ebc1001809a000 mov dword ptr [0xc1eb78], 0xa00918
// 009e5cb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5ca0(int);
void func_009e5ca0()
{
    G4_func_009e5ca0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
