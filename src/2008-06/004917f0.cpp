// from server: 100% by colin
// roc 2008-06 004917f0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004917f0
//
// 004917f0  6aff                 push -1
// 004917f2  6801657c00           push 0x7c6501
// 004917f7  64a100000000         mov eax, dword ptr fs:[0]
// 004917fd  50                   push eax
// 004917fe  64892500000000       mov dword ptr fs:[0], esp
// 00491805  83ec0c               sub esp, 0xc
// 00491808  56                   push esi
// 00491809  8bf1                 mov esi, ecx
// 0049180b  c744240400000000     mov dword ptr [esp + 4], 0
// 00491813  8b06                 mov eax, dword ptr [esi]
// 00491815  8b4008               mov eax, dword ptr [eax + 8]
// 00491818  50                   push eax
// 00491819  b910709300           mov ecx, 0x937010
// 0049181e  ff1578288000         call dword ptr [0x802878]
// 00491824  84c0                 test al, al
// 00491826  743e                 je 0x491866
// 00491828  83c604               add esi, 4
// 0049182b  56                   push esi
// 0049182c  e85ffeffff           call 0x491690
// 00491831  8b08                 mov ecx, dword ptr [eax]
// 00491833  8b542424             mov edx, dword ptr [esp + 0x24]
// 00491837  890a                 mov dword ptr [edx], ecx
// 00491839  8b4804               mov ecx, dword ptr [eax + 4]
// 0049183c  83c404               add esp, 4
// 0049183f  894a04               mov dword ptr [edx + 4], ecx
// 00491842  85c9                 test ecx, ecx
// 00491844  740c                 je 0x491852
// 00491846  83c104               add ecx, 4
// 00491849  b801000000           mov eax, 1
// 0049184e  f00fc101             lock xadd dword ptr [ecx], eax
// 00491852  8bc2                 mov eax, edx
// 00491854  5e                   pop esi
// 00491855  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00491859  64890d00000000       mov dword ptr fs:[0], ecx
// 00491860  83c418               add esp, 0x18
// 00491863  c20400               ret 4
// 00491866  8b0e                 mov ecx, dword ptr [esi]
// 00491868  894c2408             mov dword ptr [esp + 8], ecx
// 0049186c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049186f  85c9                 test ecx, ecx
// 00491871  7409                 je 0x49187c
// 00491873  8b11                 mov edx, dword ptr [ecx]
// 00491875  8b4208               mov eax, dword ptr [edx + 8]
// 00491878  ffd0                 call eax
// 0049187a  eb02                 jmp 0x49187e
// 0049187c  33c0                 xor eax, eax
// 0049187e  8944240c             mov dword ptr [esp + 0xc], eax
// 00491882  8d4c2408             lea ecx, [esp + 8]
// 00491886  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0049188e  e81ddb0d00           call 0x56f3b0
// 00491893  8b08                 mov ecx, dword ptr [eax]
// 00491895  8b742420             mov esi, dword ptr [esp + 0x20]
// 00491899  890e                 mov dword ptr [esi], ecx
// 0049189b  8b4004               mov eax, dword ptr [eax + 4]
// 0049189e  894604               mov dword ptr [esi + 4], eax
// 004918a1  85c0                 test eax, eax
// 004918a3  740c                 je 0x4918b1
// 004918a5  83c004               add eax, 4
// 004918a8  ba01000000           mov edx, 1
// 004918ad  f00fc110             lock xadd dword ptr [eax], edx
// 004918b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004918b5  c744240401000000     mov dword ptr [esp + 4], 1
// 004918bd  c644241800           mov byte ptr [esp + 0x18], 0
// 004918c2  85c9                 test ecx, ecx
// 004918c4  7408                 je 0x4918ce
// 004918c6  8b01                 mov eax, dword ptr [ecx]
// 004918c8  8b10                 mov edx, dword ptr [eax]
// 004918ca  6a01                 push 1
// 004918cc  ffd2                 call edx
// 004918ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004918d2  8bc6                 mov eax, esi
// 004918d4  5e                   pop esi
// 004918d5  64890d00000000       mov dword ptr fs:[0], ecx
// 004918dc  83c418               add esp, 0x18
// 004918df  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

class type_info;

typedef bool (__thiscall *TypeEqual)(const type_info*, const type_info&);
extern TypeEqual type_equal;
extern type_info shared_type;

struct TypeDescriptor {
    unsigned char padding[8];
    const type_info* type;
};

struct Holder {
    virtual ~Holder();
    virtual void unused();
    virtual Holder* clone() const;
};

struct Control {
    void* table;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        _InterlockedIncrement(&control->references);
    }
}

extern Shared* __cdecl extract_shared(Holder**);

struct Value {
    TypeDescriptor* descriptor;
    Holder* holder;

    Value(const Value&);
    ~Value();
    Shared* converted();
    Shared get();
};

Value::Value(const Value& other)
{
    descriptor = other.descriptor;
    Holder* source = other.holder;
    Holder* copy;
    if (source)
        copy = source->clone();
    else
        copy = 0;
    holder = copy;
}

Value::~Value()
{
    if (holder)
        delete holder;
}

Shared Value::get()
{
    TypeDescriptor* d = descriptor;
    if (type_equal(&shared_type, *d->type))
        return *extract_shared(&holder);

    Value temporary(*this);
    return *temporary.converted();
}
