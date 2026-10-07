// roc 2009-06 0089b650  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b650
//
// 0089b650  a168dca400           mov eax, dword ptr [0xa4dc68]
// 0089b655  50                   push eax
// 0089b656  e8d7d3e7ff           call 0x718a32
// 0089b65b  83c404               add esp, 4
// 0089b65e  c70550dca40030d28a00 mov dword ptr [0xa4dc50], 0x8ad230
// 0089b668  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b650(int);
void func_0089b650()
{
    G4_func_0089b650(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
