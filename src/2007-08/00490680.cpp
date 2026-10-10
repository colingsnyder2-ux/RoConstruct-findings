// from server: 39% by colin
struct VPlayerSignalDesc
{
    void construct(int);
};

extern "C" void __cdecl sub_4893C0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_489940(void*, void*);
extern "C" void __cdecl sub_490330(void*);
extern "C" void __cdecl sub_62FC62(void*);

void VPlayerSignalDesc::construct(int a)
{
    char buf[16];
    void* p;
    void* q;
    void* r;

    sub_489940(buf, &a);
    *(int*)(buf + 12) = a;
    sub_490330(this);

    p = *(void**)(buf + 4);
    q = *(void**)p;
    sub_4893C0(buf + 4, buf + 4, q, p, buf + 4);
    sub_62FC62(*(void**)(buf + 4));
}
