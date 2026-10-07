// roc 2010-06 009de800  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de800
//
// 009de800  a144b1c000           mov eax, dword ptr [0xc0b144]
// 009de805  50                   push eax
// 009de806  e88f91dcff           call 0x7a799a
// 009de80b  83c404               add esp, 4
// 009de80e  c70528b1c0001809a000 mov dword ptr [0xc0b128], 0xa00918
// 009de818  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de800(int);
void func_009de800()
{
    G4_func_009de800(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
