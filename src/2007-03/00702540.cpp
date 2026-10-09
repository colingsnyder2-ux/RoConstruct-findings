// roc 2007-03 00702540  unit: seg_00700000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00702540
//
// 00702540  8b442404             mov eax, dword ptr [esp + 4]
// 00702544  85c0                 test eax, eax
// 00702546  7517                 jne 0x70255f
// 00702548  83c8ff               or eax, 0xffffffff
// 0070254b  6a00                 push 0
// 0070254d  894178               mov dword ptr [ecx + 0x78], eax
// 00702550  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00702553  6a00                 push 0
// 00702555  50                   push eax
// 00702556  ff1554ee7700         call dword ptr [0x77ee54]
// 0070255c  c20400               ret 4
// 0070255f  8b4004               mov eax, dword ptr [eax + 4]
// 00702562  6a00                 push 0
// 00702564  894178               mov dword ptr [ecx + 0x78], eax
// 00702567  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0070256a  6a00                 push 0
// 0070256c  50                   push eax
// 0070256d  ff1554ee7700         call dword ptr [0x77ee54]
// 00702573  c20400               ret 4
// copied from an identical function in another client (function ?SetColor@CXTColorSelectorCtrl@ns_ROCX0000e3@@QAEXPAX@Z)

namespace ns_ROCX0000e3 {
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
}
