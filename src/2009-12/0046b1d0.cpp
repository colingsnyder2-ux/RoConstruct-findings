// roc 2009-12 0046b1d0  unit: Scintilla::CScintillaView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b1d0
//
// 0046b1d0  6a10                 push 0x10
// 0046b1d2  c781d800000001000000 mov dword ptr [ecx + 0xd8], 1
// 0046b1dc  ff153cca9800         call dword ptr [0x98ca3c]
// 0046b1e2  c21800               ret 0x18
// copied from an identical function in another client (function ?Notify@CScintillaView@ns_ROCX00002d@@QAEXIIIIII@Z)

namespace ns_ROCX00002d {
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
