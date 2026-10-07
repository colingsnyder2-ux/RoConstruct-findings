// roc 2010-06 009e3f50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3f50
//
// 009e3f50  a1b4c0c100           mov eax, dword ptr [0xc1c0b4]
// 009e3f55  50                   push eax
// 009e3f56  e83f3adcff           call 0x7a799a
// 009e3f5b  83c404               add esp, 4
// 009e3f5e  c70598c0c1001809a000 mov dword ptr [0xc1c098], 0xa00918
// 009e3f68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3f50(int);
void func_009e3f50()
{
    G4_func_009e3f50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
