// from server: 100% by king_originala
// roc 2008-06 00421620  unit: RBX::VInstance::?$MarshaledListener::EventData  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421620
//
// 00421620  6aff                 push -1
// 00421622  688b347c00           push 0x7c348b
// 00421627  64a100000000         mov eax, dword ptr fs:[0]
// 0042162d  50                   push eax
// 0042162e  64892500000000       mov dword ptr fs:[0], esp
// 00421635  51                   push ecx
// 00421636  56                   push esi
// 00421637  8bf1                 mov esi, ecx
// 00421639  57                   push edi
// 0042163a  89742408             mov dword ptr [esp + 8], esi
// 0042163e  c7064cf88000         mov dword ptr [esi], 0x80f84c
// 00421644  33ff                 xor edi, edi
// 00421646  897c2414             mov dword ptr [esp + 0x14], edi
// 0042164a  e8c1600300           call 0x457710
// 0042164f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00421652  50                   push eax
// 00421653  e878150100           call 0x432bd0
// 00421658  8b4610               mov eax, dword ptr [esi + 0x10]
// 0042165b  83c404               add esp, 4
// 0042165e  3bc7                 cmp eax, edi
// 00421660  7409                 je 0x42166b
// 00421662  50                   push eax
// 00421663  e812f02700           call 0x6a067a
// 00421668  83c404               add esp, 4
// 0042166b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042166e  51                   push ecx
// 0042166f  897e10               mov dword ptr [esi + 0x10], edi
// 00421672  897e14               mov dword ptr [esi + 0x14], edi
// 00421675  897e18               mov dword ptr [esi + 0x18], edi
// 00421678  e8fdef2700           call 0x6a067a
// 0042167d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00421681  83c404               add esp, 4
// 00421684  5f                   pop edi
// 00421685  5e                   pop esi
// 00421686  64890d00000000       mov dword ptr fs:[0], ecx
// 0042168d  83c410               add esp, 0x10
// 00421690  c3                   ret 

extern void __cdecl release_00432bd0(void*);
extern void __cdecl deallocate_006a067a(void*) throw();

struct Allocation
{
    void* pointer;
    ~Allocation() throw();
};

struct EventData
{
    virtual ~EventData();
    void cleanup();

    Allocation allocation;
    unsigned int reserved08;
    unsigned int reserved0C;
    void* first;
    void* last;
    void* limit;
    unsigned int reserved1C;
    void* reference;
};

inline Allocation::~Allocation() throw()
{
    deallocate_006a067a(pointer);
}

EventData::~EventData()
{
    cleanup();
    release_00432bd0(reference);
    if (first)
        deallocate_006a067a(first);
    first = 0;
    last = 0;
    limit = 0;
}
