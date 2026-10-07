// roc 2010-06 009dea70  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dea70
//
// 009dea70  a114b4c000           mov eax, dword ptr [0xc0b414]
// 009dea75  50                   push eax
// 009dea76  e81f8fdcff           call 0x7a799a
// 009dea7b  83c404               add esp, 4
// 009dea7e  c705f8b3c0001809a000 mov dword ptr [0xc0b3f8], 0xa00918
// 009dea88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dea70(int);
void func_009dea70()
{
    G4_func_009dea70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
