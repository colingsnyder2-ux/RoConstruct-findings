// from server: 100% by king_originala
// roc 2008-06 00597f30  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597f30
//
// 00597f30  6aff                 push -1
// 00597f32  68e88e7d00           push 0x7d8ee8
// 00597f37  64a100000000         mov eax, dword ptr fs:[0]
// 00597f3d  50                   push eax
// 00597f3e  64892500000000       mov dword ptr fs:[0], esp
// 00597f45  83ec20               sub esp, 0x20
// 00597f48  56                   push esi
// 00597f49  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00597f4c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00597f50  8d442404             lea eax, [esp + 4]
// 00597f54  50                   push eax
// 00597f55  e8e6feffff           call 0x597e40
// 00597f5a  8b16                 mov edx, dword ptr [esi]
// 00597f5c  8b520c               mov edx, dword ptr [edx + 0xc]
// 00597f5f  50                   push eax
// 00597f60  8b442438             mov eax, dword ptr [esp + 0x38]
// 00597f64  50                   push eax
// 00597f65  8bce                 mov ecx, esi
// 00597f67  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00597f6f  ffd2                 call edx
// 00597f71  8d4c2404             lea ecx, [esp + 4]
// 00597f75  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00597f7d  ff1568248000         call dword ptr [0x802468]
// 00597f83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00597f87  5e                   pop esi
// 00597f88  64890d00000000       mov dword ptr fs:[0], ecx
// 00597f8f  83c42c               add esp, 0x2c
// 00597f92  c20800               ret 8

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
