// from server: 90% by colin
// from server: 89% by colin
// roc 2008-06 00557150  unit: RBX::VRunService::?$BoundFuncDesc  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557150
//
// 00557150  83ec08               sub esp, 8
// 00557153  56                   push esi
// 00557154  8bf1                 mov esi, ecx
// 00557156  e845e8ffff           call 0x5559a0
// 0055715b  dd86b8010000         fld qword ptr [esi + 0x1b8]
// 00557161  d95c2404             fstp dword ptr [esp + 4]
// 00557165  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00557169  d9442410             fld dword ptr [esp + 0x10]
// 0055716d  d95c2408             fstp dword ptr [esp + 8]
// 00557171  8b442408             mov eax, dword ptr [esp + 8]
// 00557175  50                   push eax
// 00557176  51                   push ecx
// 00557177  8d8e30010000         lea ecx, [esi + 0x130]
// 0055717d  e8ded7ffff           call 0x554960
// 00557182  8d4614               lea eax, [esi + 0x14]
// 00557185  50                   push eax
// 00557186  b9403b9700           mov ecx, 0x973b40
// 0055718b  e890440100           call 0x56b620
// 00557190  5e                   pop esi
// 00557191  85c0                 test eax, eax
// 00557193  7415                 je 0x5571aa
// 00557195  d944240c             fld dword ptr [esp + 0xc]
// 00557199  51                   push ecx
// 0055719a  8d542410             lea edx, [esp + 0x10]
// 0055719e  d91c24               fstp dword ptr [esp]
// 005571a1  52                   push edx
// 005571a2  8d4810               lea ecx, [eax + 0x10]
// 005571a5  e846c6f3ff           call 0x4937f0
// 005571aa  83c408               add esp, 8
// 005571ad  c20400               ret 4
#include <intrin.h>

struct Signal {
    void sub_554960(int, int);
};

struct Listener {
    void sub_4937f0(const float*, float);
};

struct Result {
    char pad[0x10];
    Listener listener;
};

struct Registry {
    Result* sub_56b620(const void*);
};

struct RunService {
    char pad[0x1b8];
    double field1b8;

    void sub_5559a0();
    void func(int);
};

void RunService::func(int arg)
{
    sub_5559a0();

    float f1 = (float)field1b8;
    float f2 = *(float*)&arg;
    _ReadWriteBarrier();

    reinterpret_cast<Signal*>(pad + 0x130)->sub_554960(
        *(int*)&f1, *(int*)&f2);

    Result* r = reinterpret_cast<Registry*>(0x973b40)->sub_56b620(
        pad + 0x14);

    if (r != 0)
        r->listener.sub_4937f0((float*)&arg, *(float*)&arg);
}
