// from server: 100% by king_originala
// roc 2008-06 004b60c0  unit: RBX::VPartInstance::?$SignalDesc  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b60c0
//
// 004b60c0  6aff                 push -1
// 004b60c2  68c12f7c00           push 0x7c2fc1
// 004b60c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b60cd  50                   push eax
// 004b60ce  64892500000000       mov dword ptr fs:[0], esp
// 004b60d5  83ec2c               sub esp, 0x2c
// 004b60d8  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b60dc  53                   push ebx
// 004b60dd  55                   push ebp
// 004b60de  56                   push esi
// 004b60df  57                   push edi
// 004b60e0  8bd9                 mov ebx, ecx
// 004b60e2  50                   push eax
// 004b60e3  8d4c241c             lea ecx, [esp + 0x1c]
// 004b60e7  51                   push ecx
// 004b60e8  e8b3fbffff           call 0x4b5ca0
// 004b60ed  8b7004               mov esi, dword ptr [eax + 4]
// 004b60f0  8b38                 mov edi, dword ptr [eax]
// 004b60f2  83c408               add esp, 8
// 004b60f5  897c2410             mov dword ptr [esp + 0x10], edi
// 004b60f9  89742414             mov dword ptr [esp + 0x14], esi
// 004b60fd  85f6                 test esi, esi
// 004b60ff  740c                 je 0x4b610d
// 004b6101  8d5604               lea edx, [esi + 4]
// 004b6104  b801000000           mov eax, 1
// 004b6109  f00fc102             lock xadd dword ptr [edx], eax
// 004b610d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004b6111  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004b6119  85ed                 test ebp, ebp
// 004b611b  742c                 je 0x4b6149
// 004b611d  8d4d04               lea ecx, [ebp + 4]
// 004b6120  83caff               or edx, 0xffffffff
// 004b6123  f00fc111             lock xadd dword ptr [ecx], edx
// 004b6127  7520                 jne 0x4b6149
// 004b6129  8b4500               mov eax, dword ptr [ebp]
// 004b612c  8b5004               mov edx, dword ptr [eax + 4]
// 004b612f  8bcd                 mov ecx, ebp
// 004b6131  ffd2                 call edx
// 004b6133  8d4508               lea eax, [ebp + 8]
// 004b6136  83c9ff               or ecx, 0xffffffff
// 004b6139  f00fc108             lock xadd dword ptr [eax], ecx
// 004b613d  750a                 jne 0x4b6149
// 004b613f  8b5500               mov edx, dword ptr [ebp]
// 004b6142  8b4208               mov eax, dword ptr [edx + 8]
// 004b6145  8bcd                 mov ecx, ebp
// 004b6147  ffd0                 call eax
// 004b6149  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004b614d  51                   push ecx
// 004b614e  8d4c2424             lea ecx, [esp + 0x24]
// 004b6152  ff1558248000         call dword ptr [0x802458]
// 004b6158  8b17                 mov edx, dword ptr [edi]
// 004b615a  8b5204               mov edx, dword ptr [edx + 4]
// 004b615d  8d442420             lea eax, [esp + 0x20]
// 004b6161  50                   push eax
// 004b6162  8bcf                 mov ecx, edi
// 004b6164  c644244801           mov byte ptr [esp + 0x48], 1
// 004b6169  ffd2                 call edx
// 004b616b  8d4c2420             lea ecx, [esp + 0x20]
// 004b616f  c644244400           mov byte ptr [esp + 0x44], 0
// 004b6174  ff1568248000         call dword ptr [0x802468]
// 004b617a  53                   push ebx
// 004b617b  8bcf                 mov ecx, edi
// 004b617d  e86e470a00           call 0x55a8f0
// 004b6182  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004b618a  85f6                 test esi, esi
// 004b618c  742a                 je 0x4b61b8
// 004b618e  8d4604               lea eax, [esi + 4]
// 004b6191  83c9ff               or ecx, 0xffffffff
// 004b6194  f00fc108             lock xadd dword ptr [eax], ecx
// 004b6198  751e                 jne 0x4b61b8
// 004b619a  8b16                 mov edx, dword ptr [esi]
// 004b619c  8b4204               mov eax, dword ptr [edx + 4]
// 004b619f  8bce                 mov ecx, esi
// 004b61a1  ffd0                 call eax
// 004b61a3  8d4e08               lea ecx, [esi + 8]
// 004b61a6  83caff               or edx, 0xffffffff
// 004b61a9  f00fc111             lock xadd dword ptr [ecx], edx
// 004b61ad  7509                 jne 0x4b61b8
// 004b61af  8b06                 mov eax, dword ptr [esi]
// 004b61b1  8b5008               mov edx, dword ptr [eax + 8]
// 004b61b4  8bce                 mov ecx, esi
// 004b61b6  ffd2                 call edx
// 004b61b8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004b61bc  8bc7                 mov eax, edi
// 004b61be  5f                   pop edi
// 004b61bf  5e                   pop esi
// 004b61c0  5d                   pop ebp
// 004b61c1  5b                   pop ebx
// 004b61c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004b61c9  83c438               add esp, 0x38
// 004b61cc  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Text;
extern void (__thiscall *textConstruct)(Text*, const char*);
extern void (__thiscall *textDestroy)(Text*);

struct Text {
    unsigned char storage[28];
    Text(const char*);
    ~Text();
};

inline Text::Text(const char* s) {
    textConstruct(this, s);
}

inline Text::~Text() {
    textDestroy(this);
}

struct Owner;

struct Object {
    virtual void reserved() = 0;
    virtual void setText(const Text&) = 0;
    void attach(Owner*);
};

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&, int);
    ~Shared();
};

inline Shared::Shared(const Shared& other, int)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

extern Shared __cdecl obtain(void*);

struct Owner {
    Object* create(const char*, void*);
};

Object* Owner::create(const char* name, void* argument) {
    Shared value(obtain(argument), 0);
    {
        Text text(name);
        value.object->setText(text);
    }
    value.object->attach(this);
    return value.object;
}
