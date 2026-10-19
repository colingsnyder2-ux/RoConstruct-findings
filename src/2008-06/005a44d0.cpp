// from server: 82% by colin
// from server: 80% by king_originala
// roc 2008-06 005a44d0  unit: RBX::RootInstance  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a44d0
//
// 005a44d0  6aff                 push -1
// 005a44d2  6868917d00           push 0x7d9168
// 005a44d7  64a100000000         mov eax, dword ptr fs:[0]
// 005a44dd  50                   push eax
// 005a44de  64892500000000       mov dword ptr fs:[0], esp
// 005a44e5  83ec08               sub esp, 8
// 005a44e8  53                   push ebx
// 005a44e9  56                   push esi
// 005a44ea  8bf1                 mov esi, ecx
// 005a44ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a44f0  57                   push edi
// 005a44f1  e8faaafcff           call 0x56eff0
// 005a44f6  83ec20               sub esp, 0x20
// 005a44f9  8bdc                 mov ebx, esp
// 005a44fb  8bf8                 mov edi, eax
// 005a44fd  8964244c             mov dword ptr [esp + 0x4c], esp
// 005a4501  57                   push edi
// 005a4502  8bcb                 mov ecx, ebx
// 005a4504  ff155c248000         call dword ptr [0x80245c]
// 005a450a  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005a450d  89431c               mov dword ptr [ebx + 0x1c], eax
// 005a4510  8b442444             mov eax, dword ptr [esp + 0x44]
// 005a4514  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 005a451a  8d4c242c             lea ecx, [esp + 0x2c]
// 005a451e  51                   push ecx
// 005a451f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005a4522  8b140a               mov edx, dword ptr [edx + ecx]
// 005a4525  03563c               add edx, dword ptr [esi + 0x3c]
// 005a4528  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 005a452f  8b4638               mov eax, dword ptr [esi + 0x38]
// 005a4532  ffd0                 call eax
// 005a4534  8bf0                 mov esi, eax
// 005a4536  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a453e  e80d86fcff           call 0x56cb50
// 005a4543  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a4547  8901                 mov dword ptr [ecx], eax
// 005a4549  56                   push esi
// 005a454a  83c104               add ecx, 4
// 005a454d  e85e71efff           call 0x49b6b0
// 005a4552  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a4556  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005a455e  85c0                 test eax, eax
// 005a4560  742c                 je 0x5a458e
// 005a4562  8bf0                 mov esi, eax
// 005a4564  83c004               add eax, 4
// 005a4567  83c9ff               or ecx, 0xffffffff
// 005a456a  f00fc108             lock xadd dword ptr [eax], ecx
// 005a456e  751e                 jne 0x5a458e
// 005a4570  8b16                 mov edx, dword ptr [esi]
// 005a4572  8b4204               mov eax, dword ptr [edx + 4]
// 005a4575  8bce                 mov ecx, esi
// 005a4577  ffd0                 call eax
// 005a4579  8d4e08               lea ecx, [esi + 8]
// 005a457c  83caff               or edx, 0xffffffff
// 005a457f  f00fc111             lock xadd dword ptr [ecx], edx
// 005a4583  7509                 jne 0x5a458e
// 005a4585  8b06                 mov eax, dword ptr [esi]
// 005a4587  8b5008               mov edx, dword ptr [eax + 8]
// 005a458a  8bce                 mov ecx, esi
// 005a458c  ffd2                 call edx
// 005a458e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a4592  5f                   pop edi
// 005a4593  5e                   pop esi
// 005a4594  64890d00000000       mov dword ptr fs:[0], ecx
// 005a459b  5b                   pop ebx
// 005a459c  83c414               add esp, 0x14
// 005a459f  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct StringData {
    char data[28];
    StringData(const StringData&);
    ~StringData();
};

struct Value {
    StringData text;
    int tag;
};

struct Name {
    __declspec(dllimport) const Value& get() const;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct OutputData {
    void assign(const Shared*);
};

struct Output {
    void* type;
    OutputData value;
};

extern void* __cdecl getType();

typedef Shared* (__thiscall *Getter)(void*, Shared*, Value);

struct S {
    char padding[56];
    Getter getter;
    int adjustment;
    int virtualOffset;

    void f(void*, Output*, const Name*);
};

void S::f(void* object, Output* output, const Name* name)
{
    Shared result;
    Shared* value = getter(
        static_cast<char*>(object) + 0x134 + adjustment +
            *reinterpret_cast<int*>(
                reinterpret_cast<char*>(
                    *reinterpret_cast<int**>(
                        static_cast<char*>(object) + 0x134)) +
                virtualOffset),
        &result, name->get());
    output->type = getType();
    output->value.assign(value);
}
