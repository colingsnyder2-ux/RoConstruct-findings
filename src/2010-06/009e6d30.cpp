// roc 2010-06 009e6d30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6d30
//
// 009e6d30  a16801c200           mov eax, dword ptr [0xc20168]
// 009e6d35  50                   push eax
// 009e6d36  e85f0cdcff           call 0x7a799a
// 009e6d3b  83c404               add esp, 4
// 009e6d3e  c7054801c2001809a000 mov dword ptr [0xc20148], 0xa00918
// 009e6d48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6d30(int);
void func_009e6d30()
{
    G4_func_009e6d30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
