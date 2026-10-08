// from server: 70% by colin
// roc 2007-08 00648fc0  unit: CXTPCommandBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648fc0

extern "C" void* __stdcall GetProcAddress(void*, const char*);
extern "C" void* __stdcall sub_41ED10(const char*);

struct CXTPCommandBar {
    char pad[0x9c];
    void* m_pImageList_GetImageInfo;
    void GetProcAddress_ImageList_GetImageInfo(void** out);
};

void CXTPCommandBar::GetProcAddress_ImageList_GetImageInfo(void** out) {
    if (m_pImageList_GetImageInfo == 0) {
        m_pImageList_GetImageInfo = GetProcAddress(sub_41ED10("ImageList_GetImageInfo"), "ImageList_GetImageInfo");
    }
    *out = m_pImageList_GetImageInfo;
}
