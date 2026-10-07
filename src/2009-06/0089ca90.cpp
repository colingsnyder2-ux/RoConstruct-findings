// roc 2009-06 0089ca90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ca90
//
// 0089ca90  a12cf6a400           mov eax, dword ptr [0xa4f62c]
// 0089ca95  50                   push eax
// 0089ca96  e897bfe7ff           call 0x718a32
// 0089ca9b  83c404               add esp, 4
// 0089ca9e  c70510f6a40030d28a00 mov dword ptr [0xa4f610], 0x8ad230
// 0089caa8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ca90(int);
void func_0089ca90()
{
    G4_func_0089ca90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
