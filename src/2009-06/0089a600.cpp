// roc 2009-06 0089a600  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a600
//
// 0089a600  a1a0c4a400           mov eax, dword ptr [0xa4c4a0]
// 0089a605  50                   push eax
// 0089a606  e827e4e7ff           call 0x718a32
// 0089a60b  83c404               add esp, 4
// 0089a60e  c70588c4a40030d28a00 mov dword ptr [0xa4c488], 0x8ad230
// 0089a618  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a600(int);
void func_0089a600()
{
    G4_func_0089a600(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
