// from server: 100% by king_originala
// roc 2008-06 0062f680  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f680
//
// 0062f680  8b442404             mov eax, dword ptr [esp + 4]
// 0062f684  56                   push esi
// 0062f685  50                   push eax
// 0062f686  8bf1                 mov esi, ecx
// 0062f688  e893ecffff           call 0x62e320
// 0062f68d  c706dc6c8400         mov dword ptr [esi], 0x846cdc
// 0062f693  c74610cc6c8400       mov dword ptr [esi + 0x10], 0x846ccc
// 0062f69a  c74614c46c8400       mov dword ptr [esi + 0x14], 0x846cc4
// 0062f6a1  c74620bc6c8400       mov dword ptr [esi + 0x20], 0x846cbc
// 0062f6a8  c74624ac6c8400       mov dword ptr [esi + 0x24], 0x846cac
// 0062f6af  c746449c6c8400       mov dword ptr [esi + 0x44], 0x846c9c
// 0062f6b6  c746648c6c8400       mov dword ptr [esi + 0x64], 0x846c8c
// 0062f6bd  c786840000007c6c8400 mov dword ptr [esi + 0x84], 0x846c7c
// 0062f6c7  c786a40000006c6c8400 mov dword ptr [esi + 0xa4], 0x846c6c
// 0062f6d1  c786c40000005c6c8400 mov dword ptr [esi + 0xc4], 0x846c5c
// 0062f6db  c78630010000406c8400 mov dword ptr [esi + 0x130], 0x846c40
// 0062f6e5  c78638010000346c8400 mov dword ptr [esi + 0x138], 0x846c34
// 0062f6ef  8bc6                 mov eax, esi
// 0062f6f1  5e                   pop esi
// 0062f6f2  c20400               ret 4

struct S {
    unsigned long words[79];
    void base(int arg);
    S* f(int arg);
};

S* S::f(int arg)
{
    base(arg);
    words[0]  = 0x00846cdc;
    words[4]  = 0x00846ccc;
    words[5]  = 0x00846cc4;
    words[8]  = 0x00846cbc;
    words[9]  = 0x00846cac;
    words[17] = 0x00846c9c;
    words[25] = 0x00846c8c;
    words[33] = 0x00846c7c;
    words[41] = 0x00846c6c;
    words[49] = 0x00846c5c;
    words[76] = 0x00846c40;
    words[78] = 0x00846c34;
    return this;
}
