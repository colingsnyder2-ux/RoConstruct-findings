// from server: 100% by colin
// roc 2008-06 005a5430  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a5430
//
// 005a5430  6aff                 push -1
// 005a5432  68b92e7d00           push 0x7d2eb9
// 005a5437  64a100000000         mov eax, dword ptr fs:[0]
// 005a543d  50                   push eax
// 005a543e  64892500000000       mov dword ptr fs:[0], esp
// 005a5445  83ec2c               sub esp, 0x2c
// 005a5448  53                   push ebx
// 005a5449  55                   push ebp
// 005a544a  56                   push esi
// 005a544b  57                   push edi
// 005a544c  8bd9                 mov ebx, ecx
// 005a544e  83ec20               sub esp, 0x20
// 005a5451  8bc4                 mov eax, esp
// 005a5453  c70000000000         mov dword ptr [eax], 0
// 005a5459  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005a545d  c744246400000000     mov dword ptr [esp + 0x64], 0
// 005a5465  89642430             mov dword ptr [esp + 0x30], esp
// 005a5469  85c9                 test ecx, ecx
// 005a546b  741b                 je 0x5a5488
// 005a546d  8908                 mov dword ptr [eax], ecx
// 005a546f  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005a5473  8b11                 mov edx, dword ptr [ecx]
// 005a5475  83c008               add eax, 8
// 005a5478  6a00                 push 0
// 005a547a  50                   push eax
// 005a547b  8d842480000000       lea eax, [esp + 0x80]
// 005a5482  50                   push eax
// 005a5483  ffd2                 call edx
// 005a5485  83c40c               add esp, 0xc
// 005a5488  8d442438             lea eax, [esp + 0x38]
// 005a548c  50                   push eax
// 005a548d  e83ef7ffff           call 0x5a4bd0
// 005a5492  8b7004               mov esi, dword ptr [eax + 4]
// 005a5495  8b38                 mov edi, dword ptr [eax]
// 005a5497  83c424               add esp, 0x24
// 005a549a  897c2410             mov dword ptr [esp + 0x10], edi
// 005a549e  89742414             mov dword ptr [esp + 0x14], esi
// 005a54a2  85f6                 test esi, esi
// 005a54a4  740c                 je 0x5a54b2
// 005a54a6  8d4e04               lea ecx, [esi + 4]
// 005a54a9  ba01000000           mov edx, 1
// 005a54ae  f00fc111             lock xadd dword ptr [ecx], edx
// 005a54b2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a54b6  c644244401           mov byte ptr [esp + 0x44], 1
// 005a54bb  85ed                 test ebp, ebp
// 005a54bd  742c                 je 0x5a54eb
// 005a54bf  8d4504               lea eax, [ebp + 4]
// 005a54c2  83c9ff               or ecx, 0xffffffff
// 005a54c5  f00fc108             lock xadd dword ptr [eax], ecx
// 005a54c9  7520                 jne 0x5a54eb
// 005a54cb  8b5500               mov edx, dword ptr [ebp]
// 005a54ce  8b4204               mov eax, dword ptr [edx + 4]
// 005a54d1  8bcd                 mov ecx, ebp
// 005a54d3  ffd0                 call eax
// 005a54d5  8d4d08               lea ecx, [ebp + 8]
// 005a54d8  83caff               or edx, 0xffffffff
// 005a54db  f00fc111             lock xadd dword ptr [ecx], edx
// 005a54df  750a                 jne 0x5a54eb
// 005a54e1  8b4500               mov eax, dword ptr [ebp]
// 005a54e4  8b5008               mov edx, dword ptr [eax + 8]
// 005a54e7  8bcd                 mov ecx, ebp
// 005a54e9  ffd2                 call edx
// 005a54eb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005a54ef  50                   push eax
// 005a54f0  8d4c2424             lea ecx, [esp + 0x24]
// 005a54f4  ff1558248000         call dword ptr [0x802458]
// 005a54fa  8b17                 mov edx, dword ptr [edi]
// 005a54fc  8b5204               mov edx, dword ptr [edx + 4]
// 005a54ff  8d442420             lea eax, [esp + 0x20]
// 005a5503  50                   push eax
// 005a5504  8bcf                 mov ecx, edi
// 005a5506  c644244802           mov byte ptr [esp + 0x48], 2
// 005a550b  ffd2                 call edx
// 005a550d  8d4c2420             lea ecx, [esp + 0x20]
// 005a5511  c644244401           mov byte ptr [esp + 0x44], 1
// 005a5516  ff1568248000         call dword ptr [0x802468]
// 005a551c  53                   push ebx
// 005a551d  8bcf                 mov ecx, edi
// 005a551f  e8cc53fbff           call 0x55a8f0
// 005a5524  c644244400           mov byte ptr [esp + 0x44], 0
// 005a5529  85f6                 test esi, esi
// 005a552b  742a                 je 0x5a5557
// 005a552d  8d4604               lea eax, [esi + 4]
// 005a5530  83c9ff               or ecx, 0xffffffff
// 005a5533  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5537  751e                 jne 0x5a5557
// 005a5539  8b16                 mov edx, dword ptr [esi]
// 005a553b  8b4204               mov eax, dword ptr [edx + 4]
// 005a553e  8bce                 mov ecx, esi
// 005a5540  ffd0                 call eax
// 005a5542  8d4e08               lea ecx, [esi + 8]
// 005a5545  83caff               or edx, 0xffffffff
// 005a5548  f00fc111             lock xadd dword ptr [ecx], edx
// 005a554c  7509                 jne 0x5a5557
// 005a554e  8b06                 mov eax, dword ptr [esi]
// 005a5550  8b5008               mov edx, dword ptr [eax + 8]
// 005a5553  8bce                 mov ecx, esi
// 005a5555  ffd2                 call edx
// 005a5557  8b442450             mov eax, dword ptr [esp + 0x50]
// 005a555b  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005a5563  85c0                 test eax, eax
// 005a5565  7415                 je 0x5a557c
// 005a5567  8b00                 mov eax, dword ptr [eax]
// 005a5569  85c0                 test eax, eax
// 005a556b  740f                 je 0x5a557c
// 005a556d  8d4c2458             lea ecx, [esp + 0x58]
// 005a5571  6a01                 push 1
// 005a5573  51                   push ecx
// 005a5574  8bd1                 mov edx, ecx
// 005a5576  52                   push edx
// 005a5577  ffd0                 call eax
// 005a5579  83c40c               add esp, 0xc
// 005a557c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a5580  8bc7                 mov eax, edi
// 005a5582  5f                   pop edi
// 005a5583  5e                   pop esi
// 005a5584  5d                   pop ebp
// 005a5585  64890d00000000       mov dword ptr fs:[0], ecx
// 005a558c  5b                   pop ebx
// 005a558d  83c438               add esp, 0x38
// 005a5590  c22400               ret 0x24

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Function {
    typedef void (__cdecl *Manager)(const void*, void*, int);
    struct Table {
        Manager manage;
    };

    const Table* table;
    unsigned int reserved;
    unsigned char storage[24];

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : table(0) {
    if (other.table) {
        table = other.table;
        other.table->manage(other.storage, storage, 0);
    }
}

inline Function::~Function() {
    if (table) {
        Manager manager = table->manage;
        if (manager)
            manager(storage, storage, 1);
    }
}

struct String {
    unsigned char storage[28];

    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Descriptor;

struct Object {
    virtual void slot0();
    virtual void setName(const String&);
    void bind(Descriptor*);
};

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Result {
    Object* pointer;
    Control* control;

    ~Result();
};

inline Result::~Result() {
    if (control)
        control->release();
}

Result __cdecl makeResult(Function);

struct Shared {
    Object* pointer;
    Control* control;

    Shared(const Result&);
    ~Shared();
};

inline Shared::Shared(const Result& result)
    : pointer(result.pointer), control(result.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared() {
    if (control)
        control->release();
}

struct Descriptor {
    Object* create(const char*, Function);
};

Object* Descriptor::create(const char* name, Function function) {
    Shared object(makeResult(function));
    {
        String text(name);
        object.pointer->setName(text);
    }
    object.pointer->bind(this);
    return object.pointer;
}
