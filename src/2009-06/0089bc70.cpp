// roc 2009-06 0089bc70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bc70
//
// 0089bc70  a180e4a400           mov eax, dword ptr [0xa4e480]
// 0089bc75  50                   push eax
// 0089bc76  e8b7cde7ff           call 0x718a32
// 0089bc7b  83c404               add esp, 4
// 0089bc7e  c70564e4a40030d28a00 mov dword ptr [0xa4e464], 0x8ad230
// 0089bc88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bc70(int);
void func_0089bc70()
{
    G4_func_0089bc70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
