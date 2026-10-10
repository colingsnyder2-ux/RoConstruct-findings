// from server: 63% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct GuiDrawImage {
    void* vptr;
};

struct BackpackItem {
    char pad0[0x120];
    GuiDrawImage guiImageDraw;
    GuiDrawImage textureId;
    char pad1[0x8];
    GuiDrawImage window;
    GuiDrawImage window2;
    char pad2[0x8];
    RefCounted* ref1;
    RefCounted* ref2;

    void destroy();
};

extern "C" void __stdcall sub_00541c30();
extern "C" void __stdcall sub_00432530(void*, void*);

void BackpackItem::destroy()
{
    sub_00541c30();

    if (*(RefCounted**)((char*)this + 0x140) != 0) {
        RefCounted* p = *(RefCounted**)((char*)this + 0x140);
        if (p != 0) {
            sub_00432530((char*)p + 0x14, (char*)this + 0x120);
        }
        p = *(RefCounted**)((char*)this + 0x140);
        if (p != 0) {
            sub_00432530((char*)p + 0x2c, (char*)this + 0x124);
        }
        p = *(RefCounted**)((char*)this + 0x140);
        if (p != 0) {
            sub_00432530((char*)p + 0xe8, (char*)this + 0x130);
        }
        p = *(RefCounted**)((char*)this + 0x140);
        if (p != 0) {
            sub_00432530((char*)p + 0x100, (char*)this + 0x134);
        }
        *(int*)((char*)this + 0x140) = 0;
    }

    RefCounted* r = *(RefCounted**)((char*)this + 0x144);
    *(int*)((char*)this + 0x144) = 0;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void (__stdcall *fn)(RefCounted*) = *(void (__stdcall**)(RefCounted*))(*(int*)r + 4);
            fn(r);
        }
        if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
            void (__stdcall *fn)(RefCounted*) = *(void (__stdcall**)(RefCounted*))(*(int*)r + 8);
            fn(r);
        }
    }
}
