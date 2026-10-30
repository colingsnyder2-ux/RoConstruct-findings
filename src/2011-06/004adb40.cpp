// roc 2011-06 004adb40  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004adb40
//
// 004adb40  51                   push ecx
// 004adb41  8b01                 mov eax, dword ptr [ecx]
// 004adb43  8b5018               mov edx, dword ptr [eax + 0x18]
// 004adb46  56                   push esi
// 004adb47  c744240400000000     mov dword ptr [esp + 4], 0
// 004adb4f  ffd2                 call edx
// 004adb51  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004adb55  68cabea500           push 0xa5beca
// 004adb5a  8bce                 mov ecx, esi
// 004adb5c  ff15c404a400         call dword ptr [0xa404c4]
// 004adb62  8bc6                 mov eax, esi
// 004adb64  5e                   pop esi
// 004adb65  59                   pop ecx
// 004adb66  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEPAUString@2@PAU32@H@Z)

namespace ns_ROCX000006 {
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
}
