// from server: 45% by colin
struct S {
    void f(int);
};

struct Vec {
    void* begin;
    void* end;
    void* cap;
};

extern "C" void __stdcall sub_417F10(Vec*, int, void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __stdcall sub_77E6D8();

void S::f(int) {
    Vec v;
    v.begin = 0;
    v.end = 0;
    v.cap = 0;
    sub_417F10(&v, 1, 0);
    if (v.begin != 0 || ((char*)v.end - (char*)v.begin) / 4 == 0) {
        sub_77E6D8();
    }
    void* p = sub_62FEF6(8);
    if (p != 0) {
        *(void**)p = (void*)0x78a5ec;
        *(float*)((char*)p + 4) = 0.0f;
    } else {
        p = 0;
    }
    void* old = v.begin;
    v.begin = p;
    if (old != 0) {
        void** vt = *(void***)old;
        void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
        dtor(old, 1);
    }
    void* obj = *(void**)this;
    void** vt2 = *(void***)obj;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt2[1];
    fn(obj, &v);
    if (v.begin != 0) {
        char* it = (char*)v.begin;
        char* end = (char*)v.end;
        while (it != end) {
            void* e = *(void**)it;
            if (e != 0) {
                void** vt3 = *(void***)e;
                void (*dtor2)(void*, int) = (void (*)(void*, int))vt3[0];
                dtor2(e, 1);
            }
            it += 4;
        }
        sub_62FC62(v.begin);
    }
}
