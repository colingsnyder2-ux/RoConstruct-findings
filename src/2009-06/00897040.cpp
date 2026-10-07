// roc 2009-06 00897040  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897040
//
// 00897040  a1103aa400           mov eax, dword ptr [0xa43a10]
// 00897045  50                   push eax
// 00897046  e8e719e8ff           call 0x718a32
// 0089704b  83c404               add esp, 4
// 0089704e  c705f439a40030d28a00 mov dword ptr [0xa439f4], 0x8ad230
// 00897058  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897040(int);
void func_00897040()
{
    G4_func_00897040(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
