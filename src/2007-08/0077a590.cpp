// roc 2007-08 0077a590  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a590
//
// 0077a590  a19c318c00           mov eax, dword ptr [0x8c319c]
// 0077a595  50                   push eax
// 0077a596  e8c756ebff           call 0x62fc62
// 0077a59b  83c404               add esp, 4
// 0077a59e  c70584318c00b4707800 mov dword ptr [0x8c3184], 0x7870b4
// 0077a5a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a590(int);
void func_0077a590()
{
    G4_func_0077a590(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
