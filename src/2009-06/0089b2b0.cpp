// roc 2009-06 0089b2b0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b2b0
//
// 0089b2b0  a130d7a400           mov eax, dword ptr [0xa4d730]
// 0089b2b5  50                   push eax
// 0089b2b6  e877d7e7ff           call 0x718a32
// 0089b2bb  83c404               add esp, 4
// 0089b2be  c70518d7a40030d28a00 mov dword ptr [0xa4d718], 0x8ad230
// 0089b2c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b2b0(int);
void func_0089b2b0()
{
    G4_func_0089b2b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
