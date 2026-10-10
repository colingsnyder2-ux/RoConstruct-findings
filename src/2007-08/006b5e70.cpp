// from server: 59% by colin
struct CXTPControlGallery_UGALLERYITEM_POSITION_CArray {
    void CopyElements(void* dst, const void* src, unsigned int count);
};

extern "C" void __stdcall sub_62ff20();
extern "C" void* __stdcall sub_630694(void* dst, const void* src, unsigned int size);
extern "C" void* __stdcall sub_63068e(void* dst, const void* src, unsigned int size);
extern "C" void __stdcall sub_630688(int, int);

void CXTPControlGallery_UGALLERYITEM_POSITION_CArray::CopyElements(void* dst, const void* src, unsigned int count)
{
    unsigned int remaining = count;
    char* d = (char*)dst;
    const char* s = (const char*)src;

    if (remaining != 0 && d == 0)
        sub_62ff20();

    if (*(unsigned char*)((char*)this + 0x18) & 1)
    {
        while (remaining > 0)
        {
            unsigned int chunk = remaining;
            if (chunk >= 0x5555555)
                chunk = 0x5555555;
            unsigned int bytes = chunk * 12;
            sub_630694(d, s, bytes);
            remaining -= chunk;
            d += bytes;
        }
    }
    else
    {
        while (remaining > 0)
        {
            unsigned int chunk = remaining;
            if (chunk >= 0x5555555)
                chunk = 0x5555555;
            unsigned int bytes = chunk * 12;
            if (sub_63068e(d, s, bytes) != (void*)bytes)
            {
                sub_630688(3, 0);
            }
            remaining -= chunk;
            d += bytes;
        }
    }
}
