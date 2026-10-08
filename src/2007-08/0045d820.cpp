// from server: 100% by colin
// roc 2007-08 0045d820  unit: Scintilla::CScintillaView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d820
//
// 0045d820  6a10                 push 0x10
// 0045d822  c781d800000001000000 mov dword ptr [ecx + 0xd8], 1
// 0045d82c  ff157ced7700         call dword ptr [0x77ed7c]
// 0045d832  c21800               ret 0x18

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
