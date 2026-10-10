// from server: 32% by colin
struct CXTPImageManagerIcon {
    int sub_64b380(int);
};

extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned int);

void* sub_7383e2(void*);
void* sub_7383d0(void*, void*);
void* sub_738436(void*);
void* sub_738424(void);
void* sub_7383dc(void*);
int sub_6498c0(void*, int, void*, void*, void*);

int CXTPImageManagerIcon::sub_64b380(int a1) {
    char buf[0x40];
    void* dc;
    void* bmp;
    void* bits;
    int result;
    int i, j;
    int width, height;
    int* src;
    int* dst;

    sub_7383e2(buf);
    dc = CreateCompatibleDC(0);
    sub_7383d0(buf, dc);
    sub_738436(buf + 0x10);
    result = sub_6498c0(buf, a1, &bits, &bmp, &dc);
    if (result == 0) {
        sub_738424();
        sub_7383dc(buf);
        return 0;
    }
    bits = 0;
    result = (int)CreateDIBSection(0, 0, 0, &bits, 0, 0);
    if (bits != 0 && result != 0) {
        width = *(int*)((char*)bmp + 8);
        height = *(int*)((char*)bmp + 4);
        src = (int*)((char*)dc + 0);
        dst = (int*)bits;
        for (i = 0; i < width; i++) {
            for (j = 0; j < height; j++) {
                *dst = *src;
                dst++;
                src--;
            }
        }
    }
    return result;
}
