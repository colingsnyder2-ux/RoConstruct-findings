// from server: 66% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTPControlGalleryPaintManager;

struct CXTPControlGallery {
    char pad[0x204];
    int m_bSomeFlag;
};

struct CXTPControlGalleryPaintManager {
    char pad[0x28];
    void* m_pResource;

    void Draw(HDC hdc, CXTPControlGallery* pGallery, int x, int y, int w, int h);
};

extern "C" void* __stdcall sub_63CD70(void* p, int n);
extern "C" void __stdcall sub_6308B0(void* p, void* a, void* b);
extern "C" void __stdcall sub_6308AA(void* p, void* a, void* b, void* c);
extern "C" int __stdcall sub_6B3610(void* p);
extern "C" void __stdcall sub_7383CA(void* p, int a, int b, int c, int d, int e);

void CXTPControlGalleryPaintManager::Draw(HDC hdc, CXTPControlGallery* pGallery, int x, int y, int w, int h)
{
    void* p1 = sub_63CD70(this->m_pResource, 0x29);
    int r1;
    int r2;
    sub_6308B0(pGallery, &r1, p1);
    if (pGallery->m_bSomeFlag != 0)
    {
        void* p2 = sub_63CD70(this->m_pResource, 0x34);
        void* p3 = sub_63CD70(this->m_pResource, 0x34);
        sub_6308AA(pGallery, &r2, p3, p2);
    }
    if (sub_6B3610(pGallery) != 0)
    {
        int diff = r2 - r1;
        void* p4 = sub_63CD70(this->m_pResource, 0x27);
        sub_7383CA(pGallery, r1, r2 - 2, diff, 1, (int)p4);
    }
}
