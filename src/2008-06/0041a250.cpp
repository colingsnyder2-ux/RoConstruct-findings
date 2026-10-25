// from server: 100% by colin
// roc 2008-06 0041a250  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a250
//
// 0041a250  6aff                 push -1
// 0041a252  68dbde7b00           push 0x7bdedb
// 0041a257  64a100000000         mov eax, dword ptr fs:[0]
// 0041a25d  50                   push eax
// 0041a25e  64892500000000       mov dword ptr fs:[0], esp
// 0041a265  83ec08               sub esp, 8
// 0041a268  56                   push esi
// 0041a269  8bf1                 mov esi, ecx
// 0041a26b  57                   push edi
// 0041a26c  89742408             mov dword ptr [esp + 8], esi
// 0041a270  c706ccec8000         mov dword ptr [esi], 0x80eccc
// 0041a276  8d4e4c               lea ecx, [esi + 0x4c]
// 0041a279  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0041a281  e82aaa1700           call 0x594cb0
// 0041a286  8d7e2c               lea edi, [esi + 0x2c]
// 0041a289  897c240c             mov dword ptr [esp + 0xc], edi
// 0041a28d  8bcf                 mov ecx, edi
// 0041a28f  c644241802           mov byte ptr [esp + 0x18], 2
// 0041a294  e8a7f8ffff           call 0x419b40
// 0041a299  8b3f                 mov edi, dword ptr [edi]
// 0041a29b  57                   push edi
// 0041a29c  e8d9632800           call 0x6a067a
// 0041a2a1  8b7614               mov esi, dword ptr [esi + 0x14]
// 0041a2a4  83c404               add esp, 4
// 0041a2a7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0041a2af  85f6                 test esi, esi
// 0041a2b1  7406                 je 0x41a2b9
// 0041a2b3  56                   push esi
// 0041a2b4  e852bd3800           call 0x7a600b
// 0041a2b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041a2bd  5f                   pop edi
// 0041a2be  5e                   pop esi
// 0041a2bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a2c6  83c414               add esp, 0x14
// 0041a2c9  c3                   ret 

// from server: 92% by colin
// roc 2008-06 0041a250  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a250
//

// from server: 90% by king_originala
// roc 2008-06 0041a250  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a250
//

extern "C" void __cdecl release(void *);
int __stdcall closeHandle(void *);

struct Handle
{
    void *value;
    __forceinline ~Handle();
};

struct Storage
{
    void *data;
    unsigned char reserved[28];
    __forceinline ~Storage();
};

struct Entries : Storage
{
    void clear();
    __forceinline ~Entries();
};

struct Lock
{
    void *object;
    bool criticalSection;
    ~Lock();
};

struct S
{
    unsigned char reserved0[16];
    Handle handle;
    unsigned char reserved1[20];
    Entries entries;
    Lock lock;
    virtual ~S();
};

__forceinline Handle::~Handle()
{
    if (value)
        closeHandle(value);
}

__forceinline Storage::~Storage()
{
    void* d = data;
    release(d);
}

__forceinline Entries::~Entries()
{
    clear();
}

S::~S()
{
}

