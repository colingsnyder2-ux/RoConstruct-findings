// roc 2009-06 0089af90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089af90
//
// 0089af90  a170d1a400           mov eax, dword ptr [0xa4d170]
// 0089af95  50                   push eax
// 0089af96  e897dae7ff           call 0x718a32
// 0089af9b  83c404               add esp, 4
// 0089af9e  c70558d1a40030d28a00 mov dword ptr [0xa4d158], 0x8ad230
// 0089afa8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089af90(int);
void func_0089af90()
{
    G4_func_0089af90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
