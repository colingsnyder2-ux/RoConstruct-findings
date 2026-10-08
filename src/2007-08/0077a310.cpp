// roc 2007-08 0077a310  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a310
//
// 0077a310  a128288c00           mov eax, dword ptr [0x8c2828]
// 0077a315  50                   push eax
// 0077a316  e84759ebff           call 0x62fc62
// 0077a31b  83c404               add esp, 4
// 0077a31e  c70510288c00b4707800 mov dword ptr [0x8c2810], 0x7870b4
// 0077a328  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a310(int);
void func_0077a310()
{
    G4_func_0077a310(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
