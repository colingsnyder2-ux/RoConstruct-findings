// roc 2010-06 009e5ce0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ce0
//
// 009e5ce0  a110ebc100           mov eax, dword ptr [0xc1eb10]
// 009e5ce5  50                   push eax
// 009e5ce6  e8af1cdcff           call 0x7a799a
// 009e5ceb  83c404               add esp, 4
// 009e5cee  c705f0eac1001809a000 mov dword ptr [0xc1eaf0], 0xa00918
// 009e5cf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5ce0(int);
void func_009e5ce0()
{
    G4_func_009e5ce0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
