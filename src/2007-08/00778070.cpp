// roc 2007-08 00778070  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778070
//
// 00778070  a170df8b00           mov eax, dword ptr [0x8bdf70]
// 00778075  50                   push eax
// 00778076  e8e77bebff           call 0x62fc62
// 0077807b  83c404               add esp, 4
// 0077807e  c70558df8b00b4707800 mov dword ptr [0x8bdf58], 0x7870b4
// 00778088  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778070(int);
void func_00778070()
{
    G4_func_00778070(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
