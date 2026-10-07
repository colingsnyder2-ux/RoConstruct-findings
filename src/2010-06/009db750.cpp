// roc 2010-06 009db750  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db750
//
// 009db750  a15415c000           mov eax, dword ptr [0xc01554]
// 009db755  50                   push eax
// 009db756  e83fc2dcff           call 0x7a799a
// 009db75b  83c404               add esp, 4
// 009db75e  c7053815c0001809a000 mov dword ptr [0xc01538], 0xa00918
// 009db768  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db750(int);
void func_009db750()
{
    G4_func_009db750(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
