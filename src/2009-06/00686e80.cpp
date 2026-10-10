// from server: 35% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct Buf
{
    char* begin;
    char* end;
};

struct S
{
    char pad[8];
    int __cdecl f(Buf* other);
};

int S::f(Buf* other)
{
    int a = *(int*)this;
    char* p = *(char**)((char*)this + 4);
    if (a != -4 && a != 0 && a != *(int*)other)
        _invalid_parameter_noinfo();

    int n = (int)(p - other->end);
    int m = n;
    if (n < 0)
        m = 0;

    if (m != 0)
    {
        char* dst = other->end;
        char* src = other->begin;
        int old = (int)(dst - src);
        if (old > 0)
        {
            memmove_s(dst, old, src, old);
        }
    }

    if (m != 0)
        return m;
    return -1;
}
