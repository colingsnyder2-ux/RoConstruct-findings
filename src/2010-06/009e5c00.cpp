// roc 2010-06 009e5c00  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5c00
//
// 009e5c00  a170eac100           mov eax, dword ptr [0xc1ea70]
// 009e5c05  50                   push eax
// 009e5c06  e88f1ddcff           call 0x7a799a
// 009e5c0b  83c404               add esp, 4
// 009e5c0e  c70554eac1001809a000 mov dword ptr [0xc1ea54], 0xa00918
// 009e5c18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5c00(int);
void func_009e5c00()
{
    G4_func_009e5c00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
