// from server: 87% by colin
// from server: 80% by king_originala
// roc 2008-06 005d88d0  unit: RBX::VPartInstance::?$FilteredSelection  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d88d0
//
// 005d88d0  6aff                 push -1
// 005d88d2  68f45d7d00           push 0x7d5df4
// 005d88d7  64a100000000         mov eax, dword ptr fs:[0]
// 005d88dd  50                   push eax
// 005d88de  64892500000000       mov dword ptr fs:[0], esp
// 005d88e5  51                   push ecx
// 005d88e6  53                   push ebx
// 005d88e7  56                   push esi
// 005d88e8  8bf1                 mov esi, ecx
// 005d88ea  8d8630010000         lea eax, [esi + 0x130]
// 005d88f0  57                   push edi
// 005d88f1  8974240c             mov dword ptr [esp + 0xc], esi
// 005d88f5  c70644d58300         mov dword ptr [esi], 0x83d544
// 005d88fb  c7461038d58300       mov dword ptr [esi + 0x10], 0x83d538
// 005d8902  c7461430d58300       mov dword ptr [esi + 0x14], 0x83d530
// 005d8909  c7462028d58300       mov dword ptr [esi + 0x20], 0x83d528
// 005d8910  c7462418d58300       mov dword ptr [esi + 0x24], 0x83d518
// 005d8917  c7464408d58300       mov dword ptr [esi + 0x44], 0x83d508
// 005d891e  c74664f8d48300       mov dword ptr [esi + 0x64], 0x83d4f8
// 005d8925  c78684000000e8d48300 mov dword ptr [esi + 0x84], 0x83d4e8
// 005d892f  c786a4000000d8d48300 mov dword ptr [esi + 0xa4], 0x83d4d8
// 005d8939  c786c4000000c8d48300 mov dword ptr [esi + 0xc4], 0x83d4c8
// 005d8943  c700c0d48300         mov dword ptr [eax], 0x83d4c0
// 005d8949  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005d894f  33db                 xor ebx, ebx
// 005d8951  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005d8959  3bcb                 cmp ecx, ebx
// 005d895b  7406                 je 0x5d8963
// 005d895d  50                   push eax
// 005d895e  e88de7f8ff           call 0x5670f0
// 005d8963  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 005d8969  3bc3                 cmp eax, ebx
// 005d896b  7409                 je 0x5d8976
// 005d896d  50                   push eax
// 005d896e  e8077d0c00           call 0x6a067a
// 005d8973  83c404               add esp, 4
// 005d8976  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005d897c  50                   push eax
// 005d897d  899e48010000         mov dword ptr [esi + 0x148], ebx
// 005d8983  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 005d8989  899e50010000         mov dword ptr [esi + 0x150], ebx
// 005d898f  e8e67c0c00           call 0x6a067a
// 005d8994  8bbe38010000         mov edi, dword ptr [esi + 0x138]
// 005d899a  83c404               add esp, 4
// 005d899d  885c2418             mov byte ptr [esp + 0x18], bl
// 005d89a1  3bfb                 cmp edi, ebx
// 005d89a3  742a                 je 0x5d89cf
// 005d89a5  8d4704               lea eax, [edi + 4]
// 005d89a8  83c9ff               or ecx, 0xffffffff
// 005d89ab  f00fc108             lock xadd dword ptr [eax], ecx
// 005d89af  751e                 jne 0x5d89cf
// 005d89b1  8b17                 mov edx, dword ptr [edi]
// 005d89b3  8b4204               mov eax, dword ptr [edx + 4]
// 005d89b6  8bcf                 mov ecx, edi
// 005d89b8  ffd0                 call eax
// 005d89ba  8d4f08               lea ecx, [edi + 8]
// 005d89bd  83caff               or edx, 0xffffffff
// 005d89c0  f00fc111             lock xadd dword ptr [ecx], edx
// 005d89c4  7509                 jne 0x5d89cf
// 005d89c6  8b07                 mov eax, dword ptr [edi]
// 005d89c8  8b5008               mov edx, dword ptr [eax + 8]
// 005d89cb  8bcf                 mov ecx, edi
// 005d89cd  ffd2                 call edx
// 005d89cf  8bce                 mov ecx, esi
// 005d89d1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005d89d9  e8621bf8ff           call 0x55a540
// 005d89de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d89e2  5f                   pop edi
// 005d89e3  5e                   pop esi
// 005d89e4  5b                   pop ebx
// 005d89e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005d89ec  83c410               add esp, 0x10
// 005d89ef  c3                   ret 
// 005d89f0  56                   push esi
// 005d89f1  8bf1                 mov esi, ecx
// 005d89f3  e8d8feffff           call 0x5d88d0
// 005d89f8  f644240801           test byte ptr [esp + 8], 1
// 005d89fd  740a                 je 0x5d8a09
// 005d89ff  56                   push esi
// 005d8a00  ff15c0288000         call dword ptr [0x8028c0]
// 005d8a06  83c404               add esp, 4
// 005d8a09  8bc6                 mov eax, esi
// 005d8a0b  5e                   pop esi
// 005d8a0c  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl free(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
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
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Storage {
    void* buffer;
    unsigned long reserved[2];
    void* first;
    void* last;
    void* limit;
    ~Storage();
};

inline Storage::~Storage()
{
    if (first)
        free(first);
    first = 0;
    last = 0;
    limit = 0;
    free(buffer);
}

struct Part0 {
    virtual void slot0();
    char padding[12];
};

struct Part10 {
    virtual void slot10();
};

struct Part14 {
    virtual void slot14();
    char padding[8];
};

struct Part20 {
    virtual void slot20();
};

struct Part24 {
    virtual void slot24();
    char padding[28];
};

struct Part44 {
    virtual void slot44();
    char padding[28];
};

struct Part64 {
    virtual void slot64();
    char padding[28];
};

struct Part84 {
    virtual void slot84();
    char padding[28];
};

struct Parta4 {
    virtual void slota4();
    char padding[28];
};

struct Partc4 {
    virtual void slotc4();
    char padding[104];
};

struct Base : Part0, Part10, Part14, Part20, Part24, Part44, Part64, Part84, Parta4, Partc4 {
    ~Base();
};

struct Trackable {
    virtual void trackable0();
};

struct Connection {
    void __thiscall disconnect(void*);
};

struct S : Base, Trackable {
    Shared connection;
    Storage storage;
    ~S();
    void* deletingDestructor(unsigned int);
};

S::~S()
{
    if (connection.object)
        static_cast<Connection*>(connection.object)->disconnect(
            static_cast<Trackable*>(this));
}

void* S::deletingDestructor(unsigned int flags)
{
    this->~S();
    if (flags & 1)
        free(this);
    return this;
}
