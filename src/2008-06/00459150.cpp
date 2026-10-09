// roc 2008-06 00459150  unit: HelpCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459150
//
// 00459150  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00459153  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00459156  6a00                 push 0
// 00459158  68fd800000           push 0x80fd
// 0045915d  6811010000           push 0x111
// 00459162  51                   push ecx
// 00459163  ff150c2e8000         call dword ptr [0x802e0c]
// 00459169  c20400               ret 4
// copied from an identical function in another client (function ?method@HelpCommand@ns_ROCX00006d@@QAEXH@Z)

namespace ns_ROCX00006d {
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
