// from server: 100% by king_originala
// roc 2008-06 004582f0  unit: CRobloxReportView  size: 391 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004582f0
//
// 004582f0  6aff                 push -1
// 004582f2  68ea267c00           push 0x7c26ea
// 004582f7  64a100000000         mov eax, dword ptr fs:[0]
// 004582fd  50                   push eax
// 004582fe  64892500000000       mov dword ptr fs:[0], esp
// 00458305  83ec10               sub esp, 0x10
// 00458308  56                   push esi
// 00458309  57                   push edi
// 0045830a  8bf1                 mov esi, ecx
// 0045830c  8b8688fcffff         mov eax, dword ptr [esi - 0x378]
// 00458312  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00458318  8d8e88fcffff         lea ecx, [esi - 0x378]
// 0045831e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00458326  ffd2                 call edx
// 00458328  8bf8                 mov edi, eax
// 0045832a  8d44242c             lea eax, [esp + 0x2c]
// 0045832e  50                   push eax
// 0045832f  8d4c2414             lea ecx, [esp + 0x14]
// 00458333  51                   push ecx
// 00458334  e8a7ebffff           call 0x456ee0
// 00458339  83c408               add esp, 8
// 0045833c  837c241000           cmp dword ptr [esp + 0x10], 0
// 00458341  c644242001           mov byte ptr [esp + 0x20], 1
// 00458346  7520                 jne 0x458368
// 00458348  8b742414             mov esi, dword ptr [esp + 0x14]
// 0045834c  c644242000           mov byte ptr [esp + 0x20], 0
// 00458351  85f6                 test esi, esi
// 00458353  0f84d1000000         je 0x45842a
// 00458359  8d5604               lea edx, [esi + 4]
// 0045835c  83c8ff               or eax, 0xffffffff
// 0045835f  f00fc102             lock xadd dword ptr [edx], eax
// 00458363  e9a2000000           jmp 0x45840a
// 00458368  68b0000000           push 0xb0
// 0045836d  e87efe2600           call 0x6c81f0
// 00458372  89442408             mov dword ptr [esp + 8], eax
// 00458376  c644242002           mov byte ptr [esp + 0x20], 2
// 0045837b  85c0                 test eax, eax
// 0045837d  7457                 je 0x4583d6
// 0045837f  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00458382  83ec08               sub esp, 8
// 00458385  8bd4                 mov edx, esp
// 00458387  890a                 mov dword ptr [edx], ecx
// 00458389  8b7650               mov esi, dword ptr [esi + 0x50]
// 0045838c  89642414             mov dword ptr [esp + 0x14], esp
// 00458390  897204               mov dword ptr [edx + 4], esi
// 00458393  85f6                 test esi, esi
// 00458395  740c                 je 0x4583a3
// 00458397  83c604               add esi, 4
// 0045839a  ba01000000           mov edx, 1
// 0045839f  f00fc116             lock xadd dword ptr [esi], edx
// 004583a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004583a7  83ec08               sub esp, 8
// 004583aa  8bd4                 mov edx, esp
// 004583ac  890a                 mov dword ptr [edx], ecx
// 004583ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004583b2  894a04               mov dword ptr [edx + 4], ecx
// 004583b5  8b542424             mov edx, dword ptr [esp + 0x24]
// 004583b9  8964241c             mov dword ptr [esp + 0x1c], esp
// 004583bd  85d2                 test edx, edx
// 004583bf  740c                 je 0x4583cd
// 004583c1  83c204               add edx, 4
// 004583c4  b901000000           mov ecx, 1
// 004583c9  f00fc10a             lock xadd dword ptr [edx], ecx
// 004583cd  8bc8                 mov ecx, eax
// 004583cf  e8ccf8ffff           call 0x457ca0
// 004583d4  eb02                 jmp 0x4583d8
// 004583d6  33c0                 xor eax, eax
// 004583d8  c7404401000000       mov dword ptr [eax + 0x44], 1
// 004583df  8b17                 mov edx, dword ptr [edi]
// 004583e1  50                   push eax
// 004583e2  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 004583e8  8bcf                 mov ecx, edi
// 004583ea  c644242401           mov byte ptr [esp + 0x24], 1
// 004583ef  ffd0                 call eax
// 004583f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004583f5  c644242000           mov byte ptr [esp + 0x20], 0
// 004583fa  85c0                 test eax, eax
// 004583fc  742c                 je 0x45842a
// 004583fe  8bf0                 mov esi, eax
// 00458400  83c004               add eax, 4
// 00458403  83c9ff               or ecx, 0xffffffff
// 00458406  f00fc108             lock xadd dword ptr [eax], ecx
// 0045840a  751e                 jne 0x45842a
// 0045840c  8b16                 mov edx, dword ptr [esi]
// 0045840e  8b4204               mov eax, dword ptr [edx + 4]
// 00458411  8bce                 mov ecx, esi
// 00458413  ffd0                 call eax
// 00458415  83caff               or edx, 0xffffffff
// 00458418  8d4e08               lea ecx, [esi + 8]
// 0045841b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045841f  7509                 jne 0x45842a
// 00458421  8b06                 mov eax, dword ptr [esi]
// 00458423  8b5008               mov edx, dword ptr [eax + 8]
// 00458426  8bce                 mov ecx, esi
// 00458428  ffd2                 call edx
// 0045842a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0045842e  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00458436  85f6                 test esi, esi
// 00458438  742a                 je 0x458464
// 0045843a  83c9ff               or ecx, 0xffffffff
// 0045843d  8d4604               lea eax, [esi + 4]
// 00458440  f00fc108             lock xadd dword ptr [eax], ecx
// 00458444  751e                 jne 0x458464
// 00458446  8b16                 mov edx, dword ptr [esi]
// 00458448  8b4204               mov eax, dword ptr [edx + 4]
// 0045844b  8bce                 mov ecx, esi
// 0045844d  ffd0                 call eax
// 0045844f  83caff               or edx, 0xffffffff
// 00458452  8d4e08               lea ecx, [esi + 8]
// 00458455  f00fc111             lock xadd dword ptr [ecx], edx
// 00458459  7509                 jne 0x458464
// 0045845b  8b06                 mov eax, dword ptr [esi]
// 0045845d  8b5008               mov edx, dword ptr [eax + 8]
// 00458460  8bce                 mov ecx, esi
// 00458462  ffd2                 call edx
// 00458464  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00458468  5f                   pop edi
// 00458469  64890d00000000       mov dword ptr fs:[0], ecx
// 00458470  5e                   pop esi
// 00458471  83c41c               add esp, 0x1c
// 00458474  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Shared __cdecl convert(const Shared&);

struct Node {
    char padding[0x44];
    int flag;
    char tail[0x68];

    static void* __stdcall operator new(unsigned int);
    static void __stdcall operator delete(void*);
    Node(Shared, Shared);
};

struct Frame;

struct FrameTable {
    void* slots[83];
    void (__thiscall* attach)(Frame*, Node*);
};

struct Frame {
    FrameTable* table;
};

struct Owner;

struct OwnerTable {
    void* slots[101];
    Frame* (__thiscall* getFrame)(Owner*);
};

struct Owner {
    OwnerTable* table;
};

struct S {
    char padding[0x4c];
    Shared context;

    void f(int, Shared);
};

void S::f(int, Shared argument) {
    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x378);
    Frame* frame = owner->table->getFrame(owner);
    Shared converted = convert(argument);
    if (!converted.pointer)
        return;

    Node* node = new Node(converted, context);
    node->flag = 1;
    frame->table->attach(frame, node);
}
