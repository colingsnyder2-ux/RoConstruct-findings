// from server: 58% by colin
struct Backpack {
    bool scriptShouldRun(void* script);
};

extern "C" void* __stdcall sub_48E0D0(void*);
extern "C" void __stdcall sub_4915F0(void*, int);
extern "C" void* __stdcall sub_495820(void*);
extern "C" void* __stdcall sub_630D36(void*, void*, void*, int, int);

bool Backpack::scriptShouldRun(void* script)
{
    char* self = (char*)this - 0x120;
    void* v = sub_48E0D0(self);
    if (!v)
        return false;

    void* a = *(void**)((char*)this - 0x64);
    void* b = sub_495820(self);
    bool flag1 = (a == b);

    sub_4915F0(self, 1);

    void* r1 = sub_630D36(script, (void*)0x884F70, (void*)0x89A7CC, 0, 0);
    bool flag2 = (r1 != 0);

    void* inner = *(void**)((char*)script + 0xbc);
    void* r2 = sub_630D36(inner, (void*)0x881F4C, (void*)0x89F650, 0, 0);
    bool flag3 = (r2 != 0);

    if (flag2) {
        if (!flag1)
            return false;
    } else {
        if (flag3 && flag1)
            return true;
        if (!flag1)
            return false;
    }

    return true;
}
