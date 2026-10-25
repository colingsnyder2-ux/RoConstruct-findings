// from server: 100% by king_originala
// roc 2008-06 00458ea0  unit: CRobloxView  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458ea0
//
// 00458ea0  8b8178ffffff         mov eax, dword ptr [ecx - 0x88]
// 00458ea6  6a00                 push 0
// 00458ea8  6a00                 push 0
// 00458eaa  686b040000           push 0x46b
// 00458eaf  50                   push eax
// 00458eb0  ff150c2e8000         call dword ptr [0x802e0c]
// 00458eb6  c20800               ret 8

extern "C" int (__stdcall *PostMessageA)(void *, unsigned int, unsigned int, long);

struct CRobloxView {
    void notify(unsigned int, long);
};

void CRobloxView::notify(unsigned int, long)
{
    void *window = *reinterpret_cast<void **>(
        reinterpret_cast<char *>(this) - 0x88);
    PostMessageA(window, 0x46B, 0, 0);
}
