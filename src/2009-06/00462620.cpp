// roc 2009-06 00462620  unit: Scintilla::CScintillaView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462620
//
// 00462620  6a10                 push 0x10
// 00462622  c781d800000001000000 mov dword ptr [ecx + 0xd8], 1
// 0046262c  ff15a8ed8900         call dword ptr [0x89eda8]
// 00462632  c21800               ret 0x18
// copied from an identical function in another client (function ?Notify@CScintillaView@ns_ROCX000000@@QAEXIIIIII@Z)

namespace ns_ROCX000000 {
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
