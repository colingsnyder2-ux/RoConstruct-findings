// roc 2011-06 0048bb30  unit: Scintilla::CScintillaFindReplaceDlg  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048bb30
//
// 0048bb30  56                   push esi
// 0048bb31  6812040000           push 0x412
// 0048bb36  8bf1                 mov esi, ecx
// 0048bb38  e821f43700           call 0x80af5e
// 0048bb3d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0048bb40  6a00                 push 0
// 0048bb42  6a00                 push 0
// 0048bb44  68f0000000           push 0xf0
// 0048bb49  50                   push eax
// 0048bb4a  ff15c019a400         call dword ptr [0xa419c0]
// 0048bb50  48                   dec eax
// 0048bb51  f7d8                 neg eax
// 0048bb53  1bc0                 sbb eax, eax
// 0048bb55  40                   inc eax
// 0048bb56  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0048bb5c  5e                   pop esi
// 0048bb5d  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000a@Scintilla_CScintillaFindReplaceDlg@ns_ROCX00000a@ns_ROCX000028@@QAEXXZ)

namespace ns_ROCX00000a {
extern void G1_func_00458e80();
void fn_ROCX00000a()
{
    G1_func_00458e80();
}
}
