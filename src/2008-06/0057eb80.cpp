// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

int* S_func_00598de0::f()
{
    return &m_x;
}

struct FaceInstance {
    char pad0[4];
    int face;
    int getSurfaceType() const;
    void set(int, int);
};

struct Backpack {
    char pad0[0x108];
    void* children;
    void clearBackpack();
};

void Backpack::clearBackpack()
{
    void* v = __RTDynamicCast(0, 0, (void*)0x92907c, (void*)0x92dd50, 0);
    if (v)
    {
        int* p = ((S_func_00598de0*)v)->f();
        for (int i = 0; i < 6; i++)
        {
            FaceInstance* fi = (FaceInstance*)((char*)p + i * 0x28);
            if (fi->getSurfaceType() == 1)
                fi->set(2, i);
        }
    }
    if (this->children)
    {
        void* c = this->children;
        void* first = *(void**)((char*)c + 0xc);
        void* last = *(void**)((char*)c + 0x10);
        if (first > last)
            _invalid_parameter_noinfo();
        void* begin = *(void**)c;
        void* end = *(void**)((char*)this->children + 0xc);
        void* end2 = *(void**)((char*)this->children + 0x10);
        if (end > end2)
            _invalid_parameter_noinfo();
        void* lastElem = *(void**)((char*)this->children);
    }
}
