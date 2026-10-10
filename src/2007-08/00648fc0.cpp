// from server: 88% by colin
// roc 2007-08 00648fc0  unit: CXTPCommandBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648fc0

extern "C" void* __stdcall GetProcAddress(void*, const char*);
extern "C" void* __cdecl sub_41ED10(const char*);

struct CXTPCommandBar {
    char pad[0x9c];
    void* m_hImageList;
    void* GetImageInfo(void* out);
};

void* CXTPCommandBar::GetImageInfo(void* out) {
    if (m_hImageList == 0) {
        m_hImageList = GetProcAddress(sub_41ED10("ImageList_GetImageInfo"), "ImageList_GetImageInfo");
    }
    *(void**)out = m_hImageList;
    return out;
}
