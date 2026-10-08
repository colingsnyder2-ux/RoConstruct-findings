// roc 2007-08 0077ba80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ba80
//
// 0077ba80  a1d4628c00           mov eax, dword ptr [0x8c62d4]
// 0077ba85  50                   push eax
// 0077ba86  e8d741ebff           call 0x62fc62
// 0077ba8b  83c404               add esp, 4
// 0077ba8e  c705bc628c00b4707800 mov dword ptr [0x8c62bc], 0x7870b4
// 0077ba98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077ba80(int);
void func_0077ba80()
{
    G4_func_0077ba80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
