// from server: 100% by colin
// roc 2007-08 0045de70  unit: Scintilla::CScintillaFindReplaceDlg  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045de70
//
// 0045de70  56                   push esi
// 0045de71  6812040000           push 0x412
// 0045de76  8bf1                 mov esi, ecx
// 0045de78  e8ed2a1d00           call 0x63096a
// 0045de7d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0045de80  6a00                 push 0
// 0045de82  6a00                 push 0
// 0045de84  68f0000000           push 0xf0
// 0045de89  50                   push eax
// 0045de8a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045de90  83e801               sub eax, 1
// 0045de93  f7d8                 neg eax
// 0045de95  1bc0                 sbb eax, eax
// 0045de97  83c001               add eax, 1
// 0045de9a  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0045dea0  5e                   pop esi
// 0045dea1  c3                   ret 

struct Scintilla_CScintillaFindReplaceDlg {
    char m_pad[0x19c];
    int m_field19c;
    void func_0045de70();
};

extern "C" void * __stdcall sub_0063096A(int);
extern "C" long (__stdcall *SendMessageA)(void *, unsigned int, unsigned int, long);

void Scintilla_CScintillaFindReplaceDlg::func_0045de70()
{
    void *p = sub_0063096A(0x412);
    int v = (int)SendMessageA(*(void **)((char *)p + 0x20), 0xf0, 0, 0);
    this->m_field19c = (v - 1 == 0) ? 1 : 0;
}
