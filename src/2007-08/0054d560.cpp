// from server: 29% by colin
struct allocator {
    char* allocate(unsigned int, const void*);
    void deallocate(char*, unsigned int);
};

struct streambuf {
    int sgetn(char*, int);
};

struct S {
    int f(char*, int);
};

extern "C" void* __stdcall sub_77E618(void*, void*);
extern "C" int __stdcall sub_77E60C(void*, void*, void*);
extern "C" void __stdcall sub_77E610(void*, void*);
extern "C" void __cdecl sub_54B810(void*, char*, int);

int S::f(char* buf, int count) {
    void* local1 = 0;
    void* local2 = 0;
    void* local3 = 0;
    char* p = 0;
    int total = 0;
    int result = -1;

    void* h = sub_77E618(&local1, buf);
    p = (char*)h;
    local2 = buf;
    local3 = (void*)count;
    local1 = 0;

    for (;;) {
        void* v = *(void**)&local3;
        void* w = *(void**)v;
        void* x = *(void**)w;
        void* y = *(void**)((char*)x + 4);
        void* z = *(void**)((char*)y + (int)x + 0x28);
        int n = sub_77E60C(z, p, buf);
        if (n != 0) {
            total = n;
        } else {
            total = -1;
        }
        if (total != -1) {
            break;
        }
        sub_54B810(&local1, p, total);
        p += total;
    }

    if (p != 0) {
        sub_77E610(&local1, p);
    }
    return result;
}
