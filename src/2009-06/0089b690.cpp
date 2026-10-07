// roc 2009-06 0089b690  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b690
//
// 0089b690  a1bcdca400           mov eax, dword ptr [0xa4dcbc]
// 0089b695  50                   push eax
// 0089b696  e897d3e7ff           call 0x718a32
// 0089b69b  83c404               add esp, 4
// 0089b69e  c705a0dca40030d28a00 mov dword ptr [0xa4dca0], 0x8ad230
// 0089b6a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b690(int);
void func_0089b690()
{
    G4_func_0089b690(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
