// roc 2007-08 00778850  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778850
//
// 00778850  a13ce88b00           mov eax, dword ptr [0x8be83c]
// 00778855  50                   push eax
// 00778856  e80774ebff           call 0x62fc62
// 0077885b  83c404               add esp, 4
// 0077885e  c70524e88b00b4707800 mov dword ptr [0x8be824], 0x7870b4
// 00778868  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778850(int);
void func_00778850()
{
    G4_func_00778850(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
