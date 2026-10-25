// from server: 100% by colin
// roc 2008-06 00464f00  unit: RBX::VInstance::?$MarshaledListener  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464f00
//
// 00464f00  6aff                 push -1
// 00464f02  688b347c00           push 0x7c348b
// 00464f07  64a100000000         mov eax, dword ptr fs:[0]
// 00464f0d  50                   push eax
// 00464f0e  64892500000000       mov dword ptr fs:[0], esp
// 00464f15  51                   push ecx
// 00464f16  56                   push esi
// 00464f17  8bf1                 mov esi, ecx
// 00464f19  57                   push edi
// 00464f1a  89742408             mov dword ptr [esp + 8], esi
// 00464f1e  c7067cb38100         mov dword ptr [esi], 0x81b37c
// 00464f24  33ff                 xor edi, edi
// 00464f26  897c2414             mov dword ptr [esp + 0x14], edi
// 00464f2a  e8e127ffff           call 0x457710
// 00464f2f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00464f32  50                   push eax
// 00464f33  e898dcfcff           call 0x432bd0
// 00464f38  8b4610               mov eax, dword ptr [esi + 0x10]
// 00464f3b  83c404               add esp, 4
// 00464f3e  3bc7                 cmp eax, edi
// 00464f40  7409                 je 0x464f4b
// 00464f42  50                   push eax
// 00464f43  e832b72300           call 0x6a067a
// 00464f48  83c404               add esp, 4
// 00464f4b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00464f4e  51                   push ecx
// 00464f4f  897e10               mov dword ptr [esi + 0x10], edi
// 00464f52  897e14               mov dword ptr [esi + 0x14], edi
// 00464f55  897e18               mov dword ptr [esi + 0x18], edi
// 00464f58  e81db72300           call 0x6a067a
// 00464f5d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00464f61  83c404               add esp, 4
// 00464f64  5f                   pop edi
// 00464f65  5e                   pop esi
// 00464f66  64890d00000000       mov dword ptr fs:[0], ecx
// 00464f6d  83c410               add esp, 0x10
// 00464f70  c3                   ret 

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
