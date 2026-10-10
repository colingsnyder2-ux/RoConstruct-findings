// from server: 27% by colin
extern "C" {
__declspec(dllimport) long __stdcall InterlockedDecrement(long volatile *);
}

struct RefCounted {
    void Release();
};

struct Base {
    int field0;
    void construct(int a, int b);
};

struct Target {
    int field0;
    void init(Base *p, int x);
};

extern "C" void __cdecl sub_474F70();
extern "C" void __cdecl sub_486480();
extern "C" void __cdecl sub_457DD0();

void Target::init(Base *p, int x)
{
    field0 = 0;
    int *tmp = &field0;
    sub_474F70();
    sub_486480();
    if (p != 0) {
        if (InterlockedDecrement((long *)((char *)p + 4)) == 0) {
            sub_457DD0();
            (*(void (__stdcall **)(int))*(int *)p)(1);
        }
    }
}
