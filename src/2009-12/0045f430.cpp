// roc 2009-12 0045f430  unit: HelpCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045f430
//
// 0045f430  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0045f433  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0045f436  6a00                 push 0
// 0045f438  68fd800000           push 0x80fd
// 0045f43d  6811010000           push 0x111
// 0045f442  51                   push ecx
// 0045f443  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0045f449  c20400               ret 4
// copied from an identical function in another client (function ?method@HelpCommand@ns_ROCX000062@@QAEXH@Z)

namespace ns_ROCX000062 {
extern "C" int (__stdcall *PostMessageA)(void* hWnd, unsigned int Msg, unsigned int wParam, int lParam);

struct HelpCommand {
    char pad[12];
    void* field_c;
    void method(int arg);
};

void HelpCommand::method(int arg) {
    void* p = field_c;
    void* h = *(void**)((char*)p + 0x20);
    PostMessageA(h, 0x111, 0x80fd, 0);
}
}
