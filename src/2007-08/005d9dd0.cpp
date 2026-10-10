// from server: 65% by colin
struct S {
    bool f(void* a, void* b);
};

extern "C" int __cdecl sub_630D36(void*, const char*, const char*, int, void*);

bool S::f(void* a, void* b)
{
    if (sub_630D36(a, (const char*)0x881f4c, (const char*)0x8ad284, 0, 0))
    {
        if (!sub_630D36(b, (const char*)0x881f4c, (const char*)0x8ad264, 0, 0))
            return true;
    }
    if (sub_630D36(b, (const char*)0x881f4c, (const char*)0x8ad284, 0, 0))
    {
        if (!sub_630D36(a, (const char*)0x881f4c, (const char*)0x8ad264, 0, 0))
            return true;
    }
    return false;
}
