// roc 2010-06 009e4840  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4840
//
// 009e4840  a144cdc100           mov eax, dword ptr [0xc1cd44]
// 009e4845  50                   push eax
// 009e4846  e84f31dcff           call 0x7a799a
// 009e484b  83c404               add esp, 4
// 009e484e  c70528cdc1001809a000 mov dword ptr [0xc1cd28], 0xa00918
// 009e4858  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4840(int);
void func_009e4840()
{
    G4_func_009e4840(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
