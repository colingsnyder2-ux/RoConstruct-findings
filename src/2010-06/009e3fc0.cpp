// roc 2010-06 009e3fc0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3fc0
//
// 009e3fc0  a1e4c1c100           mov eax, dword ptr [0xc1c1e4]
// 009e3fc5  50                   push eax
// 009e3fc6  e8cf39dcff           call 0x7a799a
// 009e3fcb  83c404               add esp, 4
// 009e3fce  c705c4c1c1001809a000 mov dword ptr [0xc1c1c4], 0xa00918
// 009e3fd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3fc0(int);
void func_009e3fc0()
{
    G4_func_009e3fc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
