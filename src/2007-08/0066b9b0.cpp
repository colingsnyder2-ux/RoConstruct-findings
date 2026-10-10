// from server: 19% by colin
struct CXTPMenuBar {
    char pad[0x1b4];
    int field_1b4;
    char pad2[0x4];
    void* field_1bc;
    int field_1c0;
    int method(int);
};

struct Sub1 {
    int method(int);
};

struct Sub2 {
    void* method(int);
};

struct Sub3 {
    void method(int);
};

struct Sub4 {
    int method(int, int, int, int);
};

extern "C" int __stdcall sub_47b540(void*);
extern "C" void* __stdcall sub_62fef6(int);
extern "C" void __stdcall sub_6301e4(void*);
extern "C" int __stdcall sub_643980(void*, int);
extern "C" int __stdcall sub_685720(void*, void*, void*, int);
extern "C" int __stdcall sub_6a5a30(void*, void*);
extern "C" int __stdcall sub_6a5bc0(void*);
extern "C" int __stdcall sub_6a5bd0(void*, void*, void*);
extern "C" int __stdcall sub_6a6af0(void*, int);
extern "C" int __stdcall sub_6a6f60(void*, int, void*);
extern "C" int __stdcall sub_6a6f80(void*, int, int);
extern "C" void __stdcall sub_77ddac(void*);
extern "C" int __stdcall sub_77dd94(void*, void*, void*, int);
extern "C" int __stdcall sub_77dd98(void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" int __stdcall sub_66b8f0(void*, int);

int CXTPMenuBar::method(int a1) {
    int result = 0;
    if (*(int*)((char*)this + 0x1bc) != 0) {
        if (sub_47b540(*(void**)((char*)this + 0x1bc)) > 0) {
            sub_6a6f80(this, *(int*)((char*)this + 0x1b4), 0);
            *(int*)((char*)this + 0x1c0) = 1;
        }
    }
    sub_66b8f0(this, a1);
    sub_685720((void*)a1, (void*)0x7cae88, (void*)((char*)this + 0x1b4), 0);
    if (*(int*)((char*)a1 + 0x24) == 0) {
        int count = 0;
        int iter = sub_6a5bc0(*(void**)((char*)this + 0x1bc));
        while (iter != 0) {
            int val;
            sub_6a5bd0(*(void**)((char*)this + 0x1bc), &iter, &val);
            if (*(int*)(val + 0x34) != 0) {
                count++;
            }
        }
        ((Sub1*)a1)->method(count);
        iter = sub_6a5bc0(*(void**)((char*)this + 0x1bc));
        while (iter != 0) {
            int val;
            sub_6a5bd0(*(void**)((char*)this + 0x1bc), &iter, &val);
            if (*(int*)(val + 0x34) != 0) {
                int v = *(int*)(val + 0x30);
                sub_77ddac(&v);
                sub_77dd94(&v, (void*)0x7cae78, (void*)0x7cae80, 0);
                void* p = ((Sub2*)a1)->method(0x70);
                sub_685720(p, (void*)0x7c6dc0, &v, 0);
                ((Sub3*)p)->method(v);
                if (p != 0) {
                    sub_6301e4(p);
                }
                sub_77ddbc(&v);
            }
        }
    } else if (*(int*)((char*)a1 + 0x28) > 4) {
        int n = ((Sub4*)a1)->method(0, 0, 0, 0);
        if (n > 0) {
            for (int i = 0; i < n; i++) {
                int v;
                sub_77ddac(&v);
                sub_77dd94(&v, (void*)0x7cae78, (void*)0x7cae80, i);
                void* p = ((Sub2*)a1)->method(0x70);
                sub_685720(p, (void*)0x7c6dc0, &v, 0);
                int r = sub_6a6af0(*(void**)((char*)this + 0x1bc), v);
                if (r == 0) {
                    void* mem = sub_62fef6(0x38);
                    if (mem != 0) {
                        void* tmp = (void*)sub_643980(this, v);
                        sub_6a5a30(mem, tmp);
                    } else {
                        mem = 0;
                    }
                    sub_6a6f60(*(void**)((char*)this + 0x1bc), v, mem);
                }
                ((Sub3*)p)->method(v);
                if (p != 0) {
                    sub_6301e4(p);
                }
                sub_77ddbc(&v);
            }
        }
    }
    return result;
}
