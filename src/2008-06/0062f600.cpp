// from server: 100% by king_originala
// roc 2008-06 0062f600  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f600
//
// 0062f600  8b442404             mov eax, dword ptr [esp + 4]
// 0062f604  56                   push esi
// 0062f605  50                   push eax
// 0062f606  8bf1                 mov esi, ecx
// 0062f608  e813edffff           call 0x62e320
// 0062f60d  c7067c728400         mov dword ptr [esi], 0x84727c
// 0062f613  c746106c728400       mov dword ptr [esi + 0x10], 0x84726c
// 0062f61a  c7461464728400       mov dword ptr [esi + 0x14], 0x847264
// 0062f621  c746205c728400       mov dword ptr [esi + 0x20], 0x84725c
// 0062f628  c746244c728400       mov dword ptr [esi + 0x24], 0x84724c
// 0062f62f  c746443c728400       mov dword ptr [esi + 0x44], 0x84723c
// 0062f636  c746642c728400       mov dword ptr [esi + 0x64], 0x84722c
// 0062f63d  c786840000001c728400 mov dword ptr [esi + 0x84], 0x84721c
// 0062f647  c786a40000000c728400 mov dword ptr [esi + 0xa4], 0x84720c
// 0062f651  c786c4000000fc718400 mov dword ptr [esi + 0xc4], 0x8471fc
// 0062f65b  c78630010000e0718400 mov dword ptr [esi + 0x130], 0x8471e0
// 0062f665  c78638010000d4718400 mov dword ptr [esi + 0x138], 0x8471d4
// 0062f66f  8bc6                 mov eax, esi
// 0062f671  5e                   pop esi
// 0062f672  c20400               ret 4

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
