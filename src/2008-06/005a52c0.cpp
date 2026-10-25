// from server: 100% by king_originala
// roc 2008-06 005a52c0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a52c0
//
// 005a52c0  6aff                 push -1
// 005a52c2  68b92e7d00           push 0x7d2eb9
// 005a52c7  64a100000000         mov eax, dword ptr fs:[0]
// 005a52cd  50                   push eax
// 005a52ce  64892500000000       mov dword ptr fs:[0], esp
// 005a52d5  83ec2c               sub esp, 0x2c
// 005a52d8  53                   push ebx
// 005a52d9  55                   push ebp
// 005a52da  56                   push esi
// 005a52db  57                   push edi
// 005a52dc  8bd9                 mov ebx, ecx
// 005a52de  83ec20               sub esp, 0x20
// 005a52e1  8bc4                 mov eax, esp
// 005a52e3  c70000000000         mov dword ptr [eax], 0
// 005a52e9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005a52ed  c744246400000000     mov dword ptr [esp + 0x64], 0
// 005a52f5  89642430             mov dword ptr [esp + 0x30], esp
// 005a52f9  85c9                 test ecx, ecx
// 005a52fb  741b                 je 0x5a5318
// 005a52fd  8908                 mov dword ptr [eax], ecx
// 005a52ff  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005a5303  8b11                 mov edx, dword ptr [ecx]
// 005a5305  83c008               add eax, 8
// 005a5308  6a00                 push 0
// 005a530a  50                   push eax
// 005a530b  8d842480000000       lea eax, [esp + 0x80]
// 005a5312  50                   push eax
// 005a5313  ffd2                 call edx
// 005a5315  83c40c               add esp, 0xc
// 005a5318  8d442438             lea eax, [esp + 0x38]
// 005a531c  50                   push eax
// 005a531d  e8cef7ffff           call 0x5a4af0
// 005a5322  8b7004               mov esi, dword ptr [eax + 4]
// 005a5325  8b38                 mov edi, dword ptr [eax]
// 005a5327  83c424               add esp, 0x24
// 005a532a  897c2410             mov dword ptr [esp + 0x10], edi
// 005a532e  89742414             mov dword ptr [esp + 0x14], esi
// 005a5332  85f6                 test esi, esi
// 005a5334  740c                 je 0x5a5342
// 005a5336  8d4e04               lea ecx, [esi + 4]
// 005a5339  ba01000000           mov edx, 1
// 005a533e  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5342  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a5346  c644244401           mov byte ptr [esp + 0x44], 1
// 005a534b  85ed                 test ebp, ebp
// 005a534d  742c                 je 0x5a537b
// 005a534f  8d4504               lea eax, [ebp + 4]
// 005a5352  83c9ff               or ecx, 0xffffffff
// 005a5355  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5359  7520                 jne 0x5a537b
// 005a535b  8b5500               mov edx, dword ptr [ebp]
// 005a535e  8b4204               mov eax, dword ptr [edx + 4]
// 005a5361  8bcd                 mov ecx, ebp
// 005a5363  ffd0                 call eax
// 005a5365  8d4d08               lea ecx, [ebp + 8]
// 005a5368  83caff               or edx, 0xffffffff
// 005a536b  f00fc111             lock xadd dword ptr [ecx], edx
// 005a536f  750a                 jne 0x5a537b
// 005a5371  8b4500               mov eax, dword ptr [ebp]
// 005a5374  8b5008               mov edx, dword ptr [eax + 8]
// 005a5377  8bcd                 mov ecx, ebp
// 005a5379  ffd2                 call edx
// 005a537b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005a537f  50                   push eax
// 005a5380  8d4c2424             lea ecx, [esp + 0x24]
// 005a5384  ff1558248000         call dword ptr [0x802458]
// 005a538a  8b17                 mov edx, dword ptr [edi]
// 005a538c  8b5204               mov edx, dword ptr [edx + 4]
// 005a538f  8d442420             lea eax, [esp + 0x20]
// 005a5393  50                   push eax
// 005a5394  8bcf                 mov ecx, edi
// 005a5396  c644244802           mov byte ptr [esp + 0x48], 2
// 005a539b  ffd2                 call edx
// 005a539d  8d4c2420             lea ecx, [esp + 0x20]
// 005a53a1  c644244401           mov byte ptr [esp + 0x44], 1
// 005a53a6  ff1568248000         call dword ptr [0x802468]
// 005a53ac  53                   push ebx
// 005a53ad  8bcf                 mov ecx, edi
// 005a53af  e83c55fbff           call 0x55a8f0
// 005a53b4  c644244400           mov byte ptr [esp + 0x44], 0
// 005a53b9  85f6                 test esi, esi
// 005a53bb  742a                 je 0x5a53e7
// 005a53bd  8d4604               lea eax, [esi + 4]
// 005a53c0  83c9ff               or ecx, 0xffffffff
// 005a53c3  f00fc108             lock xadd dword ptr [eax], ecx
// 005a53c7  751e                 jne 0x5a53e7
// 005a53c9  8b16                 mov edx, dword ptr [esi]
// 005a53cb  8b4204               mov eax, dword ptr [edx + 4]
// 005a53ce  8bce                 mov ecx, esi
// 005a53d0  ffd0                 call eax
// 005a53d2  8d4e08               lea ecx, [esi + 8]
// 005a53d5  83caff               or edx, 0xffffffff
// 005a53d8  f00fc111             lock xadd dword ptr [ecx], edx
// 005a53dc  7509                 jne 0x5a53e7
// 005a53de  8b06                 mov eax, dword ptr [esi]
// 005a53e0  8b5008               mov edx, dword ptr [eax + 8]
// 005a53e3  8bce                 mov ecx, esi
// 005a53e5  ffd2                 call edx
// 005a53e7  8b442450             mov eax, dword ptr [esp + 0x50]
// 005a53eb  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005a53f3  85c0                 test eax, eax
// 005a53f5  7415                 je 0x5a540c
// 005a53f7  8b00                 mov eax, dword ptr [eax]
// 005a53f9  85c0                 test eax, eax
// 005a53fb  740f                 je 0x5a540c
// 005a53fd  8d4c2458             lea ecx, [esp + 0x58]
// 005a5401  6a01                 push 1
// 005a5403  51                   push ecx
// 005a5404  8bd1                 mov edx, ecx
// 005a5406  52                   push edx
// 005a5407  ffd0                 call eax
// 005a5409  83c40c               add esp, 0xc
// 005a540c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a5410  8bc7                 mov eax, edi
// 005a5412  5f                   pop edi
// 005a5413  5e                   pop esi
// 005a5414  5d                   pop ebp
// 005a5415  64890d00000000       mov dword ptr fs:[0], ecx
// 005a541c  5b                   pop ebx
// 005a541d  83c438               add esp, 0x38
// 005a5420  c22400               ret 0x24

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
