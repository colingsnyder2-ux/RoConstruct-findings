// roc 2009-06 004bad00  unit: RBX::Network::Player  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bad00
//
// 004bad00  51                   push ecx
// 004bad01  8b01                 mov eax, dword ptr [ecx]
// 004bad03  8b5018               mov edx, dword ptr [eax + 0x18]
// 004bad06  56                   push esi
// 004bad07  c744240400000000     mov dword ptr [esp + 4], 0
// 004bad0f  ffd2                 call edx
// 004bad11  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004bad15  6816d28a00           push 0x8ad216
// 004bad1a  8bce                 mov ecx, esi
// 004bad1c  ff15b4e48900         call dword ptr [0x89e4b4]
// 004bad22  8bc6                 mov eax, esi
// 004bad24  5e                   pop esi
// 004bad25  59                   pop ecx
// 004bad26  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAEPAUString@@PAU2@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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