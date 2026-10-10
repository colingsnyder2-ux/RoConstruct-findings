// from server: 37% by colin
struct VPlayersSignalDesc {
    void construct(int a, int b, int c, int d, int e, int f);
};

extern "C" void* __cdecl sub_492840(int, int, int, int, int);
extern "C" void* __cdecl sub_494E80(int, int);
extern "C" void __cdecl sub_442E60(void*, int);
extern "C" void __cdecl sub_62FC62(void*);

void VPlayersSignalDesc::construct(int a, int b, int c, int d, int e, int f)
{
    int local = 0;
    void* p = sub_492840(a, b, c, d, e);
    void* q = *(void**)p;
    *(void**)p = 0;
    local = 0;
    void* r = sub_494E80(b, c);
    sub_442E60(r, 0);
    sub_62FC62(q);
    *(void**)this = (void*)0x79baa4;
}
