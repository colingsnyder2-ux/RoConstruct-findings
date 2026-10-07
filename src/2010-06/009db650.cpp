// roc 2010-06 009db650  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db650
//
// 009db650  a1fc17c000           mov eax, dword ptr [0xc017fc]
// 009db655  50                   push eax
// 009db656  e83fc3dcff           call 0x7a799a
// 009db65b  83c404               add esp, 4
// 009db65e  c705e017c0001809a000 mov dword ptr [0xc017e0], 0xa00918
// 009db668  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db650(int);
void func_009db650()
{
    G4_func_009db650(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
