// from server: 100% by tester
// roc 2008-06 005864d0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005864d0
//
// 005864d0  6aff                 push -1
// 005864d2  68e88e7d00           push 0x7d8ee8
// 005864d7  64a100000000         mov eax, dword ptr fs:[0]
// 005864dd  50                   push eax
// 005864de  64892500000000       mov dword ptr fs:[0], esp
// 005864e5  83ec20               sub esp, 0x20
// 005864e8  56                   push esi
// 005864e9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005864ec  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005864f0  8d442404             lea eax, [esp + 4]
// 005864f4  50                   push eax
// 005864f5  e8e6feffff           call 0x5863e0
// 005864fa  8b16                 mov edx, dword ptr [esi]
// 005864fc  8b520c               mov edx, dword ptr [edx + 0xc]
// 005864ff  50                   push eax
// 00586500  8b442438             mov eax, dword ptr [esp + 0x38]
// 00586504  50                   push eax
// 00586505  8bce                 mov ecx, esi
// 00586507  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0058650f  ffd2                 call edx
// 00586511  8d4c2404             lea ecx, [esp + 4]
// 00586515  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0058651d  ff1568248000         call dword ptr [0x802468]
// 00586523  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00586527  5e                   pop esi
// 00586528  64890d00000000       mov dword ptr fs:[0], ecx
// 0058652f  83c42c               add esp, 0x2c
// 00586532  c20800               ret 8

extern void (__thiscall *destroy_string)(void *);

struct String {
    char storage[32];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct Value {
    String toString() const;
};

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void *, const String &);
};

struct Descriptor {
    char padding[24];
    Accessor *accessor;
    void set(void *, const Value &) const;
};

void Descriptor::set(void *object, const Value &value) const
{
    Accessor *a = accessor;
    a->set(object, value.toString());
}
