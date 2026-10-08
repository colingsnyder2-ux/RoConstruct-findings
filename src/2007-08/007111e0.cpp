// from server: 100% by colin
// roc 2007-08 007111e0  unit: CXTColorSelectorCtrl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007111e0
//
// 007111e0  8b442404             mov eax, dword ptr [esp + 4]
// 007111e4  85c0                 test eax, eax
// 007111e6  7517                 jne 0x7111ff
// 007111e8  83c8ff               or eax, 0xffffffff
// 007111eb  6a00                 push 0
// 007111ed  894178               mov dword ptr [ecx + 0x78], eax
// 007111f0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007111f3  6a00                 push 0
// 007111f5  50                   push eax
// 007111f6  ff15dcec7700         call dword ptr [0x77ecdc]
// 007111fc  c20400               ret 4
// 007111ff  8b4004               mov eax, dword ptr [eax + 4]
// 00711202  6a00                 push 0
// 00711204  894178               mov dword ptr [ecx + 0x78], eax
// 00711207  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0071120a  6a00                 push 0
// 0071120c  50                   push eax
// 0071120d  ff15dcec7700         call dword ptr [0x77ecdc]
// 00711213  c20400               ret 4

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

struct CXTColorSelectorCtrl {
    char pad[0x20];
    void* field_20;
    char pad2[0x78 - 0x24];
    int field_78;
    void SetColor(void* color);
};

void CXTColorSelectorCtrl::SetColor(void* color)
{
    int value;
    if (color == 0) {
        value = -1;
    } else {
        value = *(int*)((char*)color + 4);
    }
    field_78 = value;
    InvalidateRect(field_20, 0, 0);
}
