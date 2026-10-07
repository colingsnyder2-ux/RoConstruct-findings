// roc 2009-06 00896fa0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896fa0
//
// 00896fa0  a14438a400           mov eax, dword ptr [0xa43844]
// 00896fa5  50                   push eax
// 00896fa6  e8871ae8ff           call 0x718a32
// 00896fab  83c404               add esp, 4
// 00896fae  c7052c38a40030d28a00 mov dword ptr [0xa4382c], 0x8ad230
// 00896fb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896fa0(int);
void func_00896fa0()
{
    G4_func_00896fa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
