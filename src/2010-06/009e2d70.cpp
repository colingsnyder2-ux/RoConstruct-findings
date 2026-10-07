// roc 2010-06 009e2d70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2d70
//
// 009e2d70  a1ac9ec100           mov eax, dword ptr [0xc19eac]
// 009e2d75  50                   push eax
// 009e2d76  e81f4cdcff           call 0x7a799a
// 009e2d7b  83c404               add esp, 4
// 009e2d7e  c705909ec1001809a000 mov dword ptr [0xc19e90], 0xa00918
// 009e2d88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2d70(int);
void func_009e2d70()
{
    G4_func_009e2d70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
