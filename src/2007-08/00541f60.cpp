// from server: 80% by tester
struct VInstance {
    char pad[0xbc];
    void* field_bc;
    void* field_c0;
    int hasElements();
    void process();
};

extern "C" int __stdcall sub_487c10(void* p);

int VInstance::hasElements()
{
    void* p = field_c0;
    if (p == 0)
        return 0;
    char* begin = *(char**)((char*)p + 4);
    if (begin == 0)
        return 0;
    char* end = *(char**)((char*)p + 8);
    return (int)((end - begin) >> 3);
}

void VInstance::process()
{
    if (sub_487c10(this) == 0)
        return;

    void (__stdcall *fn)() = *(void (__stdcall**)())0x77e6d8;

    for (;;)
    {
        void* p = field_c0;
        void* begin = *(void**)((char*)p + 4);
        void* fieldbc = field_bc;
        if (begin != 0)
        {
            void* end = *(void**)((char*)p + 8);
            if (((char*)end - (char*)begin) >> 3 != 0)
            {
            }
            else
            {
                fn();
            }
        }
        else
        {
            fn();
        }

        void* first = *(void**)((char*)p + 4);
        void* obj = *(void**)first;
        ((void (__thiscall*)(void*, void*))0x541630)(obj, fieldbc);

        if (sub_487c10(this) == 0)
            break;
    }
}
