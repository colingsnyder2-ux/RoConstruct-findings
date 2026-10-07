// roc 2009-06 0089b6f0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b6f0
//
// 0089b6f0  a170dda400           mov eax, dword ptr [0xa4dd70]
// 0089b6f5  50                   push eax
// 0089b6f6  e837d3e7ff           call 0x718a32
// 0089b6fb  83c404               add esp, 4
// 0089b6fe  c70558dda40030d28a00 mov dword ptr [0xa4dd58], 0x8ad230
// 0089b708  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b6f0(int);
void func_0089b6f0()
{
    G4_func_0089b6f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
