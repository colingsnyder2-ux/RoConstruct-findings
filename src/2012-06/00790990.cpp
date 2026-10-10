// from server: 63% by atomic.potato
struct S
{
    int f();
};

extern "C" int __declspec(nothrow) __fastcall sub_479fa0(void *);
extern "C" int __declspec(nothrow) __fastcall sub_509d50(void *);

int S::f()
{
    void *p = (char *)this + 0x80;
    if (sub_479fa0(p))
        return 0;
    if (sub_509d50(p))
        return 0;
    return 1;
}
