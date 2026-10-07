// roc 2007-08 0077a570  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a570
//
// 0077a570  a164318c00           mov eax, dword ptr [0x8c3164]
// 0077a575  50                   push eax
// 0077a576  e8e756ebff           call 0x62fc62
// 0077a57b  83c404               add esp, 4
// 0077a57e  c7054c318c00b4707800 mov dword ptr [0x8c314c], 0x7870b4
// 0077a588  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a570(int);
void func_0077a570()
{
    G4_func_0077a570(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
