// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MarkerItem {
    void sendMarker(int);
};

struct RefCounted {
    void AddRef();
    void Release();
};

extern "C" void __cdecl sub_4AB5D0(int, int);
extern "C" void __cdecl sub_4A61A0(int, int);
extern "C" void* __cdecl sub_49E890();
extern "C" void __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693A0(int, int, const char*, int, int);
extern "C" void* __cdecl sub_4A98B0(int, int);

void MarkerItem::sendMarker(int a2)
{
    sub_4AB5D0(a2, 4);
    sub_4A61A0(a2, *(int*)((char*)this + 8));
    void* p = sub_49E890();
    if (*(char*)((char*)p + 0x131) != 0)
    {
        void* v;
        sub_569620(&v);
        int* obj = *(int**)v;
        int* base = (int*)(*(int*)((char*)this + 4) + 0x2d54);
        void* s = sub_4A98B0((int)base, 1);
        sub_5693A0((int)obj, 1, "Replication: Sending marker %d to %s", *(int*)((char*)this + 8), (int)s);
        if (v != 0)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)v + 4), -1) == 1)
            {
                (*(void(__thiscall**)(void*))v)(v);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)v + 8), -1) == 1)
            {
                (*(void(__thiscall**)(void*))(*(int*)v + 8))(v);
            }
        }
    }
    int* p4 = *(int**)((char*)this + 4);
    int* vt = *(int**)p4;
    void (__thiscall* fn)(int*, int) = (void (__thiscall*)(int*, int))vt[0x4c / 4];
    fn(p4, *(int*)((char*)this + 8));
}
