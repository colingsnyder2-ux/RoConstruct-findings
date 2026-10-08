// from server: 66% by colin
// roc 2007-08 0071dec0  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071dec0
//
// 0071dec0  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 0071dec7  7405                 je 0x71dece
// 0071dec9  e9a230f5ff           jmp 0x670f70
// 0071dece  b801000000           mov eax, 1
// 0071ded3  c20400               ret 4

struct S_func_0071dec0
{
    char pad[0x178];
    void* field_0x178;
    int method(int arg);
};

extern int __fastcall other_func_00670f70(void* p);

int S_func_0071dec0::method(int arg)
{
    if (field_0x178 != 0)
        return other_func_00670f70(field_0x178);
    return 1;
}
