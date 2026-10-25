// from server: 100% by king_originala
// roc 2008-06 00442a30  unit: CDataModelPropGrid  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442a30
//
// 00442a30  6aff                 push -1
// 00442a32  68be0c7c00           push 0x7c0cbe
// 00442a37  64a100000000         mov eax, dword ptr fs:[0]
// 00442a3d  50                   push eax
// 00442a3e  64892500000000       mov dword ptr fs:[0], esp
// 00442a45  51                   push ecx
// 00442a46  53                   push ebx
// 00442a47  56                   push esi
// 00442a48  8bf1                 mov esi, ecx
// 00442a4a  89742408             mov dword ptr [esp + 8], esi
// 00442a4e  c7064c568100         mov dword ptr [esi], 0x81564c
// 00442a54  c786880100003c568100 mov dword ptr [esi + 0x188], 0x81563c
// 00442a5e  8d8e18020000         lea ecx, [esi + 0x218]
// 00442a64  c744241405000000     mov dword ptr [esp + 0x14], 5
// 00442a6c  e86ffbffff           call 0x4425e0
// 00442a71  8d8ef8010000         lea ecx, [esi + 0x1f8]
// 00442a77  c644241404           mov byte ptr [esp + 0x14], 4
// 00442a7c  e8af872000           call 0x64b230
// 00442a81  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 00442a87  c644241403           mov byte ptr [esp + 0x14], 3
// 00442a8c  e8ef121100           call 0x553d80
// 00442a91  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 00442a97  c644241402           mov byte ptr [esp + 0x14], 2
// 00442a9c  e8df121100           call 0x553d80
// 00442aa1  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00442aa7  33db                 xor ebx, ebx
// 00442aa9  3bc3                 cmp eax, ebx
// 00442aab  7409                 je 0x442ab6
// 00442aad  50                   push eax
// 00442aae  e8c7db2500           call 0x6a067a
// 00442ab3  83c404               add esp, 4
// 00442ab6  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 00442abc  50                   push eax
// 00442abd  899ea8010000         mov dword ptr [esi + 0x1a8], ebx
// 00442ac3  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 00442ac9  899eb0010000         mov dword ptr [esi + 0x1b0], ebx
// 00442acf  e8a6db2500           call 0x6a067a
// 00442ad4  83c404               add esp, 4
// 00442ad7  8d8e8c010000         lea ecx, [esi + 0x18c]
// 00442add  885c2414             mov byte ptr [esp + 0x14], bl
// 00442ae1  e8ca211500           call 0x594cb0
// 00442ae6  8bce                 mov ecx, esi
// 00442ae8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00442af0  e8bb772b00           call 0x6fa2b0
// 00442af5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00442af9  5e                   pop esi
// 00442afa  5b                   pop ebx
// 00442afb  64890d00000000       mov dword ptr fs:[0], ecx
// 00442b02  83c410               add esp, 0x10
// 00442b05  c3                   ret 

extern "C" void __cdecl releaseMemory(void *) throw();

struct Base {
    virtual ~Base();
    char storage[0x184];
};

struct Interface {
    virtual void method();
};

struct Sync {
    char storage[0x10];
    ~Sync();
};

struct Memory {
    void *buffer;
    char storage[8];
    void *first;
    void *last;
    void *limit;
    ~Memory();
};

struct AggregateA {
    char storage[0x20];
    ~AggregateA();
};

struct AggregateB {
    char storage[0x24];
    ~AggregateB();
};

struct Sleep {
    char storage[0x20];
    ~Sleep();
};

struct Selection {
    ~Selection();
};

struct CDataModelPropGrid : Base, Interface {
    Sync sync;
    Memory memory;
    AggregateA aggregateA;
    AggregateB aggregateB;
    Sleep sleep;
    Selection selection;

    virtual void method();
    virtual ~CDataModelPropGrid();
};

__forceinline Memory::~Memory()
{
    if (first)
        releaseMemory(first);
    first = 0;
    last = 0;
    limit = 0;
    releaseMemory(buffer);
}

CDataModelPropGrid::~CDataModelPropGrid()
{
}
