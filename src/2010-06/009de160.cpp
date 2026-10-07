// roc 2010-06 009de160  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de160
//
// 009de160  a1acaac000           mov eax, dword ptr [0xc0aaac]
// 009de165  50                   push eax
// 009de166  e82f98dcff           call 0x7a799a
// 009de16b  83c404               add esp, 4
// 009de16e  c70590aac0001809a000 mov dword ptr [0xc0aa90], 0xa00918
// 009de178  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de160(int);
void func_009de160()
{
    G4_func_009de160(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
