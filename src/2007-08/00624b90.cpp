// from server: 34% by colin
struct Inner {
    char pad0[4];
    int* begin;
    int* end;
};

struct Outer {
    char pad0[4];
    Inner* inner;
    char pad1[8];
};

struct List {
    char pad0[4];
    void* first;
    void* last;
    char pad1[4];
};

struct Str {
    char buf[16];
};

struct Elem {
    char pad0[0x1c];
};

extern "C" void* __stdcall sub_580700(void*);
extern "C" void __stdcall sub_62fc62(void*);
extern "C" void __stdcall str_ctor_copy(void*, const void*);
extern "C" void __stdcall str_ctor_cstr(void*, const char*);
extern "C" void __stdcall str_dtor(void*);
extern "C" void __stdcall list_push(void*, void*);
extern "C" void __stdcall elem_dtor(void*);

struct S {
    void* f(void* a, void* b, void* c, void* d, void* e);
};

void* S::f(void* a, void* b, void* c, void* d, void* e) {
    void* result = 0;
    void* p = a;
    void* end = b;
    int idx = 1;
    void* cur = (char*)p + 0x1c;
    while (p == 0) {
        int count = (int)(((char*)end - (char*)p) / 0x1c);
        if (idx >= count) break;
        void* r = sub_580700(cur);
        Inner* in = *(Inner**)((char*)result + 4);
        if (in != 0) {
            int n = (int)(((char*)in->end - (char*)in->begin) / 4);
            if ((int)r < n) {
                result = (void*)*(int*)((char*)in->begin + (int)r * 4);
                idx++;
                cur = (char*)cur + 0x1c;
                continue;
            }
        }
        str_ctor_cstr((char*)result + 0x10, "list<T> too long");
        result = 0;
        if (p != end) {
            void* it = p;
            do {
                elem_dtor(it);
                it = (char*)it + 0x1c;
            } while (it != end);
        }
        sub_62fc62(p);
        return 0;
    }
    str_ctor_copy((char*)result + 0x10, (char*)result + 0x10);
    if (p != 0) {
        if (p != end) {
            void* it = p;
            do {
                elem_dtor(it);
                it = (char*)it + 0x1c;
            } while (it != end);
        }
        sub_62fc62(p);
    }
    return result;
}
