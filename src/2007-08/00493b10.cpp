// from server: 79% by colin
struct Notifier {
    static void* factory(int, void*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" int __cdecl type_info_equal(void*, void*);
extern "C" void __cdecl sub_4930B0(void*, void*);
extern "C" void __cdecl sub_4923A0(void*);

void* Notifier::factory(int mode, void* arg)
{
    if (mode == 2) {
        void* p = arg;
        int r = type_info_equal((void*)0x88e890, p);
        return (r == 0) ? 0 : p;
    }
    if (mode == 0) {
        void* mem = operator_new(0x28);
        sub_4930B0(mem, arg);
        return mem;
    }
    sub_4923A0((char*)arg + 4);
    operator_delete(arg);
    return 0;
}
