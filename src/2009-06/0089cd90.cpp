// roc 2009-06 0089cd90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cd90
//
// 0089cd90  a1a0fba400           mov eax, dword ptr [0xa4fba0]
// 0089cd95  50                   push eax
// 0089cd96  e897bce7ff           call 0x718a32
// 0089cd9b  83c404               add esp, 4
// 0089cd9e  c70588fba40030d28a00 mov dword ptr [0xa4fb88], 0x8ad230
// 0089cda8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cd90(int);
void func_0089cd90()
{
    G4_func_0089cd90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
