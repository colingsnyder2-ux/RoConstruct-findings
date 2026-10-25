// from server: 100% by king_originala
// roc 2008-06 004578f0  unit: RBX::VInstance::?$MarshaledListener  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004578f0
//
// 004578f0  6aff                 push -1
// 004578f2  688b347c00           push 0x7c348b
// 004578f7  64a100000000         mov eax, dword ptr fs:[0]
// 004578fd  50                   push eax
// 004578fe  64892500000000       mov dword ptr fs:[0], esp
// 00457905  51                   push ecx
// 00457906  56                   push esi
// 00457907  8bf1                 mov esi, ecx
// 00457909  57                   push edi
// 0045790a  89742408             mov dword ptr [esp + 8], esi
// 0045790e  c70638888100         mov dword ptr [esi], 0x818838
// 00457914  33ff                 xor edi, edi
// 00457916  897c2414             mov dword ptr [esp + 0x14], edi
// 0045791a  e8f1fdffff           call 0x457710
// 0045791f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00457922  50                   push eax
// 00457923  e8a8b2fdff           call 0x432bd0
// 00457928  8b4610               mov eax, dword ptr [esi + 0x10]
// 0045792b  83c404               add esp, 4
// 0045792e  3bc7                 cmp eax, edi
// 00457930  7409                 je 0x45793b
// 00457932  50                   push eax
// 00457933  e8428d2400           call 0x6a067a
// 00457938  83c404               add esp, 4
// 0045793b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045793e  51                   push ecx
// 0045793f  897e10               mov dword ptr [esi + 0x10], edi
// 00457942  897e14               mov dword ptr [esi + 0x14], edi
// 00457945  897e18               mov dword ptr [esi + 0x18], edi
// 00457948  e82d8d2400           call 0x6a067a
// 0045794d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00457951  83c404               add esp, 4
// 00457954  5f                   pop edi
// 00457955  5e                   pop esi
// 00457956  64890d00000000       mov dword ptr fs:[0], ecx
// 0045795d  83c410               add esp, 0x10
// 00457960  c3                   ret 

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
