// roc 2010-06 009e47a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e47a0
//
// 009e47a0  a130ccc100           mov eax, dword ptr [0xc1cc30]
// 009e47a5  50                   push eax
// 009e47a6  e8ef31dcff           call 0x7a799a
// 009e47ab  83c404               add esp, 4
// 009e47ae  c70510ccc1001809a000 mov dword ptr [0xc1cc10], 0xa00918
// 009e47b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e47a0(int);
void func_009e47a0()
{
    G4_func_009e47a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
