// roc 2009-06 0089aed0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aed0
//
// 0089aed0  a190d1a400           mov eax, dword ptr [0xa4d190]
// 0089aed5  50                   push eax
// 0089aed6  e857dbe7ff           call 0x718a32
// 0089aedb  83c404               add esp, 4
// 0089aede  c70574d1a40030d28a00 mov dword ptr [0xa4d174], 0x8ad230
// 0089aee8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aed0(int);
void func_0089aed0()
{
    G4_func_0089aed0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
