// roc 2010-06 00464a40  unit: HelpCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00464a40
//
// 00464a40  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00464a43  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00464a46  6a00                 push 0
// 00464a48  68fd800000           push 0x80fd
// 00464a4d  6811010000           push 0x111
// 00464a52  51                   push ecx
// 00464a53  ff1548ba9e00         call dword ptr [0x9eba48]
// 00464a59  c20400               ret 4
// copied from an identical function in another client (function ?method@HelpCommand@ns_ROCX00005e@@QAEXH@Z)

namespace ns_ROCX00005e {
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
