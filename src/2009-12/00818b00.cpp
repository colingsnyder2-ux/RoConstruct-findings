// from server: 49% by atomic.potato
struct S_func_008b3ac0 {
    char pad0[96];
    int m_x;
    int f();
};

struct CRobloxReportView {
    void* f_818220();
    int f_818240(void* a, int b);
    void f_818b00(int, int, int, int, int);
};

void CRobloxReportView::f_818b00(int a1, int a2, int a3, int a4, int a5)
{
    int* p = (int*)f_818220();
    int* vt = (int*)*p;
    typedef void (__thiscall *Fn1)(void*, int, int, int, int, int);
    ((Fn1)vt[0x94/4])(p, a1, a2, a3, a4, a5);

    int* vt2 = (int*)*(int*)this;
    typedef void* (__thiscall *Fn2)(void*);
    void* r = ((Fn2)vt2[0x194/4])(this);

    int* c = (int*)*(int*)((char*)r + 0xec);
    int count = *(int*)((char*)c + 0x30);
    int i = 0;
    int ebp = a1;
    if (count <= 0) return;

    do {
        int ebx;
        if (i >= 0 && i < count) {
            if (i >= *(int*)((char*)c + 0x30)) {
                extern void f_7f3b0c();
                f_7f3b0c();
            }
            int* arr = (int*)*(int*)((char*)c + 0x2c);
            ebx = arr[i];
        } else {
            ebx = 0;
        }
        if (((S_func_008b3ac0*)ebx)->f() != 0) {
            int d = a4 - a2;
            int r2 = f_818240((void*)ebx, d);
            int edi = r2 + ebp;
            int* p2 = (int*)f_818220();
            int* vt3 = (int*)*(int*)this;
            typedef void* (__thiscall *Fn3)(void*);
            void* r3 = ((Fn3)vt3[0x194/4])(this);
            int eax3 = *(int*)((char*)r3 + 0x288);
            int* vt4 = (int*)*p2;
            typedef void (__thiscall *Fn4)(void*, int, int, int, int, int, int);
            ((Fn4)vt4[0x9c/4])(p2, ebp, a3, edi, a5, eax3, a3);
            ebp = edi;
        }
        i++;
    } while (i < count);
}
