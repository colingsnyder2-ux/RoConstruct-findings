// from server: 100% by king_originala
// roc 2008-06 00499630  unit: RBX::Network::VPlayers::?$SignalDesc  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499630
//
// 00499630  6aff                 push -1
// 00499632  681a6f7c00           push 0x7c6f1a
// 00499637  64a100000000         mov eax, dword ptr fs:[0]
// 0049963d  50                   push eax
// 0049963e  64892500000000       mov dword ptr fs:[0], esp
// 00499645  51                   push ecx
// 00499646  53                   push ebx
// 00499647  56                   push esi
// 00499648  8bf1                 mov esi, ecx
// 0049964a  89742408             mov dword ptr [esp + 8], esi
// 0049964e  c706bc278200         mov dword ptr [esi], 0x8227bc
// 00499654  c74610b0278200       mov dword ptr [esi + 0x10], 0x8227b0
// 0049965b  c74614a8278200       mov dword ptr [esi + 0x14], 0x8227a8
// 00499662  c74620a0278200       mov dword ptr [esi + 0x20], 0x8227a0
// 00499669  c7462490278200       mov dword ptr [esi + 0x24], 0x822790
// 00499670  c7464480278200       mov dword ptr [esi + 0x44], 0x822780
// 00499677  c7466470278200       mov dword ptr [esi + 0x64], 0x822770
// 0049967e  c7868400000060278200 mov dword ptr [esi + 0x84], 0x822760
// 00499688  c786a400000050278200 mov dword ptr [esi + 0xa4], 0x822750
// 00499692  c786c400000040278200 mov dword ptr [esi + 0xc4], 0x822740
// 0049969c  c7863001000030278200 mov dword ptr [esi + 0x130], 0x822730
// 004996a6  c7865001000020278200 mov dword ptr [esi + 0x150], 0x822720
// 004996b0  c7867001000014278200 mov dword ptr [esi + 0x170], 0x822714
// 004996ba  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 004996c0  33db                 xor ebx, ebx
// 004996c2  c744241407000000     mov dword ptr [esp + 0x14], 7
// 004996ca  3bcb                 cmp ecx, ebx
// 004996cc  7411                 je 0x4996df
// 004996ce  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 004996d4  8b11                 mov edx, dword ptr [ecx]
// 004996d6  50                   push eax
// 004996d7  8b82ec000000         mov eax, dword ptr [edx + 0xec]
// 004996dd  ffd0                 call eax
// 004996df  57                   push edi
// 004996e0  899ea8010000         mov dword ptr [esi + 0x1a8], ebx
// 004996e6  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 004996ec  c644241806           mov byte ptr [esp + 0x18], 6
// 004996f1  3bfb                 cmp edi, ebx
// 004996f3  742a                 je 0x49971f
// 004996f5  8d4f04               lea ecx, [edi + 4]
// 004996f8  83caff               or edx, 0xffffffff
// 004996fb  f00fc111             lock xadd dword ptr [ecx], edx
// 004996ff  751e                 jne 0x49971f
// 00499701  8b07                 mov eax, dword ptr [edi]
// 00499703  8b5004               mov edx, dword ptr [eax + 4]
// 00499706  8bcf                 mov ecx, edi
// 00499708  ffd2                 call edx
// 0049970a  8d4708               lea eax, [edi + 8]
// 0049970d  83c9ff               or ecx, 0xffffffff
// 00499710  f00fc108             lock xadd dword ptr [eax], ecx
// 00499714  7509                 jne 0x49971f
// 00499716  8b17                 mov edx, dword ptr [edi]
// 00499718  8b4208               mov eax, dword ptr [edx + 8]
// 0049971b  8bcf                 mov ecx, edi
// 0049971d  ffd0                 call eax
// 0049971f  8bbe9c010000         mov edi, dword ptr [esi + 0x19c]
// 00499725  c644241805           mov byte ptr [esp + 0x18], 5
// 0049972a  3bfb                 cmp edi, ebx
// 0049972c  742a                 je 0x499758
// 0049972e  8d4f04               lea ecx, [edi + 4]
// 00499731  83caff               or edx, 0xffffffff
// 00499734  f00fc111             lock xadd dword ptr [ecx], edx
// 00499738  751e                 jne 0x499758
// 0049973a  8b07                 mov eax, dword ptr [edi]
// 0049973c  8b5004               mov edx, dword ptr [eax + 4]
// 0049973f  8bcf                 mov ecx, edi
// 00499741  ffd2                 call edx
// 00499743  8d4708               lea eax, [edi + 8]
// 00499746  83c9ff               or ecx, 0xffffffff
// 00499749  f00fc108             lock xadd dword ptr [eax], ecx
// 0049974d  7509                 jne 0x499758
// 0049974f  8b17                 mov edx, dword ptr [edi]
// 00499751  8b4208               mov eax, dword ptr [edx + 8]
// 00499754  8bcf                 mov ecx, edi
// 00499756  ffd0                 call eax
// 00499758  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0049975e  c644241804           mov byte ptr [esp + 0x18], 4
// 00499763  3bcb                 cmp ecx, ebx
// 00499765  7408                 je 0x49976f
// 00499767  8b11                 mov edx, dword ptr [ecx]
// 00499769  8b02                 mov eax, dword ptr [edx]
// 0049976b  6a01                 push 1
// 0049976d  ffd0                 call eax
// 0049976f  8d8e78010000         lea ecx, [esi + 0x178]
// 00499775  c644241803           mov byte ptr [esp + 0x18], 3
// 0049977a  e841fcffff           call 0x4993c0
// 0049977f  8bbe74010000         mov edi, dword ptr [esi + 0x174]
// 00499785  c644241802           mov byte ptr [esp + 0x18], 2
// 0049978a  3bfb                 cmp edi, ebx
// 0049978c  7410                 je 0x49979e
// 0049978e  8bcf                 mov ecx, edi
// 00499790  e82bdaffff           call 0x4971c0
// 00499795  57                   push edi
// 00499796  e8df6e2000           call 0x6a067a
// 0049979b  83c404               add esp, 4
// 0049979e  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 004997a4  5f                   pop edi
// 004997a5  3bc3                 cmp eax, ebx
// 004997a7  7409                 je 0x4997b2
// 004997a9  50                   push eax
// 004997aa  e8cb6e2000           call 0x6a067a
// 004997af  83c404               add esp, 4
// 004997b2  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 004997b8  50                   push eax
// 004997b9  899e60010000         mov dword ptr [esi + 0x160], ebx
// 004997bf  899e64010000         mov dword ptr [esi + 0x164], ebx
// 004997c5  899e68010000         mov dword ptr [esi + 0x168], ebx
// 004997cb  e8aa6e2000           call 0x6a067a
// 004997d0  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 004997d6  83c404               add esp, 4
// 004997d9  3bc3                 cmp eax, ebx
// 004997db  7409                 je 0x4997e6
// 004997dd  50                   push eax
// 004997de  e8976e2000           call 0x6a067a
// 004997e3  83c404               add esp, 4
// 004997e6  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 004997ec  50                   push eax
// 004997ed  899e40010000         mov dword ptr [esi + 0x140], ebx
// 004997f3  899e44010000         mov dword ptr [esi + 0x144], ebx
// 004997f9  899e48010000         mov dword ptr [esi + 0x148], ebx
// 004997ff  e8766e2000           call 0x6a067a
// 00499804  83c404               add esp, 4
// 00499807  8bce                 mov ecx, esi
// 00499809  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00499811  e82a0d0c00           call 0x55a540
// 00499816  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049981a  5e                   pop esi
// 0049981b  5b                   pop ebx
// 0049981c  64890d00000000       mov dword ptr fs:[0], ecx
// 00499823  83c410               add esp, 0x10
// 00499826  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void __cdecl operator delete(void*) throw();

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* volatile control;
    ~Shared();
};

struct Object {
    virtual ~Object();
};

struct OwnedObject {
    Object* volatile object;
    ~OwnedObject();
};

struct Node {
    ~Node();
};

struct OwnedNode {
    volatile unsigned long table;
    Node* object;
    ~OwnedNode();
};

struct Resource {
    volatile unsigned long table;
    void* volatile allocation;
    unsigned long reserved[2];
    void* buffer;
    unsigned long size;
    unsigned long capacity;
    unsigned long padding;
    ~Resource() throw();
};

struct Member {
    unsigned char storage[28];
    ~Member();
};

struct Base {
    volatile unsigned long table0;
    unsigned char padding04[12];
    volatile unsigned long table10;
    volatile unsigned long table14;
    unsigned char padding18[8];
    volatile unsigned long table20;
    volatile unsigned long table24;
    unsigned char padding28[28];
    volatile unsigned long table44;
    unsigned char padding48[28];
    volatile unsigned long table64;
    unsigned char padding68[28];
    volatile unsigned long table84;
    unsigned char padding88[28];
    volatile unsigned long tableA4;
    unsigned char paddingA8[28];
    volatile unsigned long tableC4;
    unsigned char paddingC8[104];
    ~Base();
};

#define SLOT(n) virtual void slot##n();
struct Callback {
    SLOT(0) SLOT(1) SLOT(2) SLOT(3) SLOT(4)
    SLOT(5) SLOT(6) SLOT(7) SLOT(8) SLOT(9)
    SLOT(10) SLOT(11) SLOT(12) SLOT(13) SLOT(14)
    SLOT(15) SLOT(16) SLOT(17) SLOT(18) SLOT(19)
    SLOT(20) SLOT(21) SLOT(22) SLOT(23) SLOT(24)
    SLOT(25) SLOT(26) SLOT(27) SLOT(28) SLOT(29)
    SLOT(30) SLOT(31) SLOT(32) SLOT(33) SLOT(34)
    SLOT(35) SLOT(36) SLOT(37) SLOT(38) SLOT(39)
    SLOT(40) SLOT(41) SLOT(42) SLOT(43) SLOT(44)
    SLOT(45) SLOT(46) SLOT(47) SLOT(48) SLOT(49)
    SLOT(50) SLOT(51) SLOT(52) SLOT(53) SLOT(54)
    SLOT(55) SLOT(56) SLOT(57) SLOT(58)
    virtual void notify(Object*);
};
#undef SLOT

struct S : Base {
    Resource resource130;
    Resource resource150;
    OwnedNode node170;
    Member member178;
    OwnedObject object194;
    Shared shared198;
    Shared shared1A0;
    Callback* volatile callback1A8;
    ~S();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline OwnedObject::~OwnedObject()
{
    Object* p = object;
    if (p)
        delete p;
}

__forceinline OwnedNode::~OwnedNode()
{
    if (object)
        delete object;
}

__forceinline Resource::~Resource() throw()
{
    if (buffer)
        operator delete(buffer);
    void* p = allocation;
    buffer = 0;
    size = 0;
    capacity = 0;
    operator delete(p);
}

S::~S()
{
    table0 = 0x8227bc;
    table10 = 0x8227b0;
    table14 = 0x8227a8;
    table20 = 0x8227a0;
    table24 = 0x822790;
    table44 = 0x822780;
    table64 = 0x822770;
    table84 = 0x822760;
    tableA4 = 0x822750;
    tableC4 = 0x822740;
    resource130.table = 0x822730;
    resource150.table = 0x822720;
    node170.table = 0x822714;

    Callback* p = callback1A8;
    if (p) {
        Object* argument = object194.object;
        p->notify(argument);
    }
    callback1A8 = 0;
}
