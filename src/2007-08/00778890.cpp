// roc 2007-08 00778890  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778890
//
// 00778890  a158e88b00           mov eax, dword ptr [0x8be858]
// 00778895  50                   push eax
// 00778896  e8c773ebff           call 0x62fc62
// 0077889b  83c404               add esp, 4
// 0077889e  c70540e88b00b4707800 mov dword ptr [0x8be840], 0x7870b4
// 007788a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778890(int);
void func_00778890()
{
    G4_func_00778890(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
