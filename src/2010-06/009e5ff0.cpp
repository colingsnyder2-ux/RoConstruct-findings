// roc 2010-06 009e5ff0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ff0
//
// 009e5ff0  a13cf4c100           mov eax, dword ptr [0xc1f43c]
// 009e5ff5  50                   push eax
// 009e5ff6  e89f19dcff           call 0x7a799a
// 009e5ffb  83c404               add esp, 4
// 009e5ffe  c70520f4c1001809a000 mov dword ptr [0xc1f420], 0xa00918
// 009e6008  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5ff0(int);
void func_009e5ff0()
{
    G4_func_009e5ff0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
