// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Item {
    void construct();
    void setValue(int);
    void update();
};

struct RenderStatsItem : Item {
    void construct();
    void setValue(int);
    void update();
    void init();
};

struct RefCounted {
    void release();
};

struct StringHolder {
    void destroy();
};

void RenderStatsItem::init()
{
    *(void**)this = (void*)0x7934c4;
    *(void**)((char*)this + 0x54) = (void*)0x7934b4;
    construct();
    setValue(0);

    {
        void* p = *(void**)((char*)this + 0xa4);
        if (p) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*, int))vt[0])(p, 1);
        }
    }
    {
        void* p = *(void**)((char*)this + 0xa0);
        if (p) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*, int))vt[0])(p, 1);
        }
    }
    {
        void* p = *(void**)((char*)this + 0x9c);
        if (p) {
            ((void (__thiscall*)(void*))0x478870)(p);
            ((void (__cdecl*)(void*))0x62fc62)(p);
        }
    }
    {
        void* p = *(void**)((char*)this + 0x88);
        if (p) {
            ((void (__thiscall*)(void*))0x77e6ac)((char*)p + 0x20018);
            ((void (__cdecl*)(void*))0x62fc62)(p);
        }
    }
    {
        void* p = *(void**)((char*)this + 0x74);
        if (p) {
            void* q = (char*)p + 0x28;
            void** vt = *(void***)q;
            ((void (__thiscall*)(void*, int))vt[1])(q, 1);
        }
    }
    {
        void* p = *(void**)((char*)this + 0x6c);
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                void** vt = *(void***)p;
                ((void (__thiscall*)(void*))vt[1])(p);
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                    void** vt2 = *(void***)p;
                    ((void (__thiscall*)(void*))vt2[2])(p);
                }
            }
        }
    }
    {
        void* p = *(void**)((char*)this + 0x64);
        if (p) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*))vt[2])(p);
        }
    }
    {
        void* p = *(void**)((char*)this + 0x60);
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                void** vt = *(void***)p;
                ((void (__thiscall*)(void*))vt[1])(p);
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                    void** vt2 = *(void***)p;
                    ((void (__thiscall*)(void*))vt2[2])(p);
                }
            }
        }
    }
    ((void (__thiscall*)(void*))0x6305e0)(this);
}
