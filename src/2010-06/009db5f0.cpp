// roc 2010-06 009db5f0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db5f0
//
// 009db5f0  a19c17c000           mov eax, dword ptr [0xc0179c]
// 009db5f5  50                   push eax
// 009db5f6  e89fc3dcff           call 0x7a799a
// 009db5fb  83c404               add esp, 4
// 009db5fe  c7058017c0001809a000 mov dword ptr [0xc01780], 0xa00918
// 009db608  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db5f0(int);
void func_009db5f0()
{
    G4_func_009db5f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
