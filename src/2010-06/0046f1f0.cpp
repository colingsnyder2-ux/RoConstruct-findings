// roc 2010-06 0046f1f0  unit: Scintilla::CScintillaFindReplaceDlg  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046f1f0
//
// 0046f1f0  56                   push esi
// 0046f1f1  6812040000           push 0x412
// 0046f1f6  8bf1                 mov esi, ecx
// 0046f1f8  e86d963300           call 0x7a886a
// 0046f1fd  8b4020               mov eax, dword ptr [eax + 0x20]
// 0046f200  6a00                 push 0
// 0046f202  6a00                 push 0
// 0046f204  68f0000000           push 0xf0
// 0046f209  50                   push eax
// 0046f20a  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046f210  48                   dec eax
// 0046f211  f7d8                 neg eax
// 0046f213  1bc0                 sbb eax, eax
// 0046f215  40                   inc eax
// 0046f216  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0046f21c  5e                   pop esi
// 0046f21d  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000019@Scintilla_CScintillaFindReplaceDlg@ns_ROCX000019@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000019 {
extern char G;

char* fn_ROCX000019()
{
    return &G;
}
}
