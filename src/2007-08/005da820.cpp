// from server: 49% by colin
// roc 2007-08 005da820  unit: RBX::MotorFeature  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005da820
//
// 005da820  83ec30               sub esp, 0x30
// 005da823  56                   push esi
// 005da824  8bf1                 mov esi, ecx
// 005da826  8d4c2404             lea ecx, [esp + 4]
// 005da82a  e821a8e9ff           call 0x475050
// 005da82f  8d442404             lea eax, [esp + 4]
// 005da833  50                   push eax
// 005da834  8d8e18ffffff         lea ecx, [esi - 0xe8]
// 005da83a  e891feffff           call 0x5da6d0
// 005da83f  84c0                 test al, al
// 005da841  5e                   pop esi
// 005da842  742c                 je 0x5da870
// 005da844  e8d708f3ff           call 0x50b120
// 005da849  d90558f77900         fld dword ptr [0x79f758]
// 005da84f  8b542434             mov edx, dword ptr [esp + 0x34]
// 005da853  50                   push eax
// 005da854  83ec08               sub esp, 8
// 005da857  d95c2404             fstp dword ptr [esp + 4]
// 005da85b  8d4c240c             lea ecx, [esp + 0xc]
// 005da85f  d9e8                 fld1 
// 005da861  d91c24               fstp dword ptr [esp]
// 005da864  6a02                 push 2
// 005da866  51                   push ecx
// 005da867  52                   push edx
// 005da868  e8333f0500           call 0x62e7a0
// 005da86d  83c418               add esp, 0x18
// 005da870  83c430               add esp, 0x30
// 005da873  c20400               ret 4

struct Sub_475050 {
    char pad[0x30];
};

struct Sub_5da6d0 {
    char pad[0x100];
};

struct S_5da820 {
    char pad0[0xe8];
    char m_e8;
    int f(char* arg);
};

extern "C" void __stdcall sub_475050(Sub_475050* p);
extern "C" int __stdcall sub_50b120();
extern "C" int __stdcall sub_5da6d0(Sub_5da6d0* p, void* q);
extern "C" void __stdcall sub_62e7a0(int a, void* b, int c, float d, float e, void* f);
extern float g_79f758;

int S_5da820::f(char* arg)
{
    Sub_475050 local;
    sub_475050(&local);
    if (sub_5da6d0((Sub_5da6d0*)((char*)this - 0xe8), &local)) {
        int r = sub_50b120();
        float v = g_79f758;
        float one = 1.0f;
        sub_62e7a0(*(int*)(arg + 0x34), &local, 2, one, v, (void*)r);
    }
    return 0;
}
