// roc 2007-08 0077c8f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c8f0
//
// 0077c8f0  a138828c00           mov eax, dword ptr [0x8c8238]
// 0077c8f5  50                   push eax
// 0077c8f6  e86733ebff           call 0x62fc62
// 0077c8fb  83c404               add esp, 4
// 0077c8fe  c70520828c00b4707800 mov dword ptr [0x8c8220], 0x7870b4
// 0077c908  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c8f0(int);
void func_0077c8f0()
{
    G4_func_0077c8f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
