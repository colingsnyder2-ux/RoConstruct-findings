// from server: 100% by king_originala
// roc 2008-06 004ae860  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae860
//
// 004ae860  6aff                 push -1
// 004ae862  68a9677c00           push 0x7c67a9
// 004ae867  64a100000000         mov eax, dword ptr fs:[0]
// 004ae86d  50                   push eax
// 004ae86e  64892500000000       mov dword ptr fs:[0], esp
// 004ae875  83ec0c               sub esp, 0xc
// 004ae878  c7042400000000       mov dword ptr [esp], 0
// 004ae87f  8b01                 mov eax, dword ptr [ecx]
// 004ae881  8b5044               mov edx, dword ptr [eax + 0x44]
// 004ae884  56                   push esi
// 004ae885  57                   push edi
// 004ae886  ffd2                 call edx
// 004ae888  50                   push eax
// 004ae889  8d442410             lea eax, [esp + 0x10]
// 004ae88d  50                   push eax
// 004ae88e  e8ada11600           call 0x618a40
// 004ae893  8b08                 mov ecx, dword ptr [eax]
// 004ae895  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004ae899  890f                 mov dword ptr [edi], ecx
// 004ae89b  8b4004               mov eax, dword ptr [eax + 4]
// 004ae89e  83c408               add esp, 8
// 004ae8a1  894704               mov dword ptr [edi + 4], eax
// 004ae8a4  85c0                 test eax, eax
// 004ae8a6  740c                 je 0x4ae8b4
// 004ae8a8  83c004               add eax, 4
// 004ae8ab  ba01000000           mov edx, 1
// 004ae8b0  f00fc110             lock xadd dword ptr [eax], edx
// 004ae8b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ae8b8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ae8c0  c744240801000000     mov dword ptr [esp + 8], 1
// 004ae8c8  85f6                 test esi, esi
// 004ae8ca  742a                 je 0x4ae8f6
// 004ae8cc  8d4604               lea eax, [esi + 4]
// 004ae8cf  83c9ff               or ecx, 0xffffffff
// 004ae8d2  f00fc108             lock xadd dword ptr [eax], ecx
// 004ae8d6  751e                 jne 0x4ae8f6
// 004ae8d8  8b16                 mov edx, dword ptr [esi]
// 004ae8da  8b4204               mov eax, dword ptr [edx + 4]
// 004ae8dd  8bce                 mov ecx, esi
// 004ae8df  ffd0                 call eax
// 004ae8e1  8d4e08               lea ecx, [esi + 8]
// 004ae8e4  83caff               or edx, 0xffffffff
// 004ae8e7  f00fc111             lock xadd dword ptr [ecx], edx
// 004ae8eb  7509                 jne 0x4ae8f6
// 004ae8ed  8b06                 mov eax, dword ptr [esi]
// 004ae8ef  8b5008               mov edx, dword ptr [eax + 8]
// 004ae8f2  8bce                 mov ecx, esi
// 004ae8f4  ffd2                 call edx
// 004ae8f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ae8fa  8bc7                 mov eax, edi
// 004ae8fc  5f                   pop edi
// 004ae8fd  5e                   pop esi
// 004ae8fe  64890d00000000       mov dword ptr fs:[0], ecx
// 004ae905  83c418               add esp, 0x18
// 004ae908  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void weakRelease();
};

inline void Control::weakRelease()
{
    if (_InterlockedDecrement(&weak) == 0)
        destroy();
}

struct Temporary {
    void* pointer;
    Control* control;
    ~Temporary();
};

struct Result {
    void* pointer;
    Control* control;
    Result(const Temporary&);
    ~Result();
};

inline Temporary::~Temporary()
{
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        if (_InterlockedDecrement(count) == 0) {
            p->dispose();
            p->weakRelease();
        }
    }
}

inline Result::Result(const Temporary& value)
    : pointer(value.pointer), control(value.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Result::~Result()
{
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        if (_InterlockedDecrement(count) == 0) {
            p->dispose();
            p->weakRelease();
        }
    }
}

struct S;

struct VTable {
    void* preceding[17];
    void* (__thiscall *get)(S*);
};

struct S {
    VTable* table;
    Result f();
};

extern Temporary __cdecl makeTemporary(void*);

Result S::f()
{
    return Result(makeTemporary(table->get(this)));
}
