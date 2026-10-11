// from server: 20% by tester
struct SoundService {
    char pad[8];
    void* __cdecl f(int a, int b);
};

extern "C" void* __stdcall sub_5bdef0(int a, int b);
extern "C" void* __stdcall sub_802448();
extern "C" void* __stdcall sub_802450();
extern "C" void* __stdcall sub_802468();

void* SoundService::f(int a, int b)
{
    void* self = (void*)a;
    short* p = (short*)b;
    int v1 = p[0];
    int v2 = p[1];
    sub_5bdef0(v1, (int)&v1);
    sub_802448();
    sub_5bdef0(v2, (int)&v2);
    sub_802450();
    sub_802468();
    return self;
}
