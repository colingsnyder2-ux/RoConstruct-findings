// from server: 63% by colin
struct CXTPControls;

struct CXTPControlComboBoxGalleryPopupBar
{
    char pad[0xfc];
    CXTPControls* m_pControls;
    char pad2[0x180 - 0xfc - 4];
    void* m_pPopup;
    int OnMoveDown(int, int, int);
    int GetCurSel();
};

extern "C" int __stdcall sub_6f1f00(CXTPControls*, int, int);
extern "C" int __stdcall sub_6b5920(void*, int, int, int);

int CXTPControlComboBoxGalleryPopupBar::OnMoveDown(int a, int b, int c)
{
    int r = sub_6f1f00(m_pControls, a, b);
    if (r == GetCurSel())
    {
        void* p = m_pPopup;
        (*(void (__stdcall**)(void*))(*(int*)p + 0x164))(p);
        (*(void (__stdcall**)(void*))(*(int*)p + 0x98))(p);
        return 0;
    }
    return sub_6b5920(m_pPopup, a, b, c);
}
