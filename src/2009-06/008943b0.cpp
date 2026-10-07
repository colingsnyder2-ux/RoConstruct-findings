// roc 2009-06 008943b0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008943b0
//
// 008943b0  a17ca4a300           mov eax, dword ptr [0xa3a47c]
// 008943b5  50                   push eax
// 008943b6  e87746e8ff           call 0x718a32
// 008943bb  83c404               add esp, 4
// 008943be  c70564a4a30030d28a00 mov dword ptr [0xa3a464], 0x8ad230
// 008943c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008943b0(int);
void func_008943b0()
{
    G4_func_008943b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
