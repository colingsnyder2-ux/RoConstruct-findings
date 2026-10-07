// roc 2009-06 0089b290  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b290
//
// 0089b290  a1c4d9a400           mov eax, dword ptr [0xa4d9c4]
// 0089b295  50                   push eax
// 0089b296  e897d7e7ff           call 0x718a32
// 0089b29b  83c404               add esp, 4
// 0089b29e  c705a8d9a40030d28a00 mov dword ptr [0xa4d9a8], 0x8ad230
// 0089b2a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b290(int);
void func_0089b290()
{
    G4_func_0089b290(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
