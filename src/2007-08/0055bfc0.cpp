// from server: 40% by colin
struct S {
    char pad[0x28];
    void* field28;
    char* field2c;
    void __thiscall construct(void* a, void* b, void* c, void* d);
};

extern "C" {
    void* __cdecl sub_56f0e0(void*);
    void* __cdecl sub_56f410(void*);
    void* __cdecl sub_56da00(void);
    void* __cdecl sub_4141a0(void*, void*);
    void* __stdcall sub_77e69c(void*, const void*);
    void* __stdcall sub_77e6ac(void*);
}

void S::construct(void* a, void* b, void* c, void* d) {
    void* p1 = sub_56f0e0(a);
    unsigned char ch = *(unsigned char*)p1;
    void* p2 = sub_56f410(b);
    void* tmp = 0;
    sub_77e69c(&tmp, p2);
    void* result = 0;
    void* fn = field28;
    char* base = field2c;
    base += (int)c;
    ((void (__thiscall*)(void*, void*))fn)(base, &result);
    void* edi = result;
    result = 0;
    void* p3 = sub_56da00();
    *(void**)d = p3;
    void* p4 = sub_4141a0(&tmp, edi);
    void* v1 = *(void**)p4;
    void* v2 = *(void**)((char*)d + 4);
    *(void**)p4 = v2;
    *(void**)((char*)d + 4) = v1;
    if (tmp) {
        void** vt = *(void***)tmp;
        ((void (__thiscall*)(void*, int))vt[0])(tmp, 1);
    }
    sub_77e6ac(&tmp);
}
