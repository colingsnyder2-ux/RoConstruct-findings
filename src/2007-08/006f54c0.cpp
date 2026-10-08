// from server: 91% by colin
// roc 2007-08 006f54c0  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f54c0
//
// 006f54c0  56                   push esi
// 006f54c1  8bf1                 mov esi, ecx
// 006f54c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f54c7  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 006f54cd  7421                 je 0x6f54f0
// 006f54cf  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 006f54d5  85c0                 test eax, eax
// 006f54d7  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 006f54dd  7408                 je 0x6f54e7
// 006f54df  51                   push ecx
// 006f54e0  50                   push eax
// 006f54e1  ff15f8ec7700         call dword ptr [0x77ecf8]
// 006f54e7  6a01                 push 1
// 006f54e9  8bce                 mov ecx, esi
// 006f54eb  e8a051f4ff           call 0x63a690
// 006f54f0  5e                   pop esi
// 006f54f1  c20400               ret 4

extern "C" int __stdcall EnableWindow(void* hWnd, int bEnable);

struct CXTPControlCustom {
    char pad[0x9c];
    int field_9c;
    char pad2[0x170 - 0x9c - 4];
    void* field_170;
    void method_63a690(int);
    void setEnabled(int);
};

void CXTPControlCustom::setEnabled(int value) {
    if (value != this->field_9c) {
        void* h = this->field_170;
        this->field_9c = value;
        if (h != 0) {
            EnableWindow(h, value);
        }
        this->method_63a690(1);
    }
}
