// from server: 100% by colin
// roc 2007-08 004560f0  unit: HelpCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004560f0
//
// 004560f0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004560f3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004560f6  6a00                 push 0
// 004560f8  68fd800000           push 0x80fd
// 004560fd  6811010000           push 0x111
// 00456102  51                   push ecx
// 00456103  ff15d0ec7700         call dword ptr [0x77ecd0]
// 00456109  c20400               ret 4

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
