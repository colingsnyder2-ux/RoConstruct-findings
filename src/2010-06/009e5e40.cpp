// roc 2010-06 009e5e40  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5e40
//
// 009e5e40  a13cefc100           mov eax, dword ptr [0xc1ef3c]
// 009e5e45  50                   push eax
// 009e5e46  e84f1bdcff           call 0x7a799a
// 009e5e4b  83c404               add esp, 4
// 009e5e4e  c7051cefc1001809a000 mov dword ptr [0xc1ef1c], 0xa00918
// 009e5e58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5e40(int);
void func_009e5e40()
{
    G4_func_009e5e40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
