// from server: 100% by king_originala
// roc 2008-06 0063be90  unit: RBX::VDebrisService::?$FactoryProduct  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063be90
//
// 0063be90  6aff                 push -1
// 0063be92  6898a67d00           push 0x7da698
// 0063be97  64a100000000         mov eax, dword ptr fs:[0]
// 0063be9d  50                   push eax
// 0063be9e  64892500000000       mov dword ptr fs:[0], esp
// 0063bea5  51                   push ecx
// 0063bea6  53                   push ebx
// 0063bea7  56                   push esi
// 0063bea8  57                   push edi
// 0063bea9  8bf1                 mov esi, ecx
// 0063beab  68f0119600           push 0x9611f0
// 0063beb0  89742410             mov dword ptr [esp + 0x10], esi
// 0063beb4  e8f7feffff           call 0x63bdb0
// 0063beb9  33db                 xor ebx, ebx
// 0063bebb  6a04                 push 4
// 0063bebd  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0063bec1  c706ec9a8400         mov dword ptr [esi], 0x849aec
// 0063bec7  c74610e09a8400       mov dword ptr [esi + 0x10], 0x849ae0
// 0063bece  c74614d89a8400       mov dword ptr [esi + 0x14], 0x849ad8
// 0063bed5  c74620d09a8400       mov dword ptr [esi + 0x20], 0x849ad0
// 0063bedc  c74624c09a8400       mov dword ptr [esi + 0x24], 0x849ac0
// 0063bee3  c74644b09a8400       mov dword ptr [esi + 0x44], 0x849ab0
// 0063beea  c74664a09a8400       mov dword ptr [esi + 0x64], 0x849aa0
// 0063bef1  c78684000000909a8400 mov dword ptr [esi + 0x84], 0x849a90
// 0063befb  c786a4000000809a8400 mov dword ptr [esi + 0xa4], 0x849a80
// 0063bf05  c786c4000000709a8400 mov dword ptr [esi + 0xc4], 0x849a70
// 0063bf0f  8dbe30010000         lea edi, [esi + 0x130]
// 0063bf15  e8064a0600           call 0x6a0920
// 0063bf1a  83c404               add esp, 4
// 0063bf1d  3bc3                 cmp eax, ebx
// 0063bf1f  7404                 je 0x63bf25
// 0063bf21  8938                 mov dword ptr [eax], edi
// 0063bf23  eb02                 jmp 0x63bf27
// 0063bf25  33c0                 xor eax, eax
// 0063bf27  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063bf2b  8907                 mov dword ptr [edi], eax
// 0063bf2d  895f10               mov dword ptr [edi + 0x10], ebx
// 0063bf30  895f14               mov dword ptr [edi + 0x14], ebx
// 0063bf33  895f18               mov dword ptr [edi + 0x18], ebx
// 0063bf36  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0063bf39  899e54010000         mov dword ptr [esi + 0x154], ebx
// 0063bf3f  5f                   pop edi
// 0063bf40  c786500100002c010000 mov dword ptr [esi + 0x150], 0x12c
// 0063bf4a  8bc6                 mov eax, esi
// 0063bf4c  5e                   pop esi
// 0063bf4d  5b                   pop ebx
// 0063bf4e  64890d00000000       mov dword ptr fs:[0], ecx
// 0063bf55  83c410               add esp, 0x10
// 0063bf58  c3                   ret 

void* __cdecl operator new(unsigned int);

extern const char serviceName[];
extern unsigned int table0[], table10[], table14[], table20[];
extern unsigned int table24[], table44[], table64[], table84[];
extern unsigned int tableA4[], tableC4[];

struct Base
{
    unsigned int data[76];
    Base(const char*);
    ~Base();
};

struct Node
{
    void* owner;
    Node(void*);
};

inline Node::Node(void* p) : owner(p)
{
}

struct Container
{
    Node* head;
    unsigned int reserved[3];
    unsigned int count;
    unsigned int capacity;
    unsigned int first;
    unsigned int last;

    void initialize();
};

inline void Container::initialize()
{
    head = new Node(this);
    count = 0;
    capacity = 0;
    first = 0;
    last = 0;
}

struct S : Base
{
    Container container;
    int maxItems;
    unsigned int pending;

    S();
};

S::S() : Base(serviceName)
{
    data[0] = reinterpret_cast<unsigned int>(table0);
    data[4] = reinterpret_cast<unsigned int>(table10);
    data[5] = reinterpret_cast<unsigned int>(table14);
    data[8] = reinterpret_cast<unsigned int>(table20);
    data[9] = reinterpret_cast<unsigned int>(table24);
    data[17] = reinterpret_cast<unsigned int>(table44);
    data[25] = reinterpret_cast<unsigned int>(table64);
    data[33] = reinterpret_cast<unsigned int>(table84);
    data[41] = reinterpret_cast<unsigned int>(tableA4);
    data[49] = reinterpret_cast<unsigned int>(tableC4);

    container.initialize();
    pending = 0;
    maxItems = 300;
}
