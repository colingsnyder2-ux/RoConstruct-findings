// from server: 100% by king_originala
// roc 2008-06 00491480  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491480
//
// 00491480  51                   push ecx
// 00491481  8b01                 mov eax, dword ptr [ecx]
// 00491483  8b5018               mov edx, dword ptr [eax + 0x18]
// 00491486  56                   push esi
// 00491487  c744240400000000     mov dword ptr [esp + 4], 0
// 0049148f  ffd2                 call edx
// 00491491  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00491495  6816b78000           push 0x80b716
// 0049149a  8bce                 mov ecx, esi
// 0049149c  ff1558248000         call dword ptr [0x802458]
// 004914a2  8bc6                 mov eax, esi
// 004914a4  5e                   pop esi
// 004914a5  59                   pop ecx
// 004914a6  c20800               ret 8

struct String {
    char storage[28];
};

typedef void (__thiscall *StringConstructor)(String *, const char *);
extern StringConstructor constructString;
extern const char authoring[];

struct S {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();

    String *f(String *result, int unused);
};

String *S::f(String *result, int unused)
{
    volatile int local = 0;
    slot6();
    constructString(result, authoring);
    return result;
}
