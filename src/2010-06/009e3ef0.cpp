// roc 2010-06 009e3ef0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3ef0
//
// 009e3ef0  a120c0c100           mov eax, dword ptr [0xc1c020]
// 009e3ef5  50                   push eax
// 009e3ef6  e89f3adcff           call 0x7a799a
// 009e3efb  83c404               add esp, 4
// 009e3efe  c70504c0c1001809a000 mov dword ptr [0xc1c004], 0xa00918
// 009e3f08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3ef0(int);
void func_009e3ef0()
{
    G4_func_009e3ef0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
