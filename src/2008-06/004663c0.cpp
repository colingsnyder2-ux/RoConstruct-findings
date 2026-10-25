// from server: 100% by king_originala
// roc 2008-06 004663c0  unit: RBX::VSelection::?$MarshaledListener::EventData  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004663c0
//
// 004663c0  6aff                 push -1
// 004663c2  688b347c00           push 0x7c348b
// 004663c7  64a100000000         mov eax, dword ptr fs:[0]
// 004663cd  50                   push eax
// 004663ce  64892500000000       mov dword ptr fs:[0], esp
// 004663d5  51                   push ecx
// 004663d6  56                   push esi
// 004663d7  8bf1                 mov esi, ecx
// 004663d9  57                   push edi
// 004663da  89742408             mov dword ptr [esp + 8], esi
// 004663de  c70658bb8100         mov dword ptr [esi], 0x81bb58
// 004663e4  33ff                 xor edi, edi
// 004663e6  897c2414             mov dword ptr [esp + 0x14], edi
// 004663ea  e82113ffff           call 0x457710
// 004663ef  8b4620               mov eax, dword ptr [esi + 0x20]
// 004663f2  50                   push eax
// 004663f3  e8d8c7fcff           call 0x432bd0
// 004663f8  8b4610               mov eax, dword ptr [esi + 0x10]
// 004663fb  83c404               add esp, 4
// 004663fe  3bc7                 cmp eax, edi
// 00466400  7409                 je 0x46640b
// 00466402  50                   push eax
// 00466403  e872a22300           call 0x6a067a
// 00466408  83c404               add esp, 4
// 0046640b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046640e  51                   push ecx
// 0046640f  897e10               mov dword ptr [esi + 0x10], edi
// 00466412  897e14               mov dword ptr [esi + 0x14], edi
// 00466415  897e18               mov dword ptr [esi + 0x18], edi
// 00466418  e85da22300           call 0x6a067a
// 0046641d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00466421  83c404               add esp, 4
// 00466424  5f                   pop edi
// 00466425  5e                   pop esi
// 00466426  64890d00000000       mov dword ptr fs:[0], ecx
// 0046642d  83c410               add esp, 0x10
// 00466430  c3                   ret 

extern "C" void __cdecl release(void *);
extern "C" void __cdecl deallocate(void *) throw();

struct Storage {
    void *allocation;
    unsigned int reserved[2];
    void *begin;
    void *end;
    void *capacity;
    unsigned int reserved2;
    void *object;

    ~Storage() throw();
};

struct S {
    Storage storage;

    virtual ~S();
    void detach();
};

inline Storage::~Storage() throw()
{
    if (begin)
        deallocate(begin);

    begin = 0;
    end = 0;
    capacity = 0;
    deallocate(allocation);
}

S::~S()
{
    detach();
    release(storage.object);
}
