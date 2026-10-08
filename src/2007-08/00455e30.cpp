// from server: 100% by colin
// roc 2007-08 00455e30  unit: CRobloxView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455e30
//
// 00455e30  8b41a0               mov eax, dword ptr [ecx - 0x60]
// 00455e33  6a00                 push 0
// 00455e35  6a00                 push 0
// 00455e37  686b040000           push 0x46b
// 00455e3c  50                   push eax
// 00455e3d  ff15d0ec7700         call dword ptr [0x77ecd0]
// 00455e43  c20800               ret 8

extern "C" __declspec(dllimport) int __stdcall PostMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, int lParam);

struct CRobloxView
{
    void method(int a, int b);
};

void CRobloxView::method(int a, int b)
{
    PostMessageA(*(void**)((char*)this - 0x60), 0x46b, 0, 0);
}
