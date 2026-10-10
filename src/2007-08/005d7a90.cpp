// from server: 12% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_00736ed0();
extern "C" void __cdecl func_005d65c0();
extern "C" void __cdecl func_005d68b0();
extern "C" void __cdecl func_005d56f0();

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct GuiDrawImage {
    int field0;
    int field4;
    int field8;
    int fieldC;
    float f10;
    float f14;
    float f18;
    float f1c;
};

struct UnifiedImageWidget {
    char pad[0x38];
    GuiDrawImage guiImageDraw;
    void* imageNamePtr;
    void* imageNamePtr2;
    unsigned imageState;
    void construct(const void* name, int state);
};

void UnifiedImageWidget::construct(const void* name, int state)
{
    func_00736ed0();
    GuiDrawImage* img = &guiImageDraw;
    float a = *(float*)((char*)img + 0);
    float b = *(float*)((char*)img + 4);
    float c = *(float*)((char*)img + 8);
    float d = *(float*)((char*)img + 0xc);

    struct Local {
        int type;
        int zero;
        short s1;
        short s2;
        int fieldC;
        float f10;
        float f14;
        float f18;
        float f1c;
    } local;
    local.type = 2;
    local.zero = 0;
    local.s1 = 0x19;
    local.s2 = 0x64;
    local.fieldC = 1;
    local.f10 = d;
    local.f14 = c;
    local.f18 = b;
    local.f1c = a;

    void* p = &local;
    func_005d65c0();

    void* str = 0;
    func_005d68b0();

    RefCounted* rc = 0;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }
    func_005d56f0();

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = *(void***)rc;
            ((void (__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void (__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }

    this->imageNamePtr = 0;
    this->imageNamePtr2 = 0;
    this->imageState = state;
}
