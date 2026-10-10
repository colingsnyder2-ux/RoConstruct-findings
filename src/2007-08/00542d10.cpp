// from server: 43% by colin
struct GetImpl {
    void* get;
    GetImpl(void* g);
};

extern "C" {
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6F8(void*);
    void __stdcall sub_77E69C(void*, void*);
    void __cdecl sub_630B9E(void*, void*);
}

GetImpl::GetImpl(void* g)
{
    char buf[28];
    char buf2[28];
    sub_77E698(buf);
    sub_77E6F8(buf2);
    *(void**)(buf2 + 4) = (void*)0x787018;
    sub_77E69C(buf2, buf);
    sub_630B9E(buf2, (void*)0x8410C0);
    get = g;
}
