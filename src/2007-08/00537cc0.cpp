// from server: 91% by TrollStein
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
    void* __cdecl f(int, void*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void* S::f(int mode, void* arg)
{
    if (mode == 2) {
        type_info* ti = (type_info*)0x899bf8;
        bool eq = ti->operator==(*(type_info*)arg);
        return eq ? arg : 0;
    }
    if (mode == 0) {
        void* p = operator_new(0x10);
        if (p) {
            *(int*)p = *(int*)arg;
            *(int*)((char*)p + 4) = *(int*)((char*)arg + 4);
            *(int*)((char*)p + 8) = *(int*)((char*)arg + 8);
            *(int*)((char*)p + 12) = *(int*)((char*)arg + 12);
            return p;
        }
        return 0;
    }
    operator_delete(arg);
    return 0;
}
