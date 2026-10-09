// roc 2009-12 0046b6f0  unit: Scintilla::CScintillaFindReplaceDlg  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b6f0
//
// 0046b6f0  56                   push esi
// 0046b6f1  6812040000           push 0x412
// 0046b6f6  8bf1                 mov esi, ecx
// 0046b6f8  e833903800           call 0x7f4730
// 0046b6fd  8b4020               mov eax, dword ptr [eax + 0x20]
// 0046b700  6a00                 push 0
// 0046b702  6a00                 push 0
// 0046b704  68f0000000           push 0xf0
// 0046b709  50                   push eax
// 0046b70a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046b710  48                   dec eax
// 0046b711  f7d8                 neg eax
// 0046b713  1bc0                 sbb eax, eax
// 0046b715  40                   inc eax
// 0046b716  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0046b71c  5e                   pop esi
// 0046b71d  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000005@Scintilla_CScintillaFindReplaceDlg@ns_ROCX000005@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX000005 {
namespace ns_ROCX000001 {
extern "C" int (__stdcall *MessageBeep)(unsigned int uType);

struct CScintillaView {
    char pad[0xd8];
    int field_d8;
    void Notify(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f);
};

void CScintillaView::Notify(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f)
{
    field_d8 = 1;
    MessageBeep(0x10);
}
}
}
