// from server: 52% by colin
struct TSignalInstance {
    void* vtable;
    void* callback;
    void* slot;
    void* impl;
    void* data;
    void* extra;

    void assign(void* other);
};

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void __cdecl sub_417f10(void*, int, void*);
extern "C" void __cdecl sub_62fc62(void*);
extern "C" void* __cdecl sub_62fef6(unsigned int);

void TSignalInstance::assign(void* other) {
    void* local = 0;
    void* tmp = 0;
    sub_417f10(&tmp, 1, &local);
    void* p = tmp;
    if (p != 0 || ((char*)local - (char*)p) >> 2 != 0) {
        _invalid_parameter_noinfo();
        p = tmp;
    }
    void* obj = sub_62fef6(8);
    if (obj != 0) {
        *(void**)obj = (void*)0x787198;
        *(void**)((char*)obj + 4) = local;
    } else {
        obj = 0;
    }
    void* old = *(void**)p;
    *(void**)p = obj;
    if (old != 0) {
        void* vt = *(void**)old;
        void* fn = *(void**)vt;
        ((void (__thiscall*)(void*, int))fn)(old, 1);
    }
    void* v = *(void**)this;
    void* fn2 = *(void**)((char*)v + 4);
    ((void (__thiscall*)(void*, void*))fn2)(this, &local);
    void* q = tmp;
    if (q != 0) {
        void* end = local;
        void* it = q;
        if (it != end) {
            do {
                void* o = *(void**)it;
                if (o != 0) {
                    void* vt2 = *(void**)o;
                    void* fn3 = *(void**)vt2;
                    ((void (__thiscall*)(void*, int))fn3)(o, 1);
                }
                it = (char*)it + 4;
            } while (it != end);
        }
        sub_62fc62(q);
    }
}
