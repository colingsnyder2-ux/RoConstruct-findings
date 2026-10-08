// from server: 73% by colin
// roc 2007-08 00692270  unit: CXTPStatusBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692270
//
// 00692270  e82b690100           call 0x6a8ba0
// 00692275  85c0                 test eax, eax
// 00692277  7421                 je 0x69229a
// 00692279  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0069227f  8bd0                 mov edx, eax
// 00692281  81e200ff0000         and edx, 0xff00
// 00692287  81fa00820000         cmp edx, 0x8200
// 0069228d  750b                 jne 0x69229a
// 0069228f  257ff0ffff           and eax, 0xfffff07f
// 00692294  898180000000         mov dword ptr [ecx + 0x80], eax
// 0069229a  e983660a00           jmp 0x738922

struct CXTPStatusBar {
    char pad[0x80];
    unsigned int m_dwStyle;
    void OnStyleChanged();
};

extern "C" int __stdcall sub_6A8BA0();
extern "C" void __stdcall sub_738922();

void CXTPStatusBar::OnStyleChanged()
{
    if (sub_6A8BA0() != 0)
    {
        unsigned int v = m_dwStyle;
        if ((v & 0xff00) == 0x8200)
        {
            m_dwStyle = v & 0xfffff07f;
        }
    }
    sub_738922();
}
