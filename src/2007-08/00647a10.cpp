// from server: 87% by colin
// roc 2007-08 00647a10  unit: CXTPCommandBar  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647a10
//
// 00647a10  56                   push esi
// 00647a11  8bf1                 mov esi, ecx
// 00647a13  e8f8faffff           call 0x647510
// 00647a18  85c0                 test eax, eax
// 00647a1a  7426                 je 0x647a42
// 00647a1c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00647a1f  8d44240c             lea eax, [esp + 0xc]
// 00647a23  50                   push eax
// 00647a24  51                   push ecx
// 00647a25  ff1550ec7700         call dword ptr [0x77ec50]
// 00647a2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00647a2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00647a33  52                   push edx
// 00647a34  50                   push eax
// 00647a35  6a00                 push 0
// 00647a37  8bce                 mov ecx, esi
// 00647a39  e852f0ffff           call 0x646a90
// 00647a3e  5e                   pop esi
// 00647a3f  c20c00               ret 0xc
// 00647a42  8bce                 mov ecx, esi
// 00647a44  e8f587feff           call 0x63023e
// 00647a49  5e                   pop esi
// 00647a4a  c20c00               ret 0xc

struct CXTPCommandBar {
    char pad[0x20];
    void* hwnd;
    int sub_647510();
    int sub_646a90(int, int, int);
    int sub_63023e();
    int f(int, int, int);
};

extern "C" int __stdcall ScreenToClient(void*, void*);

int CXTPCommandBar::f(int a, int b, int c) {
    if (sub_647510()) {
        int x;
        int y;
        ScreenToClient(hwnd, &x);
        return sub_646a90(0, x, y);
    }
    return sub_63023e();
}
