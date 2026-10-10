// from server: 39% by colin
extern "C" {
    void __stdcall func_0077e698();
    void __stdcall func_0077e6d8();
}

struct S;

extern void func_004024c0();
extern void func_00630b9e();
extern void* func_0062fef6(int);
extern void* func_0054cad0(void*, int, int, int);
extern void func_005e9d20(void*, void*, void*, void**);
extern void func_005e9d60(void*, int);

struct S {
    void func_0054d700(int, int, int);
};

void S::func_0054d700(int a1, int a2, int a3)
{
    int* p = *(int**)this;
    if (*(unsigned char*)((char*)p + 0x1c) & 1) {
        func_0077e698();
        func_004024c0();
        func_00630b9e();
    }
    int v;
    if (*(int*)((char*)p + 8) != 0) {
        int* q = *(int**)((char*)p + 4);
        int* r = *(int**)((char*)q + 4);
        if (r != q) {
            func_0077e6d8();
        }
        if (r == *(int**)((char*)p + 4)) {
            func_0077e6d8();
        }
        v = *(int*)((char*)r + 8);
    } else {
        v = 0;
    }
    int x = a1;
    if (x == -1) {
        x = 0x1000;
    }
    int y = a2;
    if (y == -1) {
        y = *(int*)((char*)*(int**)this + 0x18);
    }
    void* mem = func_0062fef6(0x5c);
    void* obj;
    if (mem != 0) {
        obj = func_0054cad0(mem, v, x, y);
    } else {
        obj = 0;
    }
    int* p2 = *(int**)this;
    int* q2 = *(int**)((char*)p2 + 4);
    func_005e9d20(p2, q2, *(void**)((char*)q2 + 4), &obj);
    func_005e9d60(p2, 1);
    *(void**)((char*)q2 + 4) = obj;
    *(void**)((char*)obj + 4) = q2;
    int* p3 = *(int**)this;
    *(int*)((char*)p3 + 0x1c) |= 3;
    if (v != 0) {
        int* p4 = *(int**)this;
        int* q4 = *(int**)((char*)p4 + 4);
        int* r4 = *(int**)((char*)q4 + 4);
        if (r4 == q4) {
            func_0077e6d8();
        }
        if (r4 == *(int**)((char*)p4 + 4)) {
            func_0077e6d8();
        }
        int* vt = *(int**)v;
        int* fn = *(int**)((char*)vt + 0x38);
        ((void (__thiscall*)(void*, int))fn)((void*)v, *(int*)((char*)r4 + 8));
    }
    int* p5 = *(int**)this;
    if (*(int*)((char*)p5 + 0xc) != 0) {
        int* p6 = *(int**)((char*)p5 + 0xc);
        int* vt2 = *(int**)p6;
        int* fn2 = *(int**)((char*)vt2 + 4);
        ((void (__thiscall*)(void*))fn2)((void*)p6);
    }
}
