// roc 2007-08 0077a550  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a550
//
// 0077a550  a110318c00           mov eax, dword ptr [0x8c3110]
// 0077a555  50                   push eax
// 0077a556  e80757ebff           call 0x62fc62
// 0077a55b  83c404               add esp, 4
// 0077a55e  c705f8308c00b4707800 mov dword ptr [0x8c30f8], 0x7870b4
// 0077a568  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a550(int);
void func_0077a550()
{
    G4_func_0077a550(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
