// roc 2007-08 0077c250  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c250
//
// 0077c250  a15c768c00           mov eax, dword ptr [0x8c765c]
// 0077c255  50                   push eax
// 0077c256  e8073aebff           call 0x62fc62
// 0077c25b  83c404               add esp, 4
// 0077c25e  c70544768c00b4707800 mov dword ptr [0x8c7644], 0x7870b4
// 0077c268  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c250(int);
void func_0077c250()
{
    G4_func_0077c250(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
