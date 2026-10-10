// from server: 31% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall CreateCompatibleDC(void*);
    __declspec(dllimport) void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned long);
    __declspec(dllimport) void __stdcall free(void*);
}

struct CImage {
    int width;
    int height;
    int bpp;
    void* bits;
    void* hdc;
    void* hbitmap;
};

struct CXTPCommandBar {
    int sub_6498C0(void*, void*, void*, void*, void*);
    int ConvertToDIB(void* pSrc, unsigned int flags);
};

int CXTPCommandBar::ConvertToDIB(void* pSrc, unsigned int flags) {
    CImage img;
    void* hdc;
    void* hbitmap;
    void* bits;
    void* oldbits;
    int result;
    unsigned int i;
    unsigned int count;
    unsigned char* src;
    unsigned char* dst;
    unsigned int color;

    img.width = 0;
    img.height = 0;
    img.bpp = 0;
    img.bits = 0;
    img.hdc = 0;
    img.hbitmap = 0;

    hdc = CreateCompatibleDC(0);
    img.hdc = hdc;

    result = this->sub_6498C0(pSrc, &img, &hbitmap, &bits, &oldbits);
    if (result == 0) {
        return 0;
    }

    img.hbitmap = hbitmap;
    img.bits = bits;

    if (bits == 0 || hbitmap == 0) {
        if (hbitmap != 0) {
            free(hbitmap);
        }
        if (bits != 0) {
            free(bits);
        }
        return 0;
    }

    count = img.width * img.height;
    if (count == 0) {
        free(hbitmap);
        free(bits);
        return 0;
    }

    src = (unsigned char*)pSrc;
    dst = (unsigned char*)bits;
    color = flags >> 16;

    for (i = 0; i < count; i++) {
        unsigned char b = src[2];
        if (b >= 0x78) {
            dst[0] = (unsigned char)((src[-1] * 0xff) >> 8);
            dst[1] = (unsigned char)((src[0] * 0xff) >> 8);
            dst[2] = (unsigned char)((src[1] * 0xff) >> 8);
        } else {
            dst[0] = (unsigned char)color;
            dst[1] = (unsigned char)(color >> 8);
            dst[2] = (unsigned char)(color >> 16);
        }
        src += 4;
        dst += 3;
    }

    free(hbitmap);
    free(bits);
    return 1;
}
