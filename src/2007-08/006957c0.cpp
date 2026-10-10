// from server: 60% by colin
extern "C" unsigned long __stdcall GetTickCount();
extern "C" int __stdcall KillTimer(void*, unsigned int);
extern "C" unsigned int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

struct Inner
{
    int f1(int);
    int f2(int);
    void f3();
};

struct S
{
    char pad[0x20];
    void* hwnd;
    char pad2[0x4c];
    Inner a;
    char pad3[0x70];
    Inner b;
    char pad4[0x38];
    void* timer;
    unsigned int tick;
    unsigned int interval;
    unsigned int id;
    int f(int*);
};

int S::f(int* p)
{
    if (*(int*)((char*)this + 0x68) == 0)
        return 0;

    unsigned int msg = *(unsigned int*)((char*)p + 4);
    if (!((msg >= 0x200 && msg <= 0x20a) || (msg >= 0xa0 && msg <= 0xa9)))
        return 0;

    int v = ((Inner*)((char*)this + 0xa8))->f1(*(int*)p);
    if (msg == 0x201)
    {
        if (v != 0)
        {
            ((Inner*)((char*)this + 0xa8))->f3();
            v = 0;
        }
    }
    else
    {
        if (v != 0)
        {
            if (((Inner*)((char*)this + 0xa8))->f2(v) != 0)
                v = 0;
        }
    }

    void* t = *(void**)((char*)this + 0x118);
    if (t != 0)
    {
        if (((Inner*)((char*)this + 0xe0))->f2(v) == 0)
        {
            KillTimer(*(void**)((char*)this + 0x20), (unsigned int)t);
            *(void**)((char*)this + 0x118) = 0;
            ((Inner*)((char*)this + 0xe0))->f3();
        }
    }

    if (v != 0)
    {
        if (((Inner*)((char*)this + 0x70))->f2(v) == 0)
        {
            unsigned int now = GetTickCount();
            if (now - *(unsigned int*)((char*)this + 0x11c) >= *(unsigned int*)((char*)this + 0x124))
            {
                if (((Inner*)((char*)this + 0xe0))->f2(v) == 0)
                {
                    ((Inner*)((char*)this + 0xe0))->f3();
                    *(void**)((char*)this + 0x118) = (void*)SetTimer(
                        *(void**)((char*)this + 0x20),
                        *(unsigned int*)((char*)this + 0x120),
                        1,
                        0);
                }
            }
        }
    }
    else
    {
        ((S*)this)->f(0);
    }

    return 0;
}
