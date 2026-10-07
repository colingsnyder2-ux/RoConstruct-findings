// roc 2010-06 009e5c20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5c20
//
// 009e5c20  a124edc100           mov eax, dword ptr [0xc1ed24]
// 009e5c25  50                   push eax
// 009e5c26  e86f1ddcff           call 0x7a799a
// 009e5c2b  83c404               add esp, 4
// 009e5c2e  c70508edc1001809a000 mov dword ptr [0xc1ed08], 0xa00918
// 009e5c38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5c20(int);
void func_009e5c20()
{
    G4_func_009e5c20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
