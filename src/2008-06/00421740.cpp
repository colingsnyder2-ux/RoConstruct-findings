// from server: 100% by colin
// roc 2008-06 00421740  unit: RBX::VInstance::?$MarshaledListener  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421740
//
// 00421740  6aff                 push -1
// 00421742  688b347c00           push 0x7c348b
// 00421747  64a100000000         mov eax, dword ptr fs:[0]
// 0042174d  50                   push eax
// 0042174e  64892500000000       mov dword ptr fs:[0], esp
// 00421755  51                   push ecx
// 00421756  56                   push esi
// 00421757  8bf1                 mov esi, ecx
// 00421759  57                   push edi
// 0042175a  89742408             mov dword ptr [esp + 8], esi
// 0042175e  c7066cf88000         mov dword ptr [esi], 0x80f86c
// 00421764  33ff                 xor edi, edi
// 00421766  897c2414             mov dword ptr [esp + 0x14], edi
// 0042176a  e8a15f0300           call 0x457710
// 0042176f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00421772  50                   push eax
// 00421773  e858140100           call 0x432bd0
// 00421778  8b4610               mov eax, dword ptr [esi + 0x10]
// 0042177b  83c404               add esp, 4
// 0042177e  3bc7                 cmp eax, edi
// 00421780  7409                 je 0x42178b
// 00421782  50                   push eax
// 00421783  e8f2ee2700           call 0x6a067a
// 00421788  83c404               add esp, 4
// 0042178b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042178e  51                   push ecx
// 0042178f  897e10               mov dword ptr [esi + 0x10], edi
// 00421792  897e14               mov dword ptr [esi + 0x14], edi
// 00421795  897e18               mov dword ptr [esi + 0x18], edi
// 00421798  e8ddee2700           call 0x6a067a
// 0042179d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004217a1  83c404               add esp, 4
// 004217a4  5f                   pop edi
// 004217a5  5e                   pop esi
// 004217a6  64890d00000000       mov dword ptr fs:[0], ecx
// 004217ad  83c410               add esp, 0x10
// 004217b0  c3                   ret 

extern "C" void __cdecl release(void*);
extern "C" void __cdecl deallocate(void*);

struct Storage
{
    void* allocation;
    unsigned char reserved0[8];
    void* begin;
    void* end;
    void* capacity;
    unsigned char reserved1[4];
    void* owner;

    ~Storage();
};

__forceinline Storage::~Storage()
{
    release(owner);
    if (begin)
        deallocate(begin);
    begin = 0;
    end = 0;
    capacity = 0;
    deallocate(allocation);
}

struct S
{
    virtual ~S();
    Storage storage;

    void disconnect();
};

S::~S()
{
    disconnect();
}
