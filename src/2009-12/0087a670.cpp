// from server: 1% by atomic.potato
// roc 2009-12 0087a670  unit: CXTPControlGallery  size: 748 bytes

extern "C" {
    int __stdcall CreateRectRgnIndirect(const void*);
    int __stdcall GetViewportOrgEx(void*, void*);
    int __stdcall CopyRect(void*, const void*);
    int __stdcall IsRectEmpty(const void*);
    int __stdcall OffsetRect(void*, int, int);
}

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

struct CXTPControlGalleryItem;

struct CXTPControlGallery {
    char pad_000[0x9c];
    int m_nSelected;              // 0x9c
    char pad_0a0[0x15c - 0xa0];
    void* m_pGallery;             // 0x15c
    char pad_160[0x1f4 - 0x160];
    int m_nItemHeight;            // 0x1f4
    int m_nItemWidth;             // 0x1f8
    int m_nItemSpacing;           // 0x1fc
    int m_bScrollable;            // 0x200
    char pad_204[0x20c - 0x204];
    int m_nScrollOffset;          // 0x20c
    char pad_210[0x250 - 0x210];
    CXTPControlGalleryItem* m_pItems; // 0x250
    int m_nCount;                 // 0x254

    void Refresh();
};

struct CGalleryItem {
    char pad_000[0x10];
    void* m_pItem;                // 0x10
};

struct CGalleryItemData {
    char pad_000[0x20];
    int m_nHeight;                // 0x20
};

extern "C" int __stdcall sub_98b0b4(void*, int, void*);
extern "C" int __stdcall sub_98b0c4(void*);
extern "C" int __stdcall sub_98cc64(void*, void*);
extern "C" int __stdcall sub_98cc68(void*);
extern "C" int __stdcall sub_98cc6c(void*, int, int, void*);

void sub_877350();
void sub_878450(void*);
void sub_7f3e2a(void*, int);
void sub_926664(void*, int);
void sub_7f65b0();
void sub_7f3b0c();
void sub_40f230(void*);

void CXTPControlGallery::Refresh()
{
    void* pGallery = 0;
    sub_877350();
    pGallery = (void*)0;
    // placeholder
}
