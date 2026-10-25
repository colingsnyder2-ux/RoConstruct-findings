// from server: 100% by tester
// roc 2008-06 005b9d90  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b9d90
//
// 005b9d90  6aff                 push -1
// 005b9d92  68e88e7d00           push 0x7d8ee8
// 005b9d97  64a100000000         mov eax, dword ptr fs:[0]
// 005b9d9d  50                   push eax
// 005b9d9e  64892500000000       mov dword ptr fs:[0], esp
// 005b9da5  83ec20               sub esp, 0x20
// 005b9da8  56                   push esi
// 005b9da9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005b9dac  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005b9db0  8d442404             lea eax, [esp + 4]
// 005b9db4  50                   push eax
// 005b9db5  e8f6e8ffff           call 0x5b86b0
// 005b9dba  8b16                 mov edx, dword ptr [esi]
// 005b9dbc  8b520c               mov edx, dword ptr [edx + 0xc]
// 005b9dbf  50                   push eax
// 005b9dc0  8b442438             mov eax, dword ptr [esp + 0x38]
// 005b9dc4  50                   push eax
// 005b9dc5  8bce                 mov ecx, esi
// 005b9dc7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005b9dcf  ffd2                 call edx
// 005b9dd1  8d4c2404             lea ecx, [esp + 4]
// 005b9dd5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005b9ddd  ff1568248000         call dword ptr [0x802468]
// 005b9de3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b9de7  5e                   pop esi
// 005b9de8  64890d00000000       mov dword ptr fs:[0], ecx
// 005b9def  83c42c               add esp, 0x2c
// 005b9df2  c20800               ret 8

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
