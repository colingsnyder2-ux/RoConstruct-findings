// roc 2010-06 009de540  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de540
//
// 009de540  a12cafc000           mov eax, dword ptr [0xc0af2c]
// 009de545  50                   push eax
// 009de546  e84f94dcff           call 0x7a799a
// 009de54b  83c404               add esp, 4
// 009de54e  c70510afc0001809a000 mov dword ptr [0xc0af10], 0xa00918
// 009de558  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de540(int);
void func_009de540()
{
    G4_func_009de540(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
