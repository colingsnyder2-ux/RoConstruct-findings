// from server: 63% by colin
struct Inner {
    void method1(void*);
    void* method2(void*);
};

struct Outer {
    char pad[8];
    Inner inner;
    bool check();
};

extern "C" {
    void __stdcall sub_729350(void*, void*);
    void* __stdcall sub_729380(void*, void*);
    bool __stdcall sub_728b10(void*, void*);
    void* __stdcall sub_728f60(void*);
    void __stdcall sub_729150(void*);
}

bool Outer::check() {
    char buf1[28];
    char buf2[28];
    void* p;

    sub_729350(&inner, buf1);
    p = sub_729380(&inner, buf2);
    while (!sub_728b10(buf1, p)) {
        void* q = sub_728f60(buf1);
        void* r = *(void**)((char*)q + 4);
        if (r != 0 && *(int*)((char*)r + 8) != 0)
            return false;
        sub_729150(buf1);
        p = sub_729380(&inner, buf2);
    }
    return true;
}
