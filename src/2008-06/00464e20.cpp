// from server: 100% by king_originala
// roc 2008-06 00464e20  unit: RBX::VRunService::?$MarshaledListener::EventData  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464e20
//
// 00464e20  6aff                 push -1
// 00464e22  688b347c00           push 0x7c348b
// 00464e27  64a100000000         mov eax, dword ptr fs:[0]
// 00464e2d  50                   push eax
// 00464e2e  64892500000000       mov dword ptr fs:[0], esp
// 00464e35  51                   push ecx
// 00464e36  56                   push esi
// 00464e37  8bf1                 mov esi, ecx
// 00464e39  57                   push edi
// 00464e3a  89742408             mov dword ptr [esp + 8], esi
// 00464e3e  c70668b38100         mov dword ptr [esi], 0x81b368
// 00464e44  33ff                 xor edi, edi
// 00464e46  897c2414             mov dword ptr [esp + 0x14], edi
// 00464e4a  e8c128ffff           call 0x457710
// 00464e4f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00464e52  50                   push eax
// 00464e53  e878ddfcff           call 0x432bd0
// 00464e58  8b4610               mov eax, dword ptr [esi + 0x10]
// 00464e5b  83c404               add esp, 4
// 00464e5e  3bc7                 cmp eax, edi
// 00464e60  7409                 je 0x464e6b
// 00464e62  50                   push eax
// 00464e63  e812b82300           call 0x6a067a
// 00464e68  83c404               add esp, 4
// 00464e6b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00464e6e  51                   push ecx
// 00464e6f  897e10               mov dword ptr [esi + 0x10], edi
// 00464e72  897e14               mov dword ptr [esi + 0x14], edi
// 00464e75  897e18               mov dword ptr [esi + 0x18], edi
// 00464e78  e8fdb72300           call 0x6a067a
// 00464e7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00464e81  83c404               add esp, 4
// 00464e84  5f                   pop edi
// 00464e85  5e                   pop esi
// 00464e86  64890d00000000       mov dword ptr fs:[0], ecx
// 00464e8d  83c410               add esp, 0x10
// 00464e90  c3                   ret 

void __cdecl operator delete(void*) throw();
extern "C" void __cdecl release(void*);

struct Storage
{
    void* data;
    unsigned int reserved[2];
    ~Storage();
};

inline Storage::~Storage()
{
    operator delete(data);
}

struct S
{
    virtual ~S();
    void cleanup();

    Storage storage;
    void* first;
    void* last;
    void* limit;
    void* object;
    void* control;
};

S::~S()
{
    cleanup();
    release(control);

    if (first != 0)
        operator delete(first);

    first = 0;
    last = 0;
    limit = 0;
}
