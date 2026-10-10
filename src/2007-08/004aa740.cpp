// from server: 53% by colin
struct Peer {
    char pad0[0xf0];
    void* field_f0;
    char pad_f4[4];
    void* field_f8;
    void destroy();
};

extern "C" void* __stdcall sub_498f60();
extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __fastcall sub_4a61b0(void* ecx, void* edx, void* arg);

void Peer::destroy()
{
    void* p = sub_498f60();
    if (*(unsigned char*)((char*)p + 0xf7) == 0)
    {
        void* old = field_f0;
        field_f0 = 0;
        if (old != 0)
        {
            void** vtbl = *(void***)old;
            void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0];
            fn(old, 1);
        }
        return;
    }

    if (field_f0 != 0)
        return;

    void* mem = sub_62fef6(0x210);
    void* obj;
    if (mem != 0)
    {
        sub_4a61b0(mem, 0, this);
        obj = mem;
    }
    else
    {
        obj = 0;
    }

    void* old = field_f0;
    field_f0 = obj;
    if (old != 0)
    {
        void** vtbl = *(void***)old;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0];
        fn(old, 1);
    }

    void* p2 = field_f8;
    void** vtbl2 = *(void***)p2;
    void* arg = field_f0;
    void (*fn2)(void*, void*) = (void (*)(void*, void*))vtbl2[0xe8 / 4];
    fn2(p2, arg);
}
