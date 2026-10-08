// roc 2007-08 007788d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007788d0
//
// 007788d0  a1e4e88b00           mov eax, dword ptr [0x8be8e4]
// 007788d5  50                   push eax
// 007788d6  e88773ebff           call 0x62fc62
// 007788db  83c404               add esp, 4
// 007788de  c705cce88b00b4707800 mov dword ptr [0x8be8cc], 0x7870b4
// 007788e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007788d0(int);
void func_007788d0()
{
    G4_func_007788d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
