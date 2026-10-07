// roc 2010-06 009de860  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de860
//
// 009de860  a1e8aac000           mov eax, dword ptr [0xc0aae8]
// 009de865  50                   push eax
// 009de866  e82f91dcff           call 0x7a799a
// 009de86b  83c404               add esp, 4
// 009de86e  c705ccaac0001809a000 mov dword ptr [0xc0aacc], 0xa00918
// 009de878  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de860(int);
void func_009de860()
{
    G4_func_009de860(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
