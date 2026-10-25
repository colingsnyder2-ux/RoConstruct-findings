// from server: 100% by colin
// roc 2008-06 0062f880  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f880
//
// 0062f880  8b442404             mov eax, dword ptr [esp + 4]
// 0062f884  56                   push esi
// 0062f885  50                   push eax
// 0062f886  8bf1                 mov esi, ecx
// 0062f888  e893eaffff           call 0x62e320
// 0062f88d  c706cc6d8400         mov dword ptr [esi], 0x846dcc
// 0062f893  c74610bc6d8400       mov dword ptr [esi + 0x10], 0x846dbc
// 0062f89a  c74614b46d8400       mov dword ptr [esi + 0x14], 0x846db4
// 0062f8a1  c74620ac6d8400       mov dword ptr [esi + 0x20], 0x846dac
// 0062f8a8  c746249c6d8400       mov dword ptr [esi + 0x24], 0x846d9c
// 0062f8af  c746448c6d8400       mov dword ptr [esi + 0x44], 0x846d8c
// 0062f8b6  c746647c6d8400       mov dword ptr [esi + 0x64], 0x846d7c
// 0062f8bd  c786840000006c6d8400 mov dword ptr [esi + 0x84], 0x846d6c
// 0062f8c7  c786a40000005c6d8400 mov dword ptr [esi + 0xa4], 0x846d5c
// 0062f8d1  c786c40000004c6d8400 mov dword ptr [esi + 0xc4], 0x846d4c
// 0062f8db  c78630010000306d8400 mov dword ptr [esi + 0x130], 0x846d30
// 0062f8e5  c78638010000246d8400 mov dword ptr [esi + 0x138], 0x846d24
// 0062f8ef  8bc6                 mov eax, esi
// 0062f8f1  5e                   pop esi
// 0062f8f2  c20400               ret 4

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
