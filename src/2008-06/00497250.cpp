// from server: 100% by king_originala
// roc 2008-06 00497250  unit: RBX::Network::Players  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497250
//
// 00497250  6aff                 push -1
// 00497252  68986c7c00           push 0x7c6c98
// 00497257  64a100000000         mov eax, dword ptr fs:[0]
// 0049725d  50                   push eax
// 0049725e  64892500000000       mov dword ptr fs:[0], esp
// 00497265  83ec08               sub esp, 8
// 00497268  56                   push esi
// 00497269  8bf1                 mov esi, ecx
// 0049726b  57                   push edi
// 0049726c  89742408             mov dword ptr [esp + 8], esi
// 00497270  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00497274  83ec08               sub esp, 8
// 00497277  8bc4                 mov eax, esp
// 00497279  8908                 mov dword ptr [eax], ecx
// 0049727b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049727f  895004               mov dword ptr [eax + 4], edx
// 00497282  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00497286  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0049728e  89642414             mov dword ptr [esp + 0x14], esp
// 00497292  85c0                 test eax, eax
// 00497294  740c                 je 0x4972a2
// 00497296  83c004               add eax, 4
// 00497299  b901000000           mov ecx, 1
// 0049729e  f00fc108             lock xadd dword ptr [eax], ecx
// 004972a2  8bce                 mov ecx, esi
// 004972a4  e867d50b00           call 0x554810
// 004972a9  8d542428             lea edx, [esp + 0x28]
// 004972ad  8d4e08               lea ecx, [esi + 8]
// 004972b0  52                   push edx
// 004972b1  c644241c02           mov byte ptr [esp + 0x1c], 2
// 004972b6  ff155c248000         call dword ptr [0x80245c]
// 004972bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004972c0  c644241800           mov byte ptr [esp + 0x18], 0
// 004972c5  85ff                 test edi, edi
// 004972c7  742a                 je 0x4972f3
// 004972c9  8d4704               lea eax, [edi + 4]
// 004972cc  83c9ff               or ecx, 0xffffffff
// 004972cf  f00fc108             lock xadd dword ptr [eax], ecx
// 004972d3  751e                 jne 0x4972f3
// 004972d5  8b17                 mov edx, dword ptr [edi]
// 004972d7  8b4204               mov eax, dword ptr [edx + 4]
// 004972da  8bcf                 mov ecx, edi
// 004972dc  ffd0                 call eax
// 004972de  8d4f08               lea ecx, [edi + 8]
// 004972e1  83caff               or edx, 0xffffffff
// 004972e4  f00fc111             lock xadd dword ptr [ecx], edx
// 004972e8  7509                 jne 0x4972f3
// 004972ea  8b07                 mov eax, dword ptr [edi]
// 004972ec  8b5008               mov edx, dword ptr [eax + 8]
// 004972ef  8bcf                 mov ecx, edi
// 004972f1  ffd2                 call edx
// 004972f3  8d4c2428             lea ecx, [esp + 0x28]
// 004972f7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004972ff  ff1568248000         call dword ptr [0x802468]
// 00497305  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00497309  5f                   pop edi
// 0049730a  8bc6                 mov eax, esi
// 0049730c  64890d00000000       mov dword ptr fs:[0], ecx
// 00497313  5e                   pop esi
// 00497314  83c414               add esp, 0x14
// 00497317  c22400               ret 0x24

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void Control::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared() {
    if (control)
        control->release();
}

struct String;
extern String* (__thiscall* string_copy)(String*, const String*);
extern void (__thiscall* string_destroy)(String*);

struct String {
    unsigned long storage[7];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other) {
    string_copy(this, &other);
}

__forceinline String::~String() {
    string_destroy(this);
}

struct Base {
    unsigned long storage[2];
    Base(Shared value);
    ~Base();
};

struct S : Base {
    String name;
    S(Shared value, String text);
};

S::S(Shared value, String text)
    : Base(value), name(text) {
}
