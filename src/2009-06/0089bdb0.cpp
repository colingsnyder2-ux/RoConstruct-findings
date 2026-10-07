// roc 2009-06 0089bdb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bdb0
//
// 0089bdb0  a138e4a400           mov eax, dword ptr [0xa4e438]
// 0089bdb5  50                   push eax
// 0089bdb6  e877cce7ff           call 0x718a32
// 0089bdbb  83c404               add esp, 4
// 0089bdbe  c70520e4a40030d28a00 mov dword ptr [0xa4e420], 0x8ad230
// 0089bdc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bdb0(int);
void func_0089bdb0()
{
    G4_func_0089bdb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
