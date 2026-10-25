// from server: 100% by king_originala
// roc 2008-06 00643550  unit: RBX::HUMAN::Landed  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643550
//
// 00643550  8b442404             mov eax, dword ptr [esp + 4]
// 00643554  56                   push esi
// 00643555  50                   push eax
// 00643556  8bf1                 mov esi, ecx
// 00643558  e823340200           call 0x666980
// 0064355d  d905c0ac8400         fld dword ptr [0x84acc0]
// 00643563  d95e0c               fstp dword ptr [esi + 0xc]
// 00643566  c7069cac8400         mov dword ptr [esi], 0x84ac9c
// 0064356c  c7460494ac8400       mov dword ptr [esi + 4], 0x84ac94
// 00643573  8bc6                 mov eax, esi
// 00643575  5e                   pop esi
// 00643576  c20400               ret 4

extern const float initialValue;
extern void* primaryTable[];
extern void* secondaryTable[];

struct Base
{
    void* primary;
    void* secondary;
    int field8;
    float fieldC;

    Base(void* argument);
};

struct S : Base
{
    S(void* argument);
};

S::S(void* argument)
    : Base(argument)
{
    fieldC = initialValue;
    primary = primaryTable;
    secondary = secondaryTable;
}
