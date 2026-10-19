// from server: 84% by colin
// from server: 75% by king_originala
// roc 2008-06 00423510  unit: CSelectionTreeCtrl  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423510
//
// 00423510  6aff                 push -1
// 00423512  64a100000000         mov eax, dword ptr fs:[0]
// 00423518  68e8e97b00           push 0x7be9e8
// 0042351d  50                   push eax
// 0042351e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00423522  64892500000000       mov dword ptr fs:[0], esp
// 00423529  83ec1c               sub esp, 0x1c
// 0042352c  53                   push ebx
// 0042352d  55                   push ebp
// 0042352e  56                   push esi
// 0042352f  33db                 xor ebx, ebx
// 00423531  57                   push edi
// 00423532  8bf9                 mov edi, ecx
// 00423534  3bc3                 cmp eax, ebx
// 00423536  0f8571010000         jne 0x4236ad
// 0042353c  8b442440             mov eax, dword ptr [esp + 0x40]
// 00423540  8d77ac               lea esi, [edi - 0x54]
// 00423543  50                   push eax
// 00423544  8bce                 mov ecx, esi
// 00423546  e80bda2700           call 0x6a0f56
// 0042354b  33ed                 xor ebp, ebp
// 0042354d  895c2410             mov dword ptr [esp + 0x10], ebx
// 00423551  896c2414             mov dword ptr [esp + 0x14], ebp
// 00423555  895c2434             mov dword ptr [esp + 0x34], ebx
// 00423559  3bc3                 cmp eax, ebx
// 0042355b  7418                 je 0x423575
// 0042355d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00423560  83c010               add eax, 0x10
// 00423563  894c2410             mov dword ptr [esp + 0x10], ecx
// 00423567  50                   push eax
// 00423568  8d4c2418             lea ecx, [esp + 0x18]
// 0042356c  e83ff0fdff           call 0x4025b0
// 00423571  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00423575  8b16                 mov edx, dword ptr [esi]
// 00423577  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0042357d  8d442418             lea eax, [esp + 0x18]
// 00423581  50                   push eax
// 00423582  8bce                 mov ecx, esi
// 00423584  ffd2                 call edx
// 00423586  8b10                 mov edx, dword ptr [eax]
// 00423588  83ec08               sub esp, 8
// 0042358b  8bcc                 mov ecx, esp
// 0042358d  8911                 mov dword ptr [ecx], edx
// 0042358f  8b4004               mov eax, dword ptr [eax + 4]
// 00423592  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00423597  89642444             mov dword ptr [esp + 0x44], esp
// 0042359b  894104               mov dword ptr [ecx + 4], eax
// 0042359e  3bc3                 cmp eax, ebx
// 004235a0  740c                 je 0x4235ae
// 004235a2  83c004               add eax, 4
// 004235a5  b901000000           mov ecx, 1
// 004235aa  f00fc108             lock xadd dword ptr [eax], ecx
// 004235ae  8d4c2428             lea ecx, [esp + 0x28]
// 004235b2  e889e5feff           call 0x411b40
// 004235b7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004235bb  c644243403           mov byte ptr [esp + 0x34], 3
// 004235c0  3bc3                 cmp eax, ebx
// 004235c2  742c                 je 0x4235f0
// 004235c4  8bd8                 mov ebx, eax
// 004235c6  83c004               add eax, 4
// 004235c9  83caff               or edx, 0xffffffff
// 004235cc  f00fc110             lock xadd dword ptr [eax], edx
// 004235d0  751e                 jne 0x4235f0
// 004235d2  8b03                 mov eax, dword ptr [ebx]
// 004235d4  8b5004               mov edx, dword ptr [eax + 4]
// 004235d7  8bcb                 mov ecx, ebx
// 004235d9  ffd2                 call edx
// 004235db  8d4308               lea eax, [ebx + 8]
// 004235de  83c9ff               or ecx, 0xffffffff
// 004235e1  f00fc108             lock xadd dword ptr [eax], ecx
// 004235e5  7509                 jne 0x4235f0
// 004235e7  8b13                 mov edx, dword ptr [ebx]
// 004235e9  8b4208               mov eax, dword ptr [edx + 8]
// 004235ec  8bcb                 mov ecx, ebx
// 004235ee  ffd0                 call eax
// 004235f0  8b16                 mov edx, dword ptr [esi]
// 004235f2  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 004235f8  8bce                 mov ecx, esi
// 004235fa  ffd0                 call eax
// 004235fc  8a9f8e000000         mov bl, byte ptr [edi + 0x8e]
// 00423602  8db78e000000         lea esi, [edi + 0x8e]
// 00423608  89742418             mov dword ptr [esp + 0x18], esi
// 0042360c  885c241c             mov byte ptr [esp + 0x1c], bl
// 00423610  c60601               mov byte ptr [esi], 1
// 00423613  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00423617  51                   push ecx
// 00423618  8bc8                 mov ecx, eax
// 0042361a  c644243804           mov byte ptr [esp + 0x38], 4
// 0042361f  e84c411400           call 0x567770
// 00423624  8d4c2420             lea ecx, [esp + 0x20]
// 00423628  881e                 mov byte ptr [esi], bl
// 0042362a  c644243400           mov byte ptr [esp + 0x34], 0
// 0042362f  e88c3d1500           call 0x5773c0
// 00423634  8a9f8d000000         mov bl, byte ptr [edi + 0x8d]
// 0042363a  8db78d000000         lea esi, [edi + 0x8d]
// 00423640  89742418             mov dword ptr [esp + 0x18], esi
// 00423644  885c241c             mov byte ptr [esp + 0x1c], bl
// 00423648  c60601               mov byte ptr [esi], 1
// 0042364b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0042364f  52                   push edx
// 00423650  6a00                 push 0
// 00423652  8bcf                 mov ecx, edi
// 00423654  c644243c05           mov byte ptr [esp + 0x3c], 5
// 00423659  e8f2982b00           call 0x6dcf50
// 0042365e  881e                 mov byte ptr [esi], bl
// 00423660  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00423668  85ed                 test ebp, ebp
// 0042366a  744e                 je 0x4236ba
// 0042366c  8d4504               lea eax, [ebp + 4]
// 0042366f  83c9ff               or ecx, 0xffffffff
// 00423672  f00fc108             lock xadd dword ptr [eax], ecx
// 00423676  7542                 jne 0x4236ba
// 00423678  8b5500               mov edx, dword ptr [ebp]
// 0042367b  8b4204               mov eax, dword ptr [edx + 4]
// 0042367e  8bcd                 mov ecx, ebp
// 00423680  ffd0                 call eax
// 00423682  8d4d08               lea ecx, [ebp + 8]
// 00423685  83caff               or edx, 0xffffffff
// 00423688  f00fc111             lock xadd dword ptr [ecx], edx
// 0042368c  752c                 jne 0x4236ba
// 0042368e  8b4500               mov eax, dword ptr [ebp]
// 00423691  8b5008               mov edx, dword ptr [eax + 8]
// 00423694  8bcd                 mov ecx, ebp
// 00423696  ffd2                 call edx
// 00423698  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042369c  64890d00000000       mov dword ptr fs:[0], ecx
// 004236a3  5f                   pop edi
// 004236a4  5e                   pop esi
// 004236a5  5d                   pop ebp
// 004236a6  5b                   pop ebx
// 004236a7  83c428               add esp, 0x28
// 004236aa  c20800               ret 8
// 004236ad  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004236b1  51                   push ecx
// 004236b2  50                   push eax
// 004236b3  8bcf                 mov ecx, edi
// 004236b5  e896982b00           call 0x6dcf50
// 004236ba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004236be  5f                   pop edi
// 004236bf  5e                   pop esi
// 004236c0  5d                   pop ebp
// 004236c1  64890d00000000       mov dword ptr fs:[0], ecx
// 004236c8  5b                   pop ebx
// 004236c9  83c428               add esp, 0x28
// 004236cc  c20800               ret 8

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference();
    Reference(const Reference&);
    ~Reference();
    void assign(const Reference&);
};

inline Reference::Reference() : control(0) {}

inline Reference::Reference(const Reference& other) : control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Reference::~Reference() {
    if (control &&
        _InterlockedDecrement(&control->strong) == 0) {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}

struct Shared {
    void* object;
    Reference reference;
    Shared();
    Shared(const Shared&);
};

inline Shared::Shared() : object(0) {}

inline Shared::Shared(const Shared& other) : object(other.object), reference(other.reference) {}

struct Record {
    unsigned char padding[12];
    void* object;
    Reference reference;
};

struct Selection {
    void select(void*);
};

struct BaseTable;

struct Base {
    BaseTable* table;
    Record* lookup(void*);
};

struct BaseTable {
    unsigned char padding[0x150];
    Selection* (__thiscall* selection)(Base*);
    Shared (Base::*shared)();
};

struct Transaction {
    unsigned char storage[12];
    Transaction(Shared);
    ~Transaction();
};

struct FlagGuard {
    unsigned char* flag;
    unsigned char previous;
    FlagGuard(unsigned char*);
    ~FlagGuard();
};

inline FlagGuard::FlagGuard(unsigned char* value)
    : flag(value), previous(*value) {
    *flag = 1;
}

inline FlagGuard::~FlagGuard() {
    *flag = previous;
}

struct CSelectionTreeCtrl {
    unsigned char padding[0x8d];
    unsigned char updating;
    unsigned char selecting;
    void forward(int, void*);
    void f(int, void*);
};

void CSelectionTreeCtrl::f(int mode, void* item) {
    if (mode == 0) {
        Base* base = reinterpret_cast<Base*>(
            reinterpret_cast<unsigned char*>(this) - 0x54);
        Record* record = base->lookup(item);
        Shared selected;
        if (record) {
            selected.object = record->object;
            selected.reference.assign(record->reference);
        }
        {
            Transaction transaction((base->*(base->table->shared))());
            Selection* selection = base->table->selection(base);
            {
                void* objectCopy = selected.object;
                FlagGuard guard(&selecting);
                selection->select(objectCopy);
            }
        }
        {
            FlagGuard guard(&updating);
            forward(0, item);
        }
    } else {
        forward(mode, item);
    }
}
