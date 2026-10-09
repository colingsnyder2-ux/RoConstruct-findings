// roc 2008-06 00461ed0  unit: Scintilla::CScintillaFindReplaceDlg  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461ed0
//
// 00461ed0  56                   push esi
// 00461ed1  6812040000           push 0x412
// 00461ed6  8bf1                 mov esi, ecx
// 00461ed8  e83bf52300           call 0x6a1418
// 00461edd  8b4020               mov eax, dword ptr [eax + 0x20]
// 00461ee0  6a00                 push 0
// 00461ee2  6a00                 push 0
// 00461ee4  68f0000000           push 0xf0
// 00461ee9  50                   push eax
// 00461eea  ff15142e8000         call dword ptr [0x802e14]
// 00461ef0  48                   dec eax
// 00461ef1  f7d8                 neg eax
// 00461ef3  1bc0                 sbb eax, eax
// 00461ef5  40                   inc eax
// 00461ef6  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00461efc  5e                   pop esi
// 00461efd  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000a@Scintilla_CScintillaFindReplaceDlg@ns_ROCX00000a@@QAEXXZ)

namespace ns_ROCX00000a {
struct Scintilla_CScintillaFindReplaceDlg {
    char m_pad[0x19c];
    int m_field19c;
    void fn_ROCX00000a();
};

extern "C" void * __stdcall sub_0063096A(int);
extern "C" long (__stdcall *SendMessageA)(void *, unsigned int, unsigned int, long);

void Scintilla_CScintillaFindReplaceDlg::fn_ROCX00000a()
{
    void *p = sub_0063096A(0x412);
    int v = (int)SendMessageA(*(void **)((char *)p + 0x20), 0xf0, 0, 0);
    this->m_field19c = (v - 1 == 0) ? 1 : 0;
}
}
