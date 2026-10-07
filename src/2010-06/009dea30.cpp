// roc 2010-06 009dea30  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dea30
//
// 009dea30  a184b5c000           mov eax, dword ptr [0xc0b584]
// 009dea35  50                   push eax
// 009dea36  e85f8fdcff           call 0x7a799a
// 009dea3b  83c404               add esp, 4
// 009dea3e  c70568b5c0001809a000 mov dword ptr [0xc0b568], 0xa00918
// 009dea48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dea30(int);
void func_009dea30()
{
    G4_func_009dea30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
