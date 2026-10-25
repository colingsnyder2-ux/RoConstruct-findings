// from server: 100% by king_originala
// roc 2008-06 00666ac0  unit: RBX::HUMAN::Landed  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666ac0
//
// 00666ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00666ac4  56                   push esi
// 00666ac5  50                   push eax
// 00666ac6  8bf1                 mov esi, ecx
// 00666ac8  e8b3feffff           call 0x666980
// 00666acd  d90584cc8400         fld dword ptr [0x84cc84]
// 00666ad3  d95e0c               fstp dword ptr [esi + 0xc]
// 00666ad6  c70694cc8400         mov dword ptr [esi], 0x84cc94
// 00666adc  c746048ccc8400       mov dword ptr [esi + 4], 0x84cc8c
// 00666ae3  8bc6                 mov eax, esi
// 00666ae5  5e                   pop esi
// 00666ae6  c20400               ret 4

extern const float landedDuration;

struct First
{
    virtual void first();
};

struct Second
{
    virtual void second();
};

struct Base : First, Second
{
    unsigned int state;

    Base(void* owner);
};

struct Duration
{
    float duration;

    Duration();
};

__forceinline Duration::Duration()
    : duration(landedDuration)
{
}

struct Landed : Base, Duration
{
    Landed(void* owner);
    virtual void first();
    virtual void second();
};

Landed::Landed(void* owner)
    : Base(owner), Duration()
{
}
