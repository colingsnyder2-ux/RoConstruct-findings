// from server: 36% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct Inner {
    void* p;
    void* q;
};

struct S {
    void* vtable;
    Inner inner;
    int f();
};

extern "C" void* __cdecl sub_5EDAF0(void*);
extern "C" void* __cdecl sub_5EF020(void*);
extern "C" bool __stdcall sub_802878(void*, void*);

extern type_info type_955E20;

int S::f() {
    void* vt = *(void**)this;
    void* ti = *(void**)((char*)vt + 8);
    if (sub_802878(&type_955E20, ti)) {
        void* r = sub_5EDAF0((char*)this + 4);
        return *(int*)r;
    }
    void* a = *(void**)this;
    void* b = *(void**)((char*)this + 4);
    void* c;
    if (b) {
        void* bvt = *(void**)b;
        c = ((void* (__thiscall*)(void*))*(void**)((char*)bvt + 8))(b);
    } else {
        c = 0;
    }
    void* tmp[2];
    tmp[0] = a;
    tmp[1] = c;
    void* r = sub_5EF020(tmp);
    int result = *(int*)r;
    if (c) {
        void* cvt = *(void**)c;
        ((void (__thiscall*)(void*, int))*(void**)((char*)cvt))(c, 1);
    }
    return result;
}
