// roc 2009-06 008944a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008944a0
//
// 008944a0  a190ada300           mov eax, dword ptr [0xa3ad90]
// 008944a5  50                   push eax
// 008944a6  e88745e8ff           call 0x718a32
// 008944ab  83c404               add esp, 4
// 008944ae  c70574ada30030d28a00 mov dword ptr [0xa3ad74], 0x8ad230
// 008944b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008944a0(int);
void func_008944a0()
{
    G4_func_008944a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
