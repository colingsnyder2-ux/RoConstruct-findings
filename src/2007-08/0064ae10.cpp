// from server: 34% by colin
struct CXTPImageManagerIcon {
    void *m_pImageList;
    int m_bLoaded;
    char pad0[8];
    int m_nWidth;
    void sub_649180();
    void sub_64ac60();
    void sub_64ae10();
};

extern "C" void __stdcall ImageList_Destroy(void *);

void CXTPImageManagerIcon::sub_64ae10()
{
    if (m_pImageList != 0 && m_bLoaded != 0)
        ImageList_Destroy(m_pImageList);
    sub_649180();
    sub_64ac60();
}
