// from server: 29% by colin
struct C;

extern "C" {
    int __stdcall sub_62FF3E(void*);
    void __stdcall sub_62FF38(void*, int);
    int __stdcall sub_63B230(C*, int, int, int, int);
    int __stdcall sub_6713D0(C*, void*);
    int __stdcall sub_67F490(void*);
    int __stdcall sub_6921C0(C*, void*);
    int __stdcall sub_6B3540(C*, void*);
    int __stdcall sub_6B3D70(C*, int);
    int __stdcall sub_77DCD0(void*);
    int __stdcall sub_77D434(void*, void*);
    int __stdcall sub_77DDBC(void*);
    int __stdcall sub_77E124(void*);
}

struct C {
    int f(int, int, int, int, int);
};

int C::f(int a, int b, int c, int d, int e)
{
    void* p = 0;
    int v = 0;
    sub_62FF3E(&p);
    if (sub_6713D0(this, &v) == 0) {
        int x = sub_63B230(this, a, b, c, d);
        if (p) *(int*)((char*)p + 4) = 0;
        if (e) sub_62FF38((void*)e, 0);
        return x;
    }
    int idx = v - 1;
    C* px = (C*)((char*)this - 0x20);
    C* y = (C*)sub_6B3D70(px, idx);
    if (y == 0) {
        if (p) *(int*)((char*)p + 4) = 0;
        if (e) sub_62FF38((void*)e, 0);
        return (int)0x80070057;
    }
    char buf[8];
    sub_6B3540(y, buf);
    sub_67F490(buf);
    if (sub_77DCD0(buf)) {
        char buf2[8];
        sub_6921C0(y, buf2);
        sub_77D434(buf2, buf);
        sub_77DDBC(buf2);
    }
    int z = sub_77E124(buf);
    *(int*)e = z;
    sub_77DDBC(buf);
    if (p) *(int*)((char*)p + 4) = 0;
    if (e) sub_62FF38((void*)e, 0);
    return 0;
}
