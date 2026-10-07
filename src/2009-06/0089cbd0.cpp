// roc 2009-06 0089cbd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cbd0
//
// 0089cbd0  a198f7a400           mov eax, dword ptr [0xa4f798]
// 0089cbd5  50                   push eax
// 0089cbd6  e857bee7ff           call 0x718a32
// 0089cbdb  83c404               add esp, 4
// 0089cbde  c70580f7a40030d28a00 mov dword ptr [0xa4f780], 0x8ad230
// 0089cbe8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cbd0(int);
void func_0089cbd0()
{
    G4_func_0089cbd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
