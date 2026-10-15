// from server: 49% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
// roc 2008-06 00489aa0  unit: G3D::GWindow  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489aa0

extern "C" void* __cdecl _malloc(unsigned int);
extern "C" void __cdecl _free(void*);

struct GWindow {
    void* m_data;
    int m_size;
    int m_capacity;
    void resize(int newSize);
};

void GWindow::resize(int newSize) {
    void* oldData = m_data;
    int oldSize = m_size;
    void* newData = _malloc(oldSize * 16);
    m_data = newData;
    int cap = m_capacity;
    if (newSize >= cap)
        newSize = cap;
    char* dst = (char*)newData + newSize * 16;
    char* src = (char*)oldData;
    int count = (int)((dst - (char*)newData + 15) / 16);
    if (count >= 4) {
        char* end = dst - 48;
        char* d = (char*)newData;
        char* s = src;
        do {
            if (d) {
                *(float*)(d + 0) = *(float*)(s + 0);
                *(float*)(d + 4) = *(float*)(s + 4);
                *(float*)(d + 8) = *(float*)(s + 8);
                *(float*)(d + 12) = *(float*)(s + 12);
            }
            if (d + 16) {
                *(float*)(d + 16) = *(float*)(s + 16);
                *(float*)(d + 20) = *(float*)(s + 20);
                *(float*)(d + 24) = *(float*)(s + 24);
                *(float*)(d + 28) = *(float*)(s + 28);
            }
            if (d + 32) {
                *(float*)(d + 32) = *(float*)(s + 32);
                *(float*)(d + 36) = *(float*)(s + 36);
                *(float*)(d + 40) = *(float*)(s + 40);
                *(float*)(d + 44) = *(float*)(s + 44);
            }
            if (d + 48) {
                *(float*)(d + 48) = *(float*)(s + 48);
                *(float*)(d + 52) = *(float*)(s + 52);
                *(float*)(d + 56) = *(float*)(s + 56);
                *(float*)(d + 60) = *(float*)(s + 60);
            }
            d += 64;
            s += 64;
        } while (d < end);
    }
    while (dst > (char*)newData) {
        if (dst) {
            *(float*)(dst + 0) = *(float*)(src + 0);
            *(float*)(dst + 4) = *(float*)(src + 4);
            *(float*)(dst + 8) = *(float*)(src + 8);
            *(float*)(dst + 12) = *(float*)(src + 12);
        }
        dst += 16;
        src += 16;
        if (dst >= (char*)newData + newSize * 16)
            break;
    }
    _free(oldData);
}
