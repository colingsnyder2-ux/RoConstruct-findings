// roc 2007-08 0077a770  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a770
//
// 0077a770  a11c348c00           mov eax, dword ptr [0x8c341c]
// 0077a775  50                   push eax
// 0077a776  e8e754ebff           call 0x62fc62
// 0077a77b  83c404               add esp, 4
// 0077a77e  c70504348c00b4707800 mov dword ptr [0x8c3404], 0x7870b4
// 0077a788  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a770(int);
void func_0077a770()
{
    G4_func_0077a770(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
