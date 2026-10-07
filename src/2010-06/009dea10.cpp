// roc 2010-06 009dea10  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dea10
//
// 009dea10  a138b4c000           mov eax, dword ptr [0xc0b438]
// 009dea15  50                   push eax
// 009dea16  e87f8fdcff           call 0x7a799a
// 009dea1b  83c404               add esp, 4
// 009dea1e  c70518b4c0001809a000 mov dword ptr [0xc0b418], 0xa00918
// 009dea28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dea10(int);
void func_009dea10()
{
    G4_func_009dea10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
