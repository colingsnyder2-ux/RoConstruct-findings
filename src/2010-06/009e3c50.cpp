// roc 2010-06 009e3c50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3c50
//
// 009e3c50  a120b7c100           mov eax, dword ptr [0xc1b720]
// 009e3c55  50                   push eax
// 009e3c56  e83f3ddcff           call 0x7a799a
// 009e3c5b  83c404               add esp, 4
// 009e3c5e  c70504b7c1001809a000 mov dword ptr [0xc1b704], 0xa00918
// 009e3c68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3c50(int);
void func_009e3c50()
{
    G4_func_009e3c50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
