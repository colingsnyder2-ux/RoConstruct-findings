// from server: 9% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vector4 {
    float x, y, z, w;
};

struct GuiDrawImage {
    int a;
    int b;
    int c;
    int d;
    float e;
    float f;
    float g;
    float h;
};

struct UnifiedWidget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char imageName[0x1c];
    unsigned imageState;

    UnifiedImageWidget(const char* name, int state);
};

extern "C" void* __cdecl sub_736ed0();
extern "C" void __cdecl sub_5d65c0(void*, void*);
extern "C" void __cdecl sub_5d74d0();
extern "C" void* __cdecl sub_77e698();
extern "C" void __cdecl sub_77e6ac();

UnifiedImageWidget::UnifiedImageWidget(const char* name, int state)
{
    void* p = sub_736ed0();
    Vector4 v;
    v.x = *(float*)((char*)p + 0);
    v.y = *(float*)((char*)p + 4);
    v.z = *(float*)((char*)p + 8);
    v.w = *(float*)((char*)p + 12);

    GuiDrawImage g;
    g.a = 3;
    g.b = 1;
    g.c = 0;
    g.d = 1;
    g.e = v.x;
    g.f = v.y;
    g.g = v.z;
    g.h = v.w;

    sub_5d65c0(&g, &guiImageDraw);

    sub_77e698();
    sub_77e6ac();

    sub_5d74d0();

    imageState = state;
}
