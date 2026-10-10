// from server: 58% by colin
struct S {
    int f(void* dst, const void* src, unsigned int count);
};

extern "C" void __stdcall sub_62ff20();
extern "C" void __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_63068e(void*, const void*, unsigned int);
extern "C" void __stdcall sub_630694(void*, const void*, unsigned int);

int S::f(void* dst, const void* src, unsigned int count)
{
    if (count != 0 && dst == 0)
        sub_62ff20();

    unsigned int flags = *(unsigned int*)((char*)this + 0x18);
    flags = ~flags;

    if (flags & 1) {
        while (count > 0) {
            unsigned int chunk = count;
            if (chunk >= 0xfffffff)
                chunk = 0xfffffff;
            unsigned int bytes = chunk * 8;
            sub_630694(dst, src, bytes);
            count -= chunk;
            dst = (char*)dst + bytes;
        }
    } else {
        while (count > 0) {
            unsigned int chunk = count;
            if (chunk >= 0xfffffff)
                chunk = 0xfffffff;
            unsigned int bytes = chunk * 8;
            int r = sub_63068e(dst, src, bytes);
            if (r != (int)bytes) {
                sub_630688(3, 0);
            }
            count -= chunk;
            dst = (char*)dst + bytes;
        }
    }
    return 0;
}
