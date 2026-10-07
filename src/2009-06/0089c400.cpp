// roc 2009-06 0089c400  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c400
//
// 0089c400  a10ceea400           mov eax, dword ptr [0xa4ee0c]
// 0089c405  50                   push eax
// 0089c406  e827c6e7ff           call 0x718a32
// 0089c40b  83c404               add esp, 4
// 0089c40e  c705f4eda40030d28a00 mov dword ptr [0xa4edf4], 0x8ad230
// 0089c418  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c400(int);
void func_0089c400()
{
    G4_func_0089c400(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
