// from server: 88% by colin
// roc 2007-08 00661d90  unit: PAVCXTPReportRecordItem::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661d90
//
// 00661d90  56                   push esi
// 00661d91  8bf1                 mov esi, ecx
// 00661d93  e8a2650d00           call 0x73833a
// 00661d98  8d4e20               lea ecx, [esi + 0x20]
// 00661d9b  c706948e7c00         mov dword ptr [esi], 0x7c8e94
// 00661da1  e88affffff           call 0x661d30
// 00661da6  33c0                 xor eax, eax
// 00661da8  b901000000           mov ecx, 1
// 00661dad  894638               mov dword ptr [esi + 0x38], eax
// 00661db0  89463c               mov dword ptr [esi + 0x3c], eax
// 00661db3  894640               mov dword ptr [esi + 0x40], eax
// 00661db6  894644               mov dword ptr [esi + 0x44], eax
// 00661db9  894650               mov dword ptr [esi + 0x50], eax
// 00661dbc  894e34               mov dword ptr [esi + 0x34], ecx
// 00661dbf  894e48               mov dword ptr [esi + 0x48], ecx
// 00661dc2  c7464cffffffff       mov dword ptr [esi + 0x4c], 0xffffffff
// 00661dc9  8bc6                 mov eax, esi
// 00661dcb  5e                   pop esi
// 00661dcc  c3                   ret 

struct Sub {
    void init();
};

struct S {
    char pad0[0x20];
    Sub sub;
    char pad0_2[0x10];
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    void base_init();
    S* ctor();
};

extern "C" void __cdecl helper_73833a();

void S::base_init()
{
    helper_73833a();
}

S* S::ctor()
{
    base_init();
    *(int*)this = 0x7c8e94;
    sub.init();
    f38 = 0;
    f3c = 0;
    f40 = 0;
    f44 = 0;
    f50 = 0;
    f34 = 1;
    f48 = 1;
    f4c = -1;
    return this;
}
