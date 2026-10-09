// roc 2009-06 00457ba0  unit: HelpCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00457ba0
//
// 00457ba0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00457ba3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00457ba6  6a00                 push 0
// 00457ba8  68fd800000           push 0x80fd
// 00457bad  6811010000           push 0x111
// 00457bb2  51                   push ecx
// 00457bb3  ff159cee8900         call dword ptr [0x89ee9c]
// 00457bb9  c20400               ret 4
// copied from an identical function in another client (function ?method@HelpCommand@ns_ROCX000054@@QAEXH@Z)

namespace ns_ROCX000054 {
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
