// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    int __stdcall sub_736ED0();
    int __stdcall sub_555530();
    int __stdcall sub_555D50(int);
    int __stdcall sub_564B50();
    int __stdcall sub_5D56F0();
    int __stdcall sub_5D65C0();
    int __stdcall sub_5D6640();
}

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct String {
    char pad[16];
};

struct Widget {
    char pad0[4];
    void* parent;
    char pad1[0xbc];
    void* childrenBegin;
    void* childrenEnd;
};

struct UnifiedImageWidget {
    char pad0[4];
    Widget* parent;
    char pad1[0x280];
    void* imageDraw;
    String imageName;
    unsigned imageState;

    void construct(const String& name, int state);
};

void UnifiedImageWidget::construct(const String& name, int state)
{
    char buf[0x38];
    int flag = 0;
    *(unsigned short*)(buf + 0x30) = 0;
    *(unsigned short*)(buf + 0x32) = 0;

    sub_736ED0();
    int* p = (int*)sub_555530();
    float f0 = *(float*)(p + 0);
    float f1 = *(float*)(p + 4);
    float f2 = *(float*)(p + 8);
    float f3 = *(float*)(p + 12);
    unsigned c = *(unsigned*)(buf + 0x30);

    struct { int a; int b; unsigned c; int d; float e; float f; float g; float h; } args;
    args.a = 2;
    args.b = 0;
    args.c = c;
    args.d = 0;
    args.e = f3;
    args.f = f1;
    args.g = f2;
    args.h = f0;

    sub_5D65C0();

    flag = 1;
    sub_5D65C0();
}
