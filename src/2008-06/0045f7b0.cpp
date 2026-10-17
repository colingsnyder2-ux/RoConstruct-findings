// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    Control* control;
    void* ptr;
};

struct String
{
    char storage[28];
    String(const char*);
    ~String();
};

extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void* __stdcall sub_802E18(void*, int, int);
extern "C" void* __stdcall sub_802458(void*, const char*);
extern "C" void* __stdcall sub_802468(void*);

struct RBX_Stats_Item
{
    void setItem(void* item);
};

void RBX_Stats_Item::setItem(void* item)
{
    char* self = (char*)this;
    void* old = *(void**)(self + 0x6c);
    if (item == old)
        return;

    if (*(void**)(self + 0x70) != 0)
    {
        Shared* sh = (Shared*)(self + 0x70);
        Shared tmp;
        tmp.control = sh->control;
        tmp.ptr = sh->ptr;
        if (tmp.control)
            _InterlockedExchangeAdd(&tmp.control->strong, 1);

        void* a = *(void**)(self + 0x64);
        if (a)
        {
            ((void (__thiscall*)(void*, int))0x55a8f0)(a, 0);
            ((void (__thiscall*)(void*))0x456e80)(self + 0x64);
        }

        void* c = *(void**)(self + 0x70);
        if (c)
        {
            void* r = ((void* (__thiscall*)(void*))0x45dce0)(c);
            if (r)
                *(void**)((char*)r + 0x130) = 0;
        }

        void* g = *(void**)(self + 0xa4);
        if (*(void**)0x96eff4 != g)
        {
            void** vt = *(void***)g;
            ((void (__thiscall*)(void*))vt[38])(g);
            *(void**)0x96eff4 = g;
        }

        void* b = *(void**)(self + 0xb0);
        if (b)
        {
            void** vt = *(void***)b;
            ((void (__thiscall*)(void*, int))vt[0])(b, 1);
        }
        *(void**)(self + 0xb0) = 0;

        ((void (__thiscall*)(void*, void*))0x555830)(self + 0x78, self + 0x54);

        void* d = *(void**)(self + 0x84);
        *(void**)(self + 0x84) = 0;
        if (d)
        {
            void** vt = *(void***)((char*)d + 0x28);
            ((void (__thiscall*)(void*, int))vt[1])((char*)d + 0x28, 1);
        }

        ((void (__thiscall*)(void*))0x456e80)(self + 0x78);
    }

    if (*(void**)(self + 0x6c) != item)
    {
        if (item)
        {
            void** vt = *(void***)item;
            ((void (__thiscall*)(void*, void*))vt[1])(item, item);
        }
        void* o = *(void**)(self + 0x6c);
        if (o)
        {
            void** vt = *(void***)o;
            ((void (__thiscall*)(void*, void*))vt[2])(o, o);
        }
        *(void**)(self + 0x6c) = item;
    }

    if (item)
    {
        void* r = ((void* (__thiscall*)(void*, void*))0x46a940)(item, self + 0x10);
        *(void**)(self + 0x70) = *(void**)r;
        ((void (__thiscall*)(void*, void*))0x4025b0)(self + 0x74, (char*)r + 4);
    }
    else
    {
        ((void (__thiscall*)(void*))0x456e80)(self + 0x70);
    }

    if (*(void**)(self + 0x70) == 0)
        goto done;

    {
        Shared* sh = (Shared*)(self + 0x70);
        Shared tmp;
        tmp.control = sh->control;
        tmp.ptr = sh->ptr;
        if (tmp.control)
            _InterlockedExchangeAdd(&tmp.control->strong, 1);

        if (*(unsigned char*)(self + 0x9c) == 0)
        {
            void* mem = sub_6A0920(0x194);
            void* obj = 0;
            if (mem)
                obj = ((void* (__thiscall*)(void*, void*, void*))0x4690f0)(mem, self, *(void**)(self + 0x70));
            void* old84 = *(void**)(self + 0x84);
            *(void**)(self + 0x84) = obj;
            if (old84)
            {
                void** vt = *(void***)((char*)old84 + 0x28);
                ((void (__thiscall*)(void*, int))vt[1])((char*)old84 + 0x28, 1);
            }
        }

        void* p = *(void**)(self + 0x70);
        void* arg = 0;
        if (p)
            arg = ((void* (__thiscall*)(void*))0x4530f0)(p);
        void* r = ((void* (__cdecl*)(void*, void*))0x618a40)(self + 0x10, arg);
        *(void**)(self + 0x78) = *(void**)r;
        ((void (__thiscall*)(void*, void*))0x4025b0)(self + 0x7c, (char*)r + 4);

        void* q = ((void* (__cdecl*)(int))0x412d50)(0);
        ((void (__thiscall*)(void*))0x4492d0)(q);

        if (*(int*)(self + 0x5c) == 2)
            ((void (__thiscall*)(void*))0x45d850)(self);
        else
            ((void (__thiscall*)(void*))0x45b3a0)(self);

        ((void (__thiscall*)(void*, void*))0x5cea00)(*(void**)(self + 0x84), *(void**)(self + 0xb4));

        void** vt = *(void***)(self + 0x54);
        ((void (__thiscall*)(void*, double))vt[1])(self + 0x54, 0.0);

        ((void (__thiscall*)(void*))0x45c890)(self);

        void* e = 0;
        if (*(void**)(self + 0x70))
            e = ((void* (__thiscall*)(void*))0x45de20)(*(void**)(self + 0x70));
        *(void**)((char*)e + 0x130) = *(void**)(self + 0x84);

        void* ebx = 0;
        if (*(void**)(self + 0x70))
            ebx = ((void* (__thiscall*)(void*))0x458610)(*(void**)(self + 0x70));

        void* b0 = *(void**)(self + 0xb0);
        void** bvt = *(void***)b0;
        void* r2 = ((void* (__thiscall*)(void*))bvt[7])(b0);
        void* r3 = ((void* (__cdecl*)(void*, void*))0x45f730)(self + 0x10, r2);
        *(void**)(self + 0x64) = *(void**)r3;
        ((void (__thiscall*)(void*, void*))0x4025b0)(self + 0x68, (char*)r3 + 4);

        String s("Render");
        void* c64 = *(void**)(self + 0x64);
        void** cvt = *(void***)c64;
        ((void (__thiscall*)(void*, void*))cvt[1])(c64, &s);
        sub_802468(&s);

        ((void (__thiscall*)(void*, void*))0x55a8f0)(*(void**)(self + 0x64), ebx);
        ((void (__thiscall*)(void*, void*))0x5ca240)(*(void**)(self + 0x64), *(void**)(self + 0x98));
        ((void (__thiscall*)(void*, void*))0x5557c0)(*(void**)(self + 0x78), self + 0x54);
    }

done:
    {
        void* p = *(void**)(self + 0x20);
        if (p)
            sub_802E18(p, 0, 1);
    }
}
