// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct Surfaces {
    char pad[0x2e0];
    int surfaceType[6];
};

struct FaceInstance {
    Surfaces* part;
    int face;
    int getSurfaceType() const;
};

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Obj {
    char pad0[0x108];
    void* children;
};

extern "C" void* __cdecl sub_006a17c6(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_0057e4d0(void*, void*, void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_0057e530();
extern "C" void __cdecl _invalid_parameter_noinfo();

struct ClearBackpack {
    char pad0[0x108];
    void* children;
    void run();
};

void ClearBackpack::run()
{
    void* p = sub_006a17c6(this, 0, (void*)0x92907c, (void*)0x92dd50, 0);
    if (p) {
        S_func_00598de0* s = (S_func_00598de0*)p;
        int* arr = s->f();
        for (int i = 0; i < 6; i++) {
            FaceInstance* fi = (FaceInstance*)((char*)arr + i * 4);
            if (fi->getSurfaceType() == 2) {
                fi->face = 3;
            }
        }
    }

    if (this->children) {
        void* c = this->children;
        void* a = *(void**)((char*)c + 0xc);
        void* b = *(void**)((char*)c + 0x10);
        if (a > b) {
            _invalid_parameter_noinfo();
        }
        void* first = *(void**)c;
        void* last = *(void**)((char*)this->children + 0x10);
        void* begin = *(void**)((char*)this->children + 0xc);
        if (begin > last) {
            _invalid_parameter_noinfo();
        }
        void* end = *(void**)this->children;
        void* tmp = 0;
        sub_0057e4d0(&tmp, end, begin, first, b, (void*)0x57e530, 0);
    }

    RefCounted* r = *(RefCounted**)&this->children;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            void** vt = *(void***)r;
            ((void (__thiscall*)(void*))vt[1])(r);
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                void** vt2 = *(void***)r;
                ((void (__thiscall*)(void*))vt2[2])(r);
            }
        }
    }
}
