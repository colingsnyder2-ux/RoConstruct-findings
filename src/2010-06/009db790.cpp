// roc 2010-06 009db790  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db790
//
// 009db790  a17c17c000           mov eax, dword ptr [0xc0177c]
// 009db795  50                   push eax
// 009db796  e8ffc1dcff           call 0x7a799a
// 009db79b  83c404               add esp, 4
// 009db79e  c7056017c0001809a000 mov dword ptr [0xc01760], 0xa00918
// 009db7a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db790(int);
void func_009db790()
{
    G4_func_009db790(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
