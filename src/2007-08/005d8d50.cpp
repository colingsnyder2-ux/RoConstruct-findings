// from server: 9% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GuiDrawImage {
    char pad[0x100];
};

struct UnifiedWidget {
    char pad[0x110];
    unsigned char flag110;
};

struct UnifiedImageWidget {
    char pad[0x100];
    GuiDrawImage guiImageDraw;
    char pad2[0x10];
    float f114;
    float f118;
    float f11c;
    float f120;
    float f124;
    float f128;
    float f12c;
    float f130;
    float f134;
    float f138;
    void construct(const char* name, int state);
};

extern "C" void __cdecl sub_50b0e0();
extern "C" void __cdecl sub_555530();
extern "C" void __cdecl sub_736ed0();
extern "C" void __cdecl sub_5d56f0();
extern "C" void __cdecl sub_5d65c0();
extern "C" void __cdecl sub_5d6c60();
extern "C" void __cdecl sub_5d6d60();
extern "C" void __cdecl sub_5d8670();

void UnifiedImageWidget::construct(const char* name, int state) {
    char buf[0x40];
    int i;

    sub_736ed0();
    *(unsigned short*)(buf + 0x34) = 0x32;
    *(unsigned short*)(buf + 0x36) = 0x28;
    sub_555530();
    sub_5d65c0();
    sub_5d6c60();
    sub_5d6d60();
    sub_5d8670();

    for (i = 0; i < 0x16; i++) {
        if (*(void**)((char*)this + 0xc0) != 0) {
            void* p = *(void**)((char*)this + 0xc0);
            if (*(void**)((char*)p + 4) != 0) {
                int n = (*(int*)((char*)p + 8) - *(int*)((char*)p + 4)) >> 3;
                if (i < n) {
                    void* q = *(void**)((char*)this + 0xc0);
                    void* e = *(void**)((char*)q + 4);
                    void* item = *(void**)((char*)e + i * 8);
                    if (item != 0) {
                        item = (char*)item + 0xa4;
                    } else {
                        item = 0;
                    }
                    sub_5d8670();
                    *(int*)((char*)this + 0x118) = 0xe;
                    float v = (float)*(int*)((char*)this + 0x118);
                    float m = *(float*)0x796468;
                    *(float*)((char*)this + 0xf4) = v * m;
                    *(float*)((char*)this + 0xf8) = v + v;
                    sub_50b0e0();
                    *(float*)((char*)this + 0x11c) = *(float*)0;
                    *(float*)((char*)this + 0x120) = *(float*)4;
                    *(float*)((char*)this + 0x124) = *(float*)8;
                    *(float*)((char*)this + 0x128) = 1.0f;
                    sub_736ed0();
                    *(float*)((char*)this + 0x12c) = *(float*)0;
                    *(float*)((char*)this + 0x130) = *(float*)4;
                    *(float*)((char*)this + 0x134) = *(float*)8;
                    *(float*)((char*)this + 0x138) = *(float*)0xc;
                    *(float*)((char*)this + 0xf4) = *(float*)0x7bbd90;
                    *(float*)((char*)this + 0xf8) = *(float*)0x7bbd4c;
                }
            }
        }
    }
    *(unsigned char*)((char*)this + 0x110) = 0;
}
