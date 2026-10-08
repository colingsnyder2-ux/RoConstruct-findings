// roc 2007-08 0077afb0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077afb0
//
// 0077afb0  a12c528c00           mov eax, dword ptr [0x8c522c]
// 0077afb5  50                   push eax
// 0077afb6  e8a74cebff           call 0x62fc62
// 0077afbb  83c404               add esp, 4
// 0077afbe  c70510528c00b4707800 mov dword ptr [0x8c5210], 0x7870b4
// 0077afc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077afb0(int);
void func_0077afb0()
{
    G4_func_0077afb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
