// from server: 63% by colin
struct UtagACCEL_CArray {
    void Assign(void* src, unsigned int count, void* alloc);
};

extern "C" void __stdcall sub_62ff20();
extern "C" void* __stdcall sub_630694(void* dst, void* src, unsigned int size);
extern "C" void* __stdcall sub_63068e(void* dst, void* src, unsigned int size);
extern "C" void __stdcall sub_630688(int, int);

void UtagACCEL_CArray::Assign(void* src, unsigned int count, void* alloc)
{
    char* dst = (char*)src;
    unsigned int remaining = count;
    if (count != 0 && dst == 0)
        sub_62ff20();
    if ((*(unsigned int*)((char*)alloc + 0x18) ^ 0xFFFFFFFF) & 1)
    {
        while (remaining > 0)
        {
            unsigned int chunk = remaining;
            if (chunk >= 0x15555555)
                chunk = 0x15555555;
            unsigned int bytes = chunk * 12;
            sub_630694(dst, (void*)0, bytes);
            remaining -= chunk;
            dst += bytes;
        }
    }
    else
    {
        while (remaining > 0)
        {
            unsigned int chunk = remaining;
            if (chunk >= 0x15555555)
                chunk = 0x15555555;
            unsigned int bytes = chunk * 12;
            if (sub_63068e(dst, (void*)0, bytes) != (void*)bytes)
            {
                sub_630688(3, 0);
            }
            remaining -= chunk;
            dst += bytes;
        }
    }
}
