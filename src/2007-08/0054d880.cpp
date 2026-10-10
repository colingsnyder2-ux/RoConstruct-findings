// from server: 16% by colin
extern "C" {
    void __stdcall func_0077e698();
    void __stdcall func_0077e6d8();
}

extern void func_004024c0();
extern void func_00630b9e();
extern void* func_0062fef6(int);
extern void* func_0054cc50(void*, int, int, int);
extern void* func_005e9d20(void*, void*, void*, void*);
extern void func_005e9d60(void*, int);

struct S {
    void f(int, int, int);
};

void S::f(int a1, int a2, int a3)
{
    int* self = *(int**)this;
    if (*(unsigned char*)((char*)self + 0x1c) & 1) {
        func_0077e698();
        func_004024c0();
        func_00630b9e();
    }

    int v10 = 0;
    if (*(int*)((char*)self + 8) != 0) {
        int* p = *(int**)((char*)self + 4);
        int* q = *(int**)((char*)p + 4);
        if (q == p) {
            func_0077e6d8();
        }
        if (q == *(int**)((char*)self + 4)) {
            func_0077e6d8();
        }
        v10 = *(int*)((char*)q + 8);
    }

    int edi = a1;
    if (edi == -1) {
        edi = 0x1000;
    }

    int esi = a2;
    if (esi == -1) {
        int* p2 = *(int**)this;
        esi = *(int*)((char*)p2 + 0x18);
    }

    void* mem = func_0062fef6(0x5c);
    void* obj;
    if (mem != 0) {
        obj = func_0054cc50(mem, a3, edi, esi);
    } else {
        obj = 0;
    }

    int* self2 = *(int**)this;
    int* p3 = *(int**)((char*)self2 + 4);
    int* q3 = *(int**)((char*)p3 + 4);
    int* r = (int*)func_005e9d20(self2, p3, q3, &obj);
    func_005e9d60(self2, 1);
    *(int**)((char*)p3 + 4) = r;
    *(int**)((char*)r + 4) = r;

    int* self3 = *(int**)this;
    *(int*)((char*)self3 + 0x1c) |= 3;

    if (v10 != 0) {
        int* self4 = *(int**)this;
        int* p4 = *(int**)((char*)self4 + 4);
        int* q4 = *(int**)((char*)p4 + 4);
        if (q4 == p4) {
            func_0077e6d8();
        }
        if (q4 == *(int**)((char*)self4 + 4)) {
            func_0077e6d8();
        }
        int* vt = *(int**)v10;
        int* arg = *(int**)((char*)q4 + 8);
        void (*fn)(void*, int*) = *(void(**)(void*, int*))((char*)vt + 0x38);
        fn((void*)v10, arg);
    }

    int* self5 = *(int**)this;
    if (*(int*)((char*)self5 + 0xc) != 0) {
        int* p5 = *(int**)((char*)self5 + 0xc);
        int* vt2 = *(int**)p5;
        void (*fn2)(void*) = *(void(**)(void*))((char*)vt2 + 4);
        fn2((void*)p5);
    }
}
