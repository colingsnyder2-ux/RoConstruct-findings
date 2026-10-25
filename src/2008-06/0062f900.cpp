// from server: 100% by colin
// roc 2008-06 0062f900  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f900
//
// 0062f900  8b442404             mov eax, dword ptr [esp + 4]
// 0062f904  56                   push esi
// 0062f905  50                   push eax
// 0062f906  8bf1                 mov esi, ecx
// 0062f908  e813eaffff           call 0x62e320
// 0062f90d  c706bc6e8400         mov dword ptr [esi], 0x846ebc
// 0062f913  c74610ac6e8400       mov dword ptr [esi + 0x10], 0x846eac
// 0062f91a  c74614a46e8400       mov dword ptr [esi + 0x14], 0x846ea4
// 0062f921  c746209c6e8400       mov dword ptr [esi + 0x20], 0x846e9c
// 0062f928  c746248c6e8400       mov dword ptr [esi + 0x24], 0x846e8c
// 0062f92f  c746447c6e8400       mov dword ptr [esi + 0x44], 0x846e7c
// 0062f936  c746646c6e8400       mov dword ptr [esi + 0x64], 0x846e6c
// 0062f93d  c786840000005c6e8400 mov dword ptr [esi + 0x84], 0x846e5c
// 0062f947  c786a40000004c6e8400 mov dword ptr [esi + 0xa4], 0x846e4c
// 0062f951  c786c40000003c6e8400 mov dword ptr [esi + 0xc4], 0x846e3c
// 0062f95b  c78630010000206e8400 mov dword ptr [esi + 0x130], 0x846e20
// 0062f965  c78638010000146e8400 mov dword ptr [esi + 0x138], 0x846e14
// 0062f96f  8bc6                 mov eax, esi
// 0062f971  5e                   pop esi
// 0062f972  c20400               ret 4

struct S {
    unsigned long data[79];
    void __thiscall initialize(int);
    S* __thiscall f(int);
};

S* S::f(int arg)
{
    initialize(arg);
    data[0] = 0x0084727c;
    data[4] = 0x0084726c;
    data[5] = 0x00847264;
    data[8] = 0x0084725c;
    data[9] = 0x0084724c;
    data[17] = 0x0084723c;
    data[25] = 0x0084722c;
    data[33] = 0x0084721c;
    data[41] = 0x0084720c;
    data[49] = 0x008471fc;
    data[76] = 0x008471e0;
    data[78] = 0x008471d4;
    return this;
}
