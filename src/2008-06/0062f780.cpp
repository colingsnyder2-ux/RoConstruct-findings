// from server: 100% by king_originala
// roc 2008-06 0062f780  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f780
//
// 0062f780  8b442404             mov eax, dword ptr [esp + 4]
// 0062f784  56                   push esi
// 0062f785  50                   push eax
// 0062f786  8bf1                 mov esi, ecx
// 0062f788  e893ebffff           call 0x62e320
// 0062f78d  c7069c708400         mov dword ptr [esi], 0x84709c
// 0062f793  c746108c708400       mov dword ptr [esi + 0x10], 0x84708c
// 0062f79a  c7461484708400       mov dword ptr [esi + 0x14], 0x847084
// 0062f7a1  c746207c708400       mov dword ptr [esi + 0x20], 0x84707c
// 0062f7a8  c746246c708400       mov dword ptr [esi + 0x24], 0x84706c
// 0062f7af  c746445c708400       mov dword ptr [esi + 0x44], 0x84705c
// 0062f7b6  c746644c708400       mov dword ptr [esi + 0x64], 0x84704c
// 0062f7bd  c786840000003c708400 mov dword ptr [esi + 0x84], 0x84703c
// 0062f7c7  c786a40000002c708400 mov dword ptr [esi + 0xa4], 0x84702c
// 0062f7d1  c786c40000001c708400 mov dword ptr [esi + 0xc4], 0x84701c
// 0062f7db  c7863001000000708400 mov dword ptr [esi + 0x130], 0x847000
// 0062f7e5  c78638010000f46f8400 mov dword ptr [esi + 0x138], 0x846ff4
// 0062f7ef  8bc6                 mov eax, esi
// 0062f7f1  5e                   pop esi
// 0062f7f2  c20400               ret 4

struct S {
    unsigned int words[79];
    void base(int arg);
    S* f(int arg);
};

S* S::f(int arg)
{
    base(arg);
    words[0] = 0x0084709c;
    words[4] = 0x0084708c;
    words[5] = 0x00847084;
    words[8] = 0x0084707c;
    words[9] = 0x0084706c;
    words[17] = 0x0084705c;
    words[25] = 0x0084704c;
    words[33] = 0x0084703c;
    words[41] = 0x0084702c;
    words[49] = 0x0084701c;
    words[76] = 0x00847000;
    words[78] = 0x00846ff4;
    return this;
}
