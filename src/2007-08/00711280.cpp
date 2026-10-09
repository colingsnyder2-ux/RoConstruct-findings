// from server: 100% by colin
// roc 2007-08 00711280  unit: CXTColorSelectorCtrl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00711280
//
// 00711280  56                   push esi
// 00711281  8bf1                 mov esi, ecx
// 00711283  e848fdffff           call 0x710fd0
// 00711288  84c0                 test al, al
// 0071128a  753d                 jne 0x7112c9
// 0071128c  8bce                 mov ecx, esi
// 0071128e  e8abeff1ff           call 0x63023e
// 00711293  8b4678               mov eax, dword ptr [esi + 0x78]
// 00711296  39467c               cmp dword ptr [esi + 0x7c], eax
// 00711299  7512                 jne 0x7112ad
// 0071129b  83f8ff               cmp eax, -1
// 0071129e  740d                 je 0x7112ad
// 007112a0  8b16                 mov edx, dword ptr [esi]
// 007112a2  50                   push eax
// 007112a3  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 007112a9  8bce                 mov ecx, esi
// 007112ab  ffd0                 call eax
// 007112ad  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007112b0  6a00                 push 0
// 007112b2  6a00                 push 0
// 007112b4  51                   push ecx
// 007112b5  c7467cffffffff       mov dword ptr [esi + 0x7c], 0xffffffff
// 007112bc  c74678ffffffff       mov dword ptr [esi + 0x78], 0xffffffff
// 007112c3  ff15dcec7700         call dword ptr [0x77ecdc]
// 007112c9  5e                   pop esi
// 007112ca  c20c00               ret 0xc

struct CXTColorSelectorCtrl {
    char pad[0x20];
    void* hwnd;
    char pad2[0x54];
    int field_78;
    int field_7c;
    bool sub_710fd0();
    void sub_63023e();
    void sub_711280(int, int, int);
};

extern "C" int (__stdcall *g_InvalidateRect)(void*, const void*, int);

void CXTColorSelectorCtrl::sub_711280(int a, int b, int c)
{
    if (sub_710fd0())
        return;
    sub_63023e();
    int v = field_78;
    if (field_7c == v && v != -1)
    {
        void** vt = *(void***)this;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0x13c / 4];
        fn(this, v);
    }
    void* h = hwnd;
    field_7c = -1;
    field_78 = -1;
    g_InvalidateRect(h, 0, 0);
}
