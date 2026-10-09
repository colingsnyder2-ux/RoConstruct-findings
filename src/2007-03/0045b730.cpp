// roc 2007-03 0045b730  unit: seg_00450000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045b730
//
// 0045b730  56                   push esi
// 0045b731  6812040000           push 0x412
// 0045b736  8bf1                 mov esi, ecx
// 0045b738  e8a9361c00           call 0x61ede6
// 0045b73d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0045b740  6a00                 push 0
// 0045b742  6a00                 push 0
// 0045b744  68f0000000           push 0xf0
// 0045b749  50                   push eax
// 0045b74a  ff1550ee7700         call dword ptr [0x77ee50]
// 0045b750  83e801               sub eax, 1
// 0045b753  f7d8                 neg eax
// 0045b755  1bc0                 sbb eax, eax
// 0045b757  83c001               add eax, 1
// 0045b75a  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0045b760  5e                   pop esi
// 0045b761  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000005@Scintilla_CScintillaFindReplaceDlg@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct Scintilla_CScintillaFindReplaceDlg {
    char m_pad[0x19c];
    int m_field19c;
    void fn_ROCX000005();
};

extern "C" void * __stdcall sub_0063096A(int);
extern "C" long (__stdcall *SendMessageA)(void *, unsigned int, unsigned int, long);

void Scintilla_CScintillaFindReplaceDlg::fn_ROCX000005()
{
    void *p = sub_0063096A(0x412);
    int v = (int)SendMessageA(*(void **)((char *)p + 0x20), 0xf0, 0, 0);
    this->m_field19c = (v - 1 == 0) ? 1 : 0;
}
}
