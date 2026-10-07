// roc 2010-06 009db690  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db690
//
// 009db690  a13c18c000           mov eax, dword ptr [0xc0183c]
// 009db695  50                   push eax
// 009db696  e8ffc2dcff           call 0x7a799a
// 009db69b  83c404               add esp, 4
// 009db69e  c7052018c0001809a000 mov dword ptr [0xc01820], 0xa00918
// 009db6a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db690(int);
void func_009db690()
{
    G4_func_009db690(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
