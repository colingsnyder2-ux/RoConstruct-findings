// roc 2009-06 0089c420  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c420
//
// 0089c420  a1f4eca400           mov eax, dword ptr [0xa4ecf4]
// 0089c425  50                   push eax
// 0089c426  e807c6e7ff           call 0x718a32
// 0089c42b  83c404               add esp, 4
// 0089c42e  c705dceca40030d28a00 mov dword ptr [0xa4ecdc], 0x8ad230
// 0089c438  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c420(int);
void func_0089c420()
{
    G4_func_0089c420(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
