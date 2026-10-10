// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Frame {
    Frame();
};

extern int g_flag;
extern void* g_thing;

void sub_40EFD0(void*);
void sub_541630(void*, void*);
void* sub_54A950(void*);
void sub_725750(void*);
void sub_725770(void*);

Frame::Frame()
{
    void* local8 = 0;
    void* local1c = 0;

    sub_725750((void*)0x8c1c50);

    if (g_flag == 0)
    {
        sub_40EFD0(&local8);

        void* p = sub_54A950(&local1c);
        void* q = *(void**)p;
        sub_541630(local8, q);

        if (local1c)
        {
            RefCounted* r = (RefCounted*)local1c;
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1)
            {
                r->AddRef();
                r->Release();
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1)
            {
                r->Release();
            }
        }

        if (local8)
        {
            RefCounted* r = (RefCounted*)local8;
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1)
            {
                r->AddRef();
                r->Release();
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1)
            {
                r->Release();
            }
        }
    }

    sub_725770((void*)0x8c1c50);
}
