// from server: 42% by colin
struct SignalDesc {
    void construct(const void*);
    void destroy();
    void invoke();
};

extern "C" void __cdecl sub_488F60(void*, const void*);
extern "C" void __cdecl sub_490250(void*);

void SignalDesc::invoke()
{
    char buf1[0x38];
    char buf2[0x38];
    void* p1;
    void* p2;

    sub_488F60(buf1, &p1);
    sub_488F60(buf2, &p2);
    sub_490250(this);

    if (p1) {
        ((void (__cdecl*)(void*, int))p1)(p2, 1);
    }
    if (p2) {
        ((void (__cdecl*)(void*, int))p2)(p1, 1);
    }
}
