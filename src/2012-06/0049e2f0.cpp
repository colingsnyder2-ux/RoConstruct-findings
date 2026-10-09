// roc 2012-06 0049e2f0  unit: Scintilla::CScintillaView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e2f0
//
// 0049e2f0  6a10                 push 0x10
// 0049e2f2  c781d800000001000000 mov dword ptr [ecx + 0xd8], 1
// 0049e2fc  ff15683bb200         call dword ptr [0xb23b68]
// 0049e302  c21800               ret 0x18
// copied from an identical function in another client (function ?Notify@CScintillaView@ns_ROCX000001@@QAEXIIIIII@Z)

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
