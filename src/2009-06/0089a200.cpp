// roc 2009-06 0089a200  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a200
//
// 0089a200  a140bea400           mov eax, dword ptr [0xa4be40]
// 0089a205  50                   push eax
// 0089a206  e827e8e7ff           call 0x718a32
// 0089a20b  83c404               add esp, 4
// 0089a20e  c70528bea40030d28a00 mov dword ptr [0xa4be28], 0x8ad230
// 0089a218  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a200(int);
void func_0089a200()
{
    G4_func_0089a200(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
