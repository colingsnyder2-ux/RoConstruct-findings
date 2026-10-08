// roc 2007-08 0077a5d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a5d0
//
// 0077a5d0  a180318c00           mov eax, dword ptr [0x8c3180]
// 0077a5d5  50                   push eax
// 0077a5d6  e88756ebff           call 0x62fc62
// 0077a5db  83c404               add esp, 4
// 0077a5de  c70568318c00b4707800 mov dword ptr [0x8c3168], 0x7870b4
// 0077a5e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a5d0(int);
void func_0077a5d0()
{
    G4_func_0077a5d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
