// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GuiDrawImage {
    char pad[8];
    void setImageSize(const float* size);
};

struct UnifiedWidget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageName[4];
    unsigned imageState;
    UnifiedImageWidget(const void* imageName, int imageState);
};

extern void func_005d69f0(void*, int, void*);
extern void func_005d6a90(void*, void*, void*);
extern void func_005d56f0(void*);
extern void* func_00624cc0();
extern void func_005d7c30(void*, void*);

extern void* __stdcall MSVCP80_005d7ea0_0(void*, const char*);
extern void* __stdcall MSVCP80_005d7ea0_1(void*, const void*);
extern void __stdcall MSVCP80_005d7ea0_2(void*);

extern float g_797988;
extern float g_7bbd08;
extern char g_7bbcf8;
extern char g_79bdc0;
extern char g_785954;

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    char buf[0x50];
    void* p;

    *(void**)(buf + 0x14) = 0;
    *(float*)(buf + 0x00) = g_797988;
    *(float*)(buf + 0x04) = g_7bbd08;
    func_005d69f0(buf + 0x28, 2, buf);
    MSVCP80_005d7ea0_0(buf + 0x28, &g_7bbcf8);
    p = *(void**)(buf + 0x1c);
    (*(void(__thiscall**)(void*, void*))(*(char**)p + 8))(p, buf + 0x24);
    MSVCP80_005d7ea0_2(buf + 0x24);
    func_005d6a90(buf + 0x1c, *(void**)(buf + 0x70), &g_79bdc0);
    *(void**)(buf + 0x00) = *(void**)(buf + 0x20);
    *(void**)(buf + 0x04) = *(void**)(buf + 0x20);
    if (*(void**)(buf + 0x20)) {
        _InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x20) + 4), 1);
    }
    func_005d56f0(*(void**)(buf + 0x24));
    void* edi = *(void**)func_00624cc0();
    MSVCP80_005d7ea0_0(buf + 0x44, &g_785954);
    *(void**)(buf + 0x00) = *(void**)(buf + 0x14);
    *(void**)(buf + 0x04) = *(void**)(buf + 0x20);
    if (*(void**)(buf + 0x20)) {
        _InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x20) + 4), 1);
    }
    MSVCP80_005d7ea0_1(buf + 0x64, buf + 0x44);
    func_005d7c30(this, edi);
    *(void**)(buf + 0x6c) = *(void**)(buf + 0x1c);
    *(void**)(buf + 0x70) = *(void**)(buf + 0x20);
    if (*(void**)(buf + 0x20)) {
        _InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x20) + 4), 1);
    }
    MSVCP80_005d7ea0_2(buf + 0x40);
    if (*(void**)(buf + 0x18)) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x18) + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))(*(char**)*(void**)(buf + 0x18) + 4))(*(void**)(buf + 0x18));
            if (_InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x18) + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(char**)*(void**)(buf + 0x18) + 8))(*(void**)(buf + 0x18));
            }
        }
    }
    if (*(void**)(buf + 0x20)) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x20) + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))(*(char**)*(void**)(buf + 0x20) + 4))(*(void**)(buf + 0x20));
            if (_InterlockedExchangeAdd((volatile long*)((char*)*(void**)(buf + 0x20) + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(char**)*(void**)(buf + 0x20) + 8))(*(void**)(buf + 0x20));
            }
        }
    }
}
