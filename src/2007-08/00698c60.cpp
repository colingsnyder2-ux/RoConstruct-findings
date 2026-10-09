// from server: 87% by colin
// roc 2007-08 00698c60  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698c60
//
// 00698c60  56                   push esi
// 00698c61  8bf1                 mov esi, ecx
// 00698c63  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00698c69  85c0                 test eax, eax
// 00698c6b  7442                 je 0x698caf
// 00698c6d  83782000             cmp dword ptr [eax + 0x20], 0
// 00698c71  743c                 je 0x698caf
// 00698c73  e8b8f0ffff           call 0x697d30
// 00698c78  85c0                 test eax, eax
// 00698c7a  7418                 je 0x698c94
// 00698c7c  8b06                 mov eax, dword ptr [esi]
// 00698c7e  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00698c84  8bce                 mov ecx, esi
// 00698c86  ffd2                 call edx
// 00698c88  8b06                 mov eax, dword ptr [esi]
// 00698c8a  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00698c90  8bce                 mov ecx, esi
// 00698c92  ffd2                 call edx
// 00698c94  837c240800           cmp dword ptr [esp + 8], 0
// 00698c99  7414                 je 0x698caf
// 00698c9b  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00698ca1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00698ca4  6a00                 push 0
// 00698ca6  6a00                 push 0
// 00698ca8  51                   push ecx
// 00698ca9  ff15dcec7700         call dword ptr [0x77ecdc]
// 00698caf  5e                   pop esi
// 00698cb0  c20400               ret 4

struct CXTPPropertyGridItem {
    unsigned char pad[0xb4];
    void* field_b4;
    int IsSelected();

    void OnValueChanged(int arg);
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

void CXTPPropertyGridItem::OnValueChanged(int arg) {
    if (this->field_b4 != 0 && *(int*)((char*)this->field_b4 + 0x20) != 0) {
        if (this->IsSelected() != 0) {
            void** vt = *(void***)this;
            ((void (__thiscall*)(void*))vt[0x2c])(this);
            ((void (__thiscall*)(void*))vt[0x2b])(this);
        }
    }
    if (arg != 0) {
        InvalidateRect(*(void**)((char*)this->field_b4 + 0x20), 0, 0);
    }
}
