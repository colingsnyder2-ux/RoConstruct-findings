// roc 2010-06 009e4b90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4b90
//
// 009e4b90  a180d2c100           mov eax, dword ptr [0xc1d280]
// 009e4b95  50                   push eax
// 009e4b96  e8ff2ddcff           call 0x7a799a
// 009e4b9b  83c404               add esp, 4
// 009e4b9e  c70564d2c1001809a000 mov dword ptr [0xc1d264], 0xa00918
// 009e4ba8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4b90(int);
void func_009e4b90()
{
    G4_func_009e4b90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
