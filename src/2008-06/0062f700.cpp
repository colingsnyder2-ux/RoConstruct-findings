// from server: 100% by king_originala
// roc 2008-06 0062f700  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f700
//
// 0062f700  8b442404             mov eax, dword ptr [esp + 4]
// 0062f704  56                   push esi
// 0062f705  50                   push eax
// 0062f706  8bf1                 mov esi, ecx
// 0062f708  e813ecffff           call 0x62e320
// 0062f70d  c706ac6f8400         mov dword ptr [esi], 0x846fac
// 0062f713  c746109c6f8400       mov dword ptr [esi + 0x10], 0x846f9c
// 0062f71a  c74614946f8400       mov dword ptr [esi + 0x14], 0x846f94
// 0062f721  c746208c6f8400       mov dword ptr [esi + 0x20], 0x846f8c
// 0062f728  c746247c6f8400       mov dword ptr [esi + 0x24], 0x846f7c
// 0062f72f  c746446c6f8400       mov dword ptr [esi + 0x44], 0x846f6c
// 0062f736  c746645c6f8400       mov dword ptr [esi + 0x64], 0x846f5c
// 0062f73d  c786840000004c6f8400 mov dword ptr [esi + 0x84], 0x846f4c
// 0062f747  c786a40000003c6f8400 mov dword ptr [esi + 0xa4], 0x846f3c
// 0062f751  c786c40000002c6f8400 mov dword ptr [esi + 0xc4], 0x846f2c
// 0062f75b  c78630010000106f8400 mov dword ptr [esi + 0x130], 0x846f10
// 0062f765  c78638010000046f8400 mov dword ptr [esi + 0x138], 0x846f04
// 0062f76f  8bc6                 mov eax, esi
// 0062f771  5e                   pop esi
// 0062f772  c20400               ret 4

struct S {
    unsigned int words[79];
    void __thiscall initialize(int arg);
    S* __thiscall f(int arg);
};

S* S::f(int arg)
{
    initialize(arg);
    words[0]  = 0x00846fac;
    words[4]  = 0x00846f9c;
    words[5]  = 0x00846f94;
    words[8]  = 0x00846f8c;
    words[9]  = 0x00846f7c;
    words[17] = 0x00846f6c;
    words[25] = 0x00846f5c;
    words[33] = 0x00846f4c;
    words[41] = 0x00846f3c;
    words[49] = 0x00846f2c;
    words[76] = 0x00846f10;
    words[78] = 0x00846f04;
    return this;
}
