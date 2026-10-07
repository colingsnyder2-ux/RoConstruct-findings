// roc 2010-06 009daa80  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009daa80
//
// 009daa80  a13806c000           mov eax, dword ptr [0xc00638]
// 009daa85  50                   push eax
// 009daa86  e80fcfdcff           call 0x7a799a
// 009daa8b  83c404               add esp, 4
// 009daa8e  c7051c06c0001809a000 mov dword ptr [0xc0061c], 0xa00918
// 009daa98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009daa80(int);
void func_009daa80()
{
    G4_func_009daa80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
