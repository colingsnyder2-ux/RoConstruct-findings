// roc 2007-08 0077c1f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c1f0
//
// 0077c1f0  a1f4748c00           mov eax, dword ptr [0x8c74f4]
// 0077c1f5  50                   push eax
// 0077c1f6  e8673aebff           call 0x62fc62
// 0077c1fb  83c404               add esp, 4
// 0077c1fe  c705dc748c00b4707800 mov dword ptr [0x8c74dc], 0x7870b4
// 0077c208  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c1f0(int);
void func_0077c1f0()
{
    G4_func_0077c1f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
