// from server: 54% by atomic.potato
struct S
{
    int f();
};

struct T
{
    int v[2];
};

extern "C" int __cdecl sub_686620(S*, int);

int S::f()
{
    S* p = *(S**)((char*)this + 12);
    T* q = *(T**)((char*)p + 336);
    int (__cdecl *fn)(T*) = (int (__cdecl *)(T*))(*(int**)((char*)q + 8));
    int r = fn((T*)((char*)p + 336));
    return sub_686620((S*)r, 1);
}
