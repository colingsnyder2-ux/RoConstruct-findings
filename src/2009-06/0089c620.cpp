// roc 2009-06 0089c620  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c620
//
// 0089c620  a1e0eea400           mov eax, dword ptr [0xa4eee0]
// 0089c625  50                   push eax
// 0089c626  e807c4e7ff           call 0x718a32
// 0089c62b  83c404               add esp, 4
// 0089c62e  c705c8eea40030d28a00 mov dword ptr [0xa4eec8], 0x8ad230
// 0089c638  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c620(int);
void func_0089c620()
{
    G4_func_0089c620(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
