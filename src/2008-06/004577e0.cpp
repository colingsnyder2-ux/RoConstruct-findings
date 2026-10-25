// from server: 100% by king_originala
// roc 2008-06 004577e0  unit: RBX::VInstance::?$MarshaledListener::EventData  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004577e0
//
// 004577e0  6aff                 push -1
// 004577e2  688b347c00           push 0x7c348b
// 004577e7  64a100000000         mov eax, dword ptr fs:[0]
// 004577ed  50                   push eax
// 004577ee  64892500000000       mov dword ptr fs:[0], esp
// 004577f5  51                   push ecx
// 004577f6  56                   push esi
// 004577f7  8bf1                 mov esi, ecx
// 004577f9  57                   push edi
// 004577fa  89742408             mov dword ptr [esp + 8], esi
// 004577fe  c70624888100         mov dword ptr [esi], 0x818824
// 00457804  33ff                 xor edi, edi
// 00457806  897c2414             mov dword ptr [esp + 0x14], edi
// 0045780a  e801ffffff           call 0x457710
// 0045780f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00457812  50                   push eax
// 00457813  e8b8b3fdff           call 0x432bd0
// 00457818  8b4610               mov eax, dword ptr [esi + 0x10]
// 0045781b  83c404               add esp, 4
// 0045781e  3bc7                 cmp eax, edi
// 00457820  7409                 je 0x45782b
// 00457822  50                   push eax
// 00457823  e8528e2400           call 0x6a067a
// 00457828  83c404               add esp, 4
// 0045782b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045782e  51                   push ecx
// 0045782f  897e10               mov dword ptr [esi + 0x10], edi
// 00457832  897e14               mov dword ptr [esi + 0x14], edi
// 00457835  897e18               mov dword ptr [esi + 0x18], edi
// 00457838  e83d8e2400           call 0x6a067a
// 0045783d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00457841  83c404               add esp, 4
// 00457844  5f                   pop edi
// 00457845  5e                   pop esi
// 00457846  64890d00000000       mov dword ptr fs:[0], ecx
// 0045784d  83c410               add esp, 0x10
// 00457850  c3                   ret 

extern "C" void __cdecl release(void*);
extern "C" void __cdecl deallocate(void*);

struct Storage
{
    void* first;
    unsigned int reserved[2];
    void* begin;
    void* end;
    void* limit;
    unsigned int extra;
    void* last;

    ~Storage();
};

inline Storage::~Storage()
{
    release(last);
    if (begin)
        deallocate(begin);
    begin = 0;
    end = 0;
    limit = 0;
    deallocate(first);
}

struct S : Storage
{
    virtual ~S();
    void cleanup();
};

S::~S()
{
    cleanup();
}
