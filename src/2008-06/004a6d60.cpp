// from server: 100% by king_originala
// roc 2008-06 004a6d60  unit: RBX::VHint::?$FactoryProduct::Creator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6d60
//
// 004a6d60  6aff                 push -1
// 004a6d62  6809e77c00           push 0x7ce709
// 004a6d67  64a100000000         mov eax, dword ptr fs:[0]
// 004a6d6d  50                   push eax
// 004a6d6e  64892500000000       mov dword ptr fs:[0], esp
// 004a6d75  83ec1c               sub esp, 0x1c
// 004a6d78  8d0c24               lea ecx, [esp]
// 004a6d7b  ff1560248000         call dword ptr [0x802460]
// 004a6d81  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a6d85  8d0424               lea eax, [esp]
// 004a6d88  50                   push eax
// 004a6d89  51                   push ecx
// 004a6d8a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004a6d92  e879f8ffff           call 0x4a6610
// 004a6d97  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004a6d9b  8b4104               mov eax, dword ptr [ecx + 4]
// 004a6d9e  83c408               add esp, 8
// 004a6da1  85c0                 test eax, eax
// 004a6da3  7411                 je 0x4a6db6
// 004a6da5  8b09                 mov ecx, dword ptr [ecx]
// 004a6da7  8b11                 mov edx, dword ptr [ecx]
// 004a6da9  56                   push esi
// 004a6daa  8d742404             lea esi, [esp + 4]
// 004a6dae  56                   push esi
// 004a6daf  50                   push eax
// 004a6db0  8b4220               mov eax, dword ptr [edx + 0x20]
// 004a6db3  ffd0                 call eax
// 004a6db5  5e                   pop esi
// 004a6db6  8d0c24               lea ecx, [esp]
// 004a6db9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004a6dc1  ff1568248000         call dword ptr [0x802468]
// 004a6dc7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a6dcb  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6dd2  83c428               add esp, 0x28
// 004a6dd5  c3                   ret 

struct String;
extern String* (__thiscall* stringDefaultConstruct)(String*);
extern void (__thiscall* stringDestroy)(String*);

struct String {
    char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringDefaultConstruct(this);
}

inline String::~String()
{
    stringDestroy(this);
}

extern void __cdecl makeString(const char*, String*);

struct Receiver {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual void slot7() = 0;
    virtual void notify(int, const String&) = 0;
};

struct Context {
    Receiver* receiver;
    int value;
};

void __cdecl create(Context* context, const char* text)
{
    String string;
    makeString(text, &string);
    if (context->value)
        context->receiver->notify(context->value, string);
}
