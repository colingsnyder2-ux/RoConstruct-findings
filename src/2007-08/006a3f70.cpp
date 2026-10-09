// from server: 80% by colin
// roc 2007-08 006a3f70  unit: PAUHWND__::?$CArray  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3f70
//
// 006a3f70  56                   push esi
// 006a3f71  57                   push edi
// 006a3f72  8bf1                 mov esi, ecx
// 006a3f74  e889bff8ff           call 0x62ff02
// 006a3f79  837e1000             cmp dword ptr [esi + 0x10], 0
// 006a3f7d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a3f81  894644               mov dword ptr [esi + 0x44], eax
// 006a3f84  7510                 jne 0x6a3f96
// 006a3f86  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a3f89  85c9                 test ecx, ecx
// 006a3f8b  7409                 je 0x6a3f96
// 006a3f8d  3bcf                 cmp ecx, edi
// 006a3f8f  7405                 je 0x6a3f96
// 006a3f91  e8eaf6f9ff           call 0x643680
// 006a3f96  83c608               add esi, 8
// 006a3f99  57                   push edi
// 006a3f9a  8bce                 mov ecx, esi
// 006a3f9c  e81ff8ffff           call 0x6a37c0
// 006a3fa1  83f8ff               cmp eax, -1
// 006a3fa4  750c                 jne 0x6a3fb2
// 006a3fa6  8b4608               mov eax, dword ptr [esi + 8]
// 006a3fa9  57                   push edi
// 006a3faa  50                   push eax
// 006a3fab  8bce                 mov ecx, esi
// 006a3fad  e85ee90200           call 0x6d2910
// 006a3fb2  5f                   pop edi
// 006a3fb3  5e                   pop esi
// 006a3fb4  c20800               ret 8

struct HWND__;
typedef HWND__* HWND;

struct CArrayHWND {
    char pad0[0x10];
    int field10;
    char pad14[0x0C];
    void* field20;
    char pad24[0x20];
    int field44;
    int sub_62ff02();
    void sub_643680();
    int sub_6a37c0(HWND);
    void sub_6d2910(HWND, int);
    void sub_6a3f70(HWND, int);
};

void CArrayHWND::sub_6a3f70(HWND h, int n) {
    int r = sub_62ff02();
    field44 = r;
    if (field10 == 0) {
        void* p = field20;
        if (p != 0 && p != h) {
            sub_643680();
        }
    }
    int idx = sub_6a37c0(h);
    if (idx == -1) {
        sub_6d2910(h, n);
    }
}
