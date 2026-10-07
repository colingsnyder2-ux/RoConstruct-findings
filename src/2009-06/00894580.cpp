// roc 2009-06 00894580  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894580
//
// 00894580  a19caea300           mov eax, dword ptr [0xa3ae9c]
// 00894585  50                   push eax
// 00894586  e8a744e8ff           call 0x718a32
// 0089458b  83c404               add esp, 4
// 0089458e  c70580aea30030d28a00 mov dword ptr [0xa3ae80], 0x8ad230
// 00894598  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894580(int);
void func_00894580()
{
    G4_func_00894580(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
