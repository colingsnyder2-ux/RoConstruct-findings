// from server: 100% by tester
// roc 2008-06 00443ba0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443ba0
//
// 00443ba0  6aff                 push -1
// 00443ba2  6809e77c00           push 0x7ce709
// 00443ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00443bad  50                   push eax
// 00443bae  64892500000000       mov dword ptr fs:[0], esp
// 00443bb5  83ec1c               sub esp, 0x1c
// 00443bb8  56                   push esi
// 00443bb9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00443bbc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00443bc0  8d442404             lea eax, [esp + 4]
// 00443bc4  50                   push eax
// 00443bc5  e85613ffff           call 0x434f20
// 00443bca  8b16                 mov edx, dword ptr [esi]
// 00443bcc  8b520c               mov edx, dword ptr [edx + 0xc]
// 00443bcf  50                   push eax
// 00443bd0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00443bd4  50                   push eax
// 00443bd5  8bce                 mov ecx, esi
// 00443bd7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00443bdf  ffd2                 call edx
// 00443be1  8d4c2404             lea ecx, [esp + 4]
// 00443be5  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00443bed  ff1568248000         call dword ptr [0x802468]
// 00443bf3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00443bf7  5e                   pop esi
// 00443bf8  64890d00000000       mov dword ptr fs:[0], ecx
// 00443bff  83c428               add esp, 0x28
// 00443c02  c20800               ret 8

extern void (__thiscall *destroy_string)(void *);

struct String {
    char storage[28];
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
