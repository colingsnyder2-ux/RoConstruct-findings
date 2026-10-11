// from server: 46% by colin
struct VInstance {
    char pad[0x280];
};

struct AssociationItem {
    char pad[0x280];
};

struct Association {
    char pad[0x280];
};

extern "C" int __stdcall sub_4c71d0(void*, void*, void*);
extern "C" void __stdcall sub_4c69e0(void*, void*, void*, void*);
extern "C" int __stdcall sub_4c7110(void*, void*, void*);
extern "C" void __stdcall sub_4af950(void*);

struct S {
    int f(void*);
};

int S::f(void* arg) {
    char local1;
    void* local2;
    int result;
    void* p;
    void* q;
    void* r;
    int a;
    int b;
    int c;
    void* v;

    local1 = 0;
    result = sub_4c71d0(&local1, arg, arg);
    if ((char)result != 0) {
        return 1;
    }

    if (this != 0) {
        p = (char*)this - 0xc;
    } else {
        p = 0;
    }
    a = *(int*)((char*)p + 4);

    if (this != 0) {
        q = (char*)this - 0xc;
    } else {
        q = 0;
    }
    b = *(int*)((char*)q + 4);

    if (this != 0) {
        r = (char*)this - 0xc;
    } else {
        r = 0;
    }
    c = *(int*)((char*)r + 4);

    void* t1 = (char*)c + 0x280;
    void* t2;
    if (arg != 0) {
        t2 = (char*)arg + 0x280;
    } else {
        t2 = 0;
    }

    sub_4c69e0(t2, t1, (char*)b + 0x284, (char*)a + 0x288);

    v = *(void**)((char*)arg + 8);
    local1 = 0;
    result = sub_4c7110(this, v, &local2);
    if ((char)result == 0) {
        sub_4af950(arg);
        return 0;
    }
    return 1;
}
