// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct Widget {
    void* vptr;
};

struct String {
    char buf[16];
};

extern "C" void* __cdecl sub_7baf10();
extern "C" void __cdecl sub_601db0(void*, void*);
extern "C" void __cdecl sub_602cb0();

extern "C" void* __stdcall sub_802458(String*, const char*);
extern "C" void __stdcall sub_802468(String*);

struct UnifiedImageWidget {
    void method(int a, int b);
};

void UnifiedImageWidget::method(int a, int b)
{
    String str;
    void* p;
    void* q;
    void* r;
    void* s;
    int arr[8];
    void* tmp;

    arr[0] = 3;
    arr[1] = 1;
    arr[2] = 0;
    arr[3] = 1;
    float* f = (float*)sub_7baf10();
    float f0 = f[0];
    float f1 = f[1];
    float f2 = f[2];
    float f3 = f[3];
    arr[4] = *(int*)&f3;
    arr[5] = *(int*)&f1;
    arr[6] = *(int*)&f2;
    arr[7] = *(int*)&f0;
    sub_601db0(&arr[0], &arr[0]);

    sub_802458(&str, "RightPalette");
    p = 0;
    q = 0;
    sub_602cb0();
    r = 0;
    s = 0;
    if (r) {
        _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
    }
    if (s) {
        _InterlockedExchangeAdd((volatile long*)((char*)s + 4), 1);
    }
    if (s) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)s + 4), -1) == 1) {
            void** vt = *(void***)s;
            ((void(__thiscall*)(void*))vt[1])(s);
            if (_InterlockedExchangeAdd((volatile long*)((char*)s + 8), -1) == 1) {
                void** vt2 = *(void***)s;
                ((void(__thiscall*)(void*))vt2[2])(s);
            }
        }
    }
    sub_802468(&str);
}
