// roc 2009-06 0089cdb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cdb0
//
// 0089cdb0  a158faa400           mov eax, dword ptr [0xa4fa58]
// 0089cdb5  50                   push eax
// 0089cdb6  e877bce7ff           call 0x718a32
// 0089cdbb  83c404               add esp, 4
// 0089cdbe  c70540faa40030d28a00 mov dword ptr [0xa4fa40], 0x8ad230
// 0089cdc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cdb0(int);
void func_0089cdb0()
{
    G4_func_0089cdb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
