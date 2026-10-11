// from server: 51% by atomic.potato
extern "C" void __stdcall sub_718CE4();
extern "C" void __stdcall sub_7195A2(int, int);
extern "C" int __stdcall sub_7195A8(void*, void*);
extern "C" void __stdcall sub_7195AE(void*, void*);

struct CXTPPropertyGridView_UWNDRECT_CArray
{
    char pad0[0x18];
    unsigned int m_nFlags;
    void CopyElements(void* dst, const void* src, unsigned int count);
};

void CXTPPropertyGridView_UWNDRECT_CArray::CopyElements(void* dst, const void* src, unsigned int count)
{
    if (count != 0 && dst == 0)
        sub_718CE4();

    if (!(m_nFlags & 1))
    {
        while (count > 0)
        {
            unsigned int n = count;
            if (count >= 0x6666666)
                n = 0x6666666;
            unsigned int bytes = n * 20;
            if (sub_7195A8(dst, (void*)src) != bytes)
            {
                sub_7195A2(3, 0);
            }
            count -= n;
            dst = (char*)dst + bytes;
            src = (const char*)src + bytes;
        }
    }
    else
    {
        while (count > 0)
        {
            unsigned int n = count;
            if (count >= 0x6666666)
                n = 0x6666666;
            unsigned int bytes = n * 20;
            sub_7195AE(dst, (void*)src);
            count -= n;
            dst = (char*)dst + bytes;
            src = (const char*)src + bytes;
        }
    }
}
