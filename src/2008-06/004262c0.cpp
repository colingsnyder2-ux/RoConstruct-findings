// from server: 74% by colin
// from server: 70% by king_originala
// roc 2008-06 004262c0  unit: CRobloxTreeCtrlNode  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004262c0
//
// 004262c0  6aff                 push -1
// 004262c2  6840ed7b00           push 0x7bed40
// 004262c7  64a100000000         mov eax, dword ptr fs:[0]
// 004262cd  50                   push eax
// 004262ce  64892500000000       mov dword ptr fs:[0], esp
// 004262d5  83ec38               sub esp, 0x38
// 004262d8  53                   push ebx
// 004262d9  55                   push ebp
// 004262da  56                   push esi
// 004262db  57                   push edi
// 004262dc  8bf9                 mov edi, ecx
// 004262de  6a04                 push 4
// 004262e0  897c2414             mov dword ptr [esp + 0x14], edi
// 004262e4  e837a62700           call 0x6a0920
// 004262e9  33ed                 xor ebp, ebp
// 004262eb  83c404               add esp, 4
// 004262ee  3bc5                 cmp eax, ebp
// 004262f0  7408                 je 0x4262fa
// 004262f2  8d4c2430             lea ecx, [esp + 0x30]
// 004262f6  8908                 mov dword ptr [eax], ecx
// 004262f8  eb02                 jmp 0x4262fc
// 004262fa  33c0                 xor eax, eax
// 004262fc  89442430             mov dword ptr [esp + 0x30], eax
// 00426300  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00426304  896c2440             mov dword ptr [esp + 0x40], ebp
// 00426308  896c2444             mov dword ptr [esp + 0x44], ebp
// 0042630c  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0042630f  8b11                 mov edx, dword ptr [ecx]
// 00426311  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00426317  8d442418             lea eax, [esp + 0x18]
// 0042631b  bb01000000           mov ebx, 1
// 00426320  50                   push eax
// 00426321  895c2454             mov dword ptr [esp + 0x54], ebx
// 00426325  ffd2                 call edx
// 00426327  8b10                 mov edx, dword ptr [eax]
// 00426329  83ec08               sub esp, 8
// 0042632c  8bcc                 mov ecx, esp
// 0042632e  8911                 mov dword ptr [ecx], edx
// 00426330  8b4004               mov eax, dword ptr [eax + 4]
// 00426333  c644245802           mov byte ptr [esp + 0x58], 2
// 00426338  8964241c             mov dword ptr [esp + 0x1c], esp
// 0042633c  894104               mov dword ptr [ecx + 4], eax
// 0042633f  3bc5                 cmp eax, ebp
// 00426341  7409                 je 0x42634c
// 00426343  83c004               add eax, 4
// 00426346  8bcb                 mov ecx, ebx
// 00426348  f00fc108             lock xadd dword ptr [eax], ecx
// 0042634c  8d4c2428             lea ecx, [esp + 0x28]
// 00426350  e8ebb7feff           call 0x411b40
// 00426355  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00426359  c644245004           mov byte ptr [esp + 0x50], 4
// 0042635e  3bf5                 cmp esi, ebp
// 00426360  742a                 je 0x42638c
// 00426362  8d5604               lea edx, [esi + 4]
// 00426365  83c8ff               or eax, 0xffffffff
// 00426368  f00fc102             lock xadd dword ptr [edx], eax
// 0042636c  751e                 jne 0x42638c
// 0042636e  8b16                 mov edx, dword ptr [esi]
// 00426370  8b4204               mov eax, dword ptr [edx + 4]
// 00426373  8bce                 mov ecx, esi
// 00426375  ffd0                 call eax
// 00426377  8d4e08               lea ecx, [esi + 8]
// 0042637a  83caff               or edx, 0xffffffff
// 0042637d  f00fc111             lock xadd dword ptr [ecx], edx
// 00426381  7509                 jne 0x42638c
// 00426383  8b06                 mov eax, dword ptr [esi]
// 00426385  8b5008               mov edx, dword ptr [eax + 8]
// 00426388  8bce                 mov ecx, esi
// 0042638a  ffd2                 call edx
// 0042638c  8b470c               mov eax, dword ptr [edi + 0xc]
// 0042638f  39a808010000         cmp dword ptr [eax + 0x108], ebp
// 00426395  7410                 je 0x4263a7
// 00426397  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 0042639d  50                   push eax
// 0042639e  8d4c2434             lea ecx, [esp + 0x34]
// 004263a2  e849f6ffff           call 0x4259f0
// 004263a7  8d4c2420             lea ecx, [esp + 0x20]
// 004263ab  885c2450             mov byte ptr [esp + 0x50], bl
// 004263af  e80c101500           call 0x5773c0
// 004263b4  33c9                 xor ecx, ecx
// 004263b6  b880454200           mov eax, 0x424580
// 004263bb  8bf0                 mov esi, eax
// 004263bd  8b442440             mov eax, dword ptr [esp + 0x40]
// 004263c1  8bf9                 mov edi, ecx
// 004263c3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004263c7  8bd8                 mov ebx, eax
// 004263c9  3bc8                 cmp ecx, eax
// 004263cb  760e                 jbe 0x4263db
// 004263cd  ff1590288000         call dword ptr [0x802890]
// 004263d3  8b442440             mov eax, dword ptr [esp + 0x40]
// 004263d7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004263db  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004263df  894c2414             mov dword ptr [esp + 0x14], ecx
// 004263e3  3bc8                 cmp ecx, eax
// 004263e5  7606                 jbe 0x4263ed
// 004263e7  ff1590288000         call dword ptr [0x802890]
// 004263ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004263f1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004263f5  83ec10               sub esp, 0x10
// 004263f8  8bc4                 mov eax, esp
// 004263fa  8930                 mov dword ptr [eax], esi
// 004263fc  897804               mov dword ptr [eax + 4], edi
// 004263ff  894808               mov dword ptr [eax + 8], ecx
// 00426402  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00426406  53                   push ebx
// 00426407  89500c               mov dword ptr [eax + 0xc], edx
// 0042640a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0042640e  55                   push ebp
// 0042640f  50                   push eax
// 00426410  51                   push ecx
// 00426411  8d542440             lea edx, [esp + 0x40]
// 00426415  52                   push edx
// 00426416  e8a5d6ffff           call 0x423ac0
// 0042641b  83c424               add esp, 0x24
// 0042641e  8d4c2430             lea ecx, [esp + 0x30]
// 00426422  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0042642a  e8b1cb1700           call 0x5a2fe0
// 0042642f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00426433  5f                   pop edi
// 00426434  5e                   pop esi
// 00426435  5d                   pop ebp
// 00426436  64890d00000000       mov dword ptr fs:[0], ecx
// 0042643d  5b                   pop ebx
// 0042643e  83c444               add esp, 0x44
// 00426441  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    Control* control;

    __forceinline Handle(const Handle&);
    __forceinline ~Handle();
};

__forceinline Handle::Handle(const Handle& h)
    : pointer(h.pointer), control(h.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Handle::~Handle()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Source;

struct SourceTable {
    void* slots[85];
    Handle (__thiscall* get)(Source*);
};

struct Source {
    SourceTable* table;
};

struct Vector;

struct Proxy {
    Vector* owner;
    __forceinline Proxy(Vector*);
};

__forceinline Proxy::Proxy(Vector* p) : owner(p)
{
}

struct VectorBase {
    Proxy* proxy;
    unsigned int reserved[2];
    void** first;
    void** last;
    void** limit;

    __forceinline VectorBase(Vector*);
    ~VectorBase();
};

__forceinline VectorBase::VectorBase(Vector* p)
    : proxy(new Proxy(p)), first(0), last(0), limit(0)
{
}

struct Vector : VectorBase {
    __forceinline Vector();
    ~Vector();
    void assign(const Vector*);
};

__forceinline Vector::Vector() : VectorBase(this)
{
}

struct Temporary {
    unsigned int storage[3];
    void* value;

    Temporary(Handle);
    ~Temporary();
};

struct Parent {
    unsigned char padding[0x108];
    Vector* selection;
};

struct Item {
    char data[8];
};

struct Target {
    void callback(Item*);
};

struct Callback {
    void (Target::*method)(Item*);
    int adjustment;
    Target* object;
    int extra;
};

struct Iterator {
    Proxy* proxy;
    void** position;
};

Callback __cdecl apply(Iterator, Iterator, Callback);

struct S : Target {
    unsigned char padding0[0x0c];
    Parent* parent;
    unsigned char padding1[0x48];
    Source* source;

    void f();
};

void S::f()
{
    Vector values;
    Callback action;
    {
        Temporary temporary(source->table->get(source));

        if (parent->selection)
            values.assign(parent->selection);

        action.extra = reinterpret_cast<int>(temporary.value);
    }

    action.method = &Target::callback;
    action.adjustment = 0;
    action.object = this;

    void** finish = values.last;
    if (values.first > values.last)
        _invalid_parameter_noinfo();

    Iterator first;
    first.proxy = values.proxy;
    first.position = values.first;
    if (values.first > values.last)
        _invalid_parameter_noinfo();

    Iterator last;
    last.proxy = values.proxy;
    last.position = finish;

    apply(first, last, action);
}
