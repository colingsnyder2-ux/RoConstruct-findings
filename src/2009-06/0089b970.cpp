// roc 2009-06 0089b970  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b970
//
// 0089b970  a110e1a400           mov eax, dword ptr [0xa4e110]
// 0089b975  50                   push eax
// 0089b976  e8b7d0e7ff           call 0x718a32
// 0089b97b  83c404               add esp, 4
// 0089b97e  c705f8e0a40030d28a00 mov dword ptr [0xa4e0f8], 0x8ad230
// 0089b988  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b970(int);
void func_0089b970()
{
    G4_func_0089b970(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
