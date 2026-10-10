// from server: 67% by colin
struct Instance {
    void* vtable;
    int refCount;
};

struct ServiceProvider {
    char pad[0x40];
    void* serviceArrayBegin;
    void* serviceArrayEnd;
    void* serviceArrayCapacity;
    void onServiceAdded(Instance* service);
    void addService(Instance* service);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __cdecl sub_630D36(int a, int b, int c, int d, int e);
extern "C" void __cdecl sub_49D670(void* out, void* in);

void ServiceProvider::addService(Instance* service)
{
    void* begin = *(void**)((char*)this - 0x40);
    if (begin == 0)
        return;

    void* end = *(void**)((char*)begin + 8);
    void* cur = *(void**)((char*)begin + 4);
    if (cur > end)
        _invalid_parameter_noinfo();

    void* first = *(void**)((char*)this - 0x40);
    void* firstCur = *(void**)((char*)first + 4);
    void* firstEnd = *(void**)((char*)first + 8);
    if (firstCur > firstEnd)
        _invalid_parameter_noinfo();

    if (first != begin)
        _invalid_parameter_noinfo();

    if (firstCur == end)
        return;

    while (firstCur != end) {
        if (firstCur >= *(void**)((char*)first + 8))
            _invalid_parameter_noinfo();

        Instance* inst = *(Instance**)firstCur;
        int result = sub_630D36((int)inst, 0, 0x881f4c, 0x88469c, 0);
        if (result != 0) {
            if (firstCur >= *(void**)((char*)first + 8))
                _invalid_parameter_noinfo();

            Instance* inst2 = *(Instance**)firstCur;
            void* tmp;
            sub_49D670(&tmp, &service);
            onServiceAdded(inst2);
        }

        if (firstCur >= *(void**)((char*)first + 8))
            _invalid_parameter_noinfo();

        firstCur = (char*)firstCur + 8;
    }
}
