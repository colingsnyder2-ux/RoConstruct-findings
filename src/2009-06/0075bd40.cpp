// from server: 55% by atomic.potato
extern "C" void __cdecl sub_718CE4();
extern "C" void __cdecl sub_7195A2(int, int);
extern "C" int __cdecl sub_7195A8(void*, unsigned int);
extern "C" int __cdecl sub_7195AE(void*, unsigned int);

struct CXTPCustomizeSheet_CCustomizeEdit {
    void func(void* dst, unsigned int count, void* src);
};

void CXTPCustomizeSheet_CCustomizeEdit::func(void* dst, unsigned int count, void* src)
{
    char* d = (char*)dst;
    unsigned int n = count;
    char* s = (char*)src;
    if (n != 0 && d == 0)
        sub_718CE4();
    int flags = *(int*)((char*)this + 0x18);
    flags = ~flags;
    if (flags & 1) {
        while (n > 0) {
            unsigned int chunk = n;
            if (n >= 0x1fffffff)
                chunk = 0x1fffffff;
            unsigned int bytes = chunk * 4;
            sub_7195AE(d, bytes);
            n -= chunk;
            d += bytes;
        }
    } else {
        while (n > 0) {
            unsigned int chunk = n;
            if (n >= 0x1fffffff)
                chunk = 0x1fffffff;
            unsigned int bytes = chunk * 4;
            int r = sub_7195A8(d, bytes);
            if (r != (int)bytes) {
                sub_7195A2(3, 0);
            }
            n -= chunk;
            d += bytes;
        }
    }
}
