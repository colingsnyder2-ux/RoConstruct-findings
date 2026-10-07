// roc 2010-06 009e3ed0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3ed0
//
// 009e3ed0  a18cbfc100           mov eax, dword ptr [0xc1bf8c]
// 009e3ed5  50                   push eax
// 009e3ed6  e8bf3adcff           call 0x7a799a
// 009e3edb  83c404               add esp, 4
// 009e3ede  c70570bfc1001809a000 mov dword ptr [0xc1bf70], 0xa00918
// 009e3ee8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3ed0(int);
void func_009e3ed0()
{
    G4_func_009e3ed0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
