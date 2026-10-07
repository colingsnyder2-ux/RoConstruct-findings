// roc 2010-06 009dea50  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dea50
//
// 009dea50  a158b4c000           mov eax, dword ptr [0xc0b458]
// 009dea55  50                   push eax
// 009dea56  e83f8fdcff           call 0x7a799a
// 009dea5b  83c404               add esp, 4
// 009dea5e  c7053cb4c0001809a000 mov dword ptr [0xc0b43c], 0xa00918
// 009dea68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dea50(int);
void func_009dea50()
{
    G4_func_009dea50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
