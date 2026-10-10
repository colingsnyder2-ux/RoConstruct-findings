// from server: 72% by colin
// roc 2007-08 006bd8a0  unit: CXTPControlGalleryOffice2007Theme  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bd8a0

struct CXTPControlGalleryItem;

struct CXTPControlGalleryOffice2007Theme {
    int DrawItem(void* hdc, CXTPControlGalleryItem* pItem, int nIndex, int x, int y, int cx, int cy);
};

struct CXTPControlGalleryItem {
    int GetImageIndex();
};

extern "C" {
    int __stdcall sub_63cd70(int, int);
    int __stdcall sub_63a580(int);
    int __stdcall sub_6308b0(int, int, int);
    int __stdcall sub_6308aa(int, int, int);
    int __stdcall sub_6b3610(int);
    int __stdcall sub_7383ca(int, int, int, int, int);
}

int CXTPControlGalleryOffice2007Theme::DrawItem(void* hdc, CXTPControlGalleryItem* pItem, int nIndex, int x, int y, int cx, int cy)
{
    int nImage;
    int nLeft;
    int nRight;
    int nBottom;

    if (*(int*)(*(int*)((char*)pItem + 0xfc) + 0xfc) == 5)
    {
        nImage = sub_63cd70(*(int*)((char*)this + 0x28), 0x29);
    }
    else
    {
        if (pItem->GetImageIndex() != 0)
        {
            nImage = *(int*)((char*)pItem + 0x9c);
            if (nImage == -1)
            {
                int p = *(int*)((char*)pItem + 0x158);
                if (p != 0)
                {
                    nImage = sub_63a580(p);
                }
            }
            if (nImage != 0)
            {
                nImage = *(int*)((char*)this + 0x2c);
            }
            else
            {
                nImage = *(int*)((char*)this + 0x30);
            }
        }
        else
        {
            nImage = *(int*)((char*)this + 0x30);
        }
    }

    sub_6308b0((int)hdc, (int)&nLeft, nImage);

    if (*(int*)((char*)pItem + 0x204) != 0)
    {
        int v = *(int*)((char*)this + 0x34);
        sub_6308aa((int)hdc, (int)&nLeft, v);
    }

    if (sub_6b3610((int)pItem) != 0)
    {
        int a = nLeft;
        int b = nRight;
        int c = nBottom;
        sub_7383ca((int)hdc, a, b - a, c - 2, 1);
    }

    return 0;
}
