// roc 2009-06 0089bfa0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bfa0
//
// 0089bfa0  a1f0e6a400           mov eax, dword ptr [0xa4e6f0]
// 0089bfa5  50                   push eax
// 0089bfa6  e887cae7ff           call 0x718a32
// 0089bfab  83c404               add esp, 4
// 0089bfae  c705d8e6a40030d28a00 mov dword ptr [0xa4e6d8], 0x8ad230
// 0089bfb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bfa0(int);
void func_0089bfa0()
{
    G4_func_0089bfa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
