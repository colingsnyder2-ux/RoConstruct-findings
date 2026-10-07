// roc 2007-08 00777ca0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777ca0
//
// 00777ca0  a130bd8b00           mov eax, dword ptr [0x8bbd30]
// 00777ca5  50                   push eax
// 00777ca6  e8b77febff           call 0x62fc62
// 00777cab  83c404               add esp, 4
// 00777cae  c70518bd8b00b4707800 mov dword ptr [0x8bbd18], 0x7870b4
// 00777cb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777ca0(int);
void func_00777ca0()
{
    G4_func_00777ca0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
