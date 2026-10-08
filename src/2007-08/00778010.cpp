// roc 2007-08 00778010  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778010
//
// 00778010  a11cdf8b00           mov eax, dword ptr [0x8bdf1c]
// 00778015  50                   push eax
// 00778016  e8477cebff           call 0x62fc62
// 0077801b  83c404               add esp, 4
// 0077801e  c70500df8b00b4707800 mov dword ptr [0x8bdf00], 0x7870b4
// 00778028  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778010(int);
void func_00778010()
{
    G4_func_00778010(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
