// roc 2009-06 0089b850  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b850
//
// 0089b850  a168dea400           mov eax, dword ptr [0xa4de68]
// 0089b855  50                   push eax
// 0089b856  e8d7d1e7ff           call 0x718a32
// 0089b85b  83c404               add esp, 4
// 0089b85e  c70550dea40030d28a00 mov dword ptr [0xa4de50], 0x8ad230
// 0089b868  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b850(int);
void func_0089b850()
{
    G4_func_0089b850(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
