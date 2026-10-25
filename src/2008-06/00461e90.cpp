// from server: 100% by tester
// roc 2008-06 00461e90  unit: Scintilla::CScintillaFindReplaceDlg  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461e90
//
// 00461e90  56                   push esi
// 00461e91  57                   push edi
// 00461e92  8bf1                 mov esi, ecx
// 00461e94  e8f1ef2300           call 0x6a0e8a
// 00461e99  6812040000           push 0x412
// 00461e9e  8bce                 mov ecx, esi
// 00461ea0  8bf8                 mov edi, eax
// 00461ea2  e871f52300           call 0x6a1418
// 00461ea7  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 00461ead  8b5020               mov edx, dword ptr [eax + 0x20]
// 00461eb0  6a00                 push 0
// 00461eb2  51                   push ecx
// 00461eb3  68f1000000           push 0xf1
// 00461eb8  52                   push edx
// 00461eb9  ff15142e8000         call dword ptr [0x802e14]
// 00461ebf  8bc7                 mov eax, edi
// 00461ec1  5f                   pop edi
// 00461ec2  5e                   pop esi
// 00461ec3  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
struct Wnd { char pad[0x20]; void* hwnd; };
struct Dlg {
    char pad[0x19c];
    void* field_19c;
    void* method();
    Wnd* GetDlgItem(unsigned int id);
};
void* __stdcall getResult();
void* Dlg::method() {
    void* r = getResult();
    Wnd* w = GetDlgItem(0x412);
    SendMessageA(w->hwnd, 0xf1, (unsigned int)field_19c, 0);
    return r;
}
