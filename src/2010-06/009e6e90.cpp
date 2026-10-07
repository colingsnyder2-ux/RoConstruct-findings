// roc 2010-06 009e6e90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6e90
//
// 009e6e90  a1e403c200           mov eax, dword ptr [0xc203e4]
// 009e6e95  50                   push eax
// 009e6e96  e8ff0adcff           call 0x7a799a
// 009e6e9b  83c404               add esp, 4
// 009e6e9e  c705c803c2001809a000 mov dword ptr [0xc203c8], 0xa00918
// 009e6ea8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6e90(int);
void func_009e6e90()
{
    G4_func_009e6e90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
