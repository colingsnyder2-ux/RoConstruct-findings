// roc 2010-06 009db6b0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db6b0
//
// 009db6b0  a15c18c000           mov eax, dword ptr [0xc0185c]
// 009db6b5  50                   push eax
// 009db6b6  e8dfc2dcff           call 0x7a799a
// 009db6bb  83c404               add esp, 4
// 009db6be  c7054018c0001809a000 mov dword ptr [0xc01840], 0xa00918
// 009db6c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db6b0(int);
void func_009db6b0()
{
    G4_func_009db6b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
