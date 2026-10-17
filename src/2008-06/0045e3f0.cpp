// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* ctrl;
};

struct OgreTimer {
    OgreTimer();
    ~OgreTimer();
    unsigned int getMilliseconds();
    void reset();
};

struct String {
    char data[28];
    String();
    ~String();
};

struct S {
    char pad0[0x54];
    int f54;
    int f58;
    char pad5c[0x70 - 0x5c];
    int f70;
    int f74;
    int f78;
    char pad7c[0xb0 - 0x7c];
    int fB0;
    int fB4;
    int fB8;
    void method(int arg);
};

extern "C" void __stdcall sub_804e7c(void*);
extern "C" void __stdcall sub_804e80(void*);
extern "C" unsigned int __stdcall sub_804e84(void*);
extern "C" void __stdcall sub_804e88(void*);
extern "C" void* __cdecl sub_8023e4(void*, const char*);
extern "C" void __stdcall sub_802468(void*);

void* __cdecl sub_412d50();
void __cdecl sub_511cf0(void*);
void __cdecl sub_511df0(void*);
void __cdecl sub_411b40(void*);
void* __cdecl sub_49aca0(int);
void __cdecl sub_45c470(void*, void*);
void __cdecl sub_57a1b0(int, int, int);
void __cdecl sub_57a6c0(int, int);
void __cdecl sub_5773c0(void*);
void* __cdecl sub_45dce0(int);
bool __cdecl sub_45aec0(void*);
void __cdecl sub_45af20(void*, int);
void* __cdecl sub_71f210(void*);
void* __cdecl sub_678630(void*, int);
void __cdecl sub_5555e0(void*, int);

extern unsigned char byte_96de64;
extern unsigned char byte_962f64;
extern float flt_819778;
extern char str_819e48[];

void S::method(int arg)
{
    void* p = sub_412d50();
    if (*(int*)((char*)p + 0x13c) == 2) {
        byte_96de64 = 0;
    }

    OgreTimer timer;
    sub_804e7c(&timer);

    int* v1 = (int*)fB0;
    int* vt1 = (int*)*v1;
    int (*fn1)(void*) = (int (*)(void*))vt1[7];
    fn1(v1);

    int* obj = (int*)fn1;
    obj = (int*)((char*)obj + 0x108);
    sub_511cf0(obj);

    sub_804e80(&timer);

    int a = f70;
    int b = f74;
    if (b != 0) {
        _InterlockedExchangeAdd((volatile long*)(b + 4), 1);
    }

    sub_411b40(&a);

    void* r = sub_49aca0(f70);
    if (r == 0) {
        byte_962f64 = (unsigned char)(int)r;
    } else {
        void* p2 = sub_412d50();
        bool ne = (*(int*)((char*)p2 + 0x140) != 2);
        byte_962f64 = ne ? 1 : 0;
        sub_45c470(r, (void*)0x45c600);
    }

    sub_57a1b0(fB4, f70, (int)((char*)this + 0x58));
    sub_57a6c0(fB4, f70);

    int* v2 = (int*)fB4;
    int* vt2 = (int*)*v2;
    int (*fn2)(void*) = (int (*)(void*))vt2[2];
    fn2(v2);

    int* v3 = (int*)fB0;
    int* vt3 = (int*)*v3;
    int (*fn3)(void*, int) = (int (*)(void*, int))vt3[1];
    fn3(v3, fB8);

    int* v4 = (int*)fB4;
    int* vt4 = (int*)*v4;
    int (*fn4)(void*) = (int (*)(void*))vt4[3];
    fn4(v4);

    unsigned int ms = sub_804e84(&timer);
    float fms;
    if ((int)ms < 0) {
        fms = (float)(int)ms + flt_819778;
    } else {
        fms = (float)(int)ms;
    }

    sub_5773c0(&a);
    sub_511df0(obj);

    if (byte_962f64 != 0) {
        void* q = (void*)(fB8 + 0x18);
        void* rr = sub_71f210(q);
        if (rr != 0) {
            void* q2 = (void*)(fB8 + 0x18);
            void* rr2 = sub_678630(q2, 0);
            *(float*)rr2 = fms;
        }
    }

    int* v5 = (int*)fB0;
    int* vt5 = (int*)*v5;
    int (*fn5)(void*) = (int (*)(void*))vt5[7];
    fn5(v5);

    int* obj2 = (int*)fn5;
    sub_511cf0(obj2);

    if (f78 != 0) {
        sub_5555e0((void*)f78, (int)((char*)this + 0x54));
    }

    if (f70 != 0) {
        void* r2 = sub_45dce0(f70);
        if (r2 != 0) {
            int ebp = *(int*)((char*)r2 + 0x130);
            if (ebp != 0) {
                int* vt6 = (int*)*(int*)ebp;
                bool (*fn6)(void*, int) = (bool (*)(void*, int))vt6[5];
                if (fn6((void*)ebp, 0x67)) {
                    if (sub_45aec0((void*)ebp)) {
                        if (fB8 != 0) {
                            char buf[16];
                            sub_45af20(buf, 0);
                            sub_8023e4(buf, str_819e48);
                            sub_802468(buf);

                            int* v7 = (int*)fB8;
                            int* vt7 = (int*)v7[3];
                            void (*fn7)(void*, void*) = (void (*)(void*, void*))vt7[31];
                            fn7(v7, buf);
                            sub_802468(buf);
                        }
                    }
                }
            }
        }
    }

    sub_511df0(obj2);
    sub_804e88(&timer);
}
