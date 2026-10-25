// from server: 100% by king_originala
// roc 2008-06 004217c0  unit: RBX::VInstance::?$MarshaledListener  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004217c0
//
// 004217c0  51                   push ecx
// 004217c1  56                   push esi
// 004217c2  57                   push edi
// 004217c3  6a20                 push 0x20
// 004217c5  8bf9                 mov edi, ecx
// 004217c7  e854f12700           call 0x6a0920
// 004217cc  83c404               add esp, 4
// 004217cf  85c0                 test eax, eax
// 004217d1  745d                 je 0x421830
// 004217d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004217d7  83ec10               sub esp, 0x10
// 004217da  8bd4                 mov edx, esp
// 004217dc  890a                 mov dword ptr [edx], ecx
// 004217de  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004217e2  894a04               mov dword ptr [edx + 4], ecx
// 004217e5  8b742428             mov esi, dword ptr [esp + 0x28]
// 004217e9  89642418             mov dword ptr [esp + 0x18], esp
// 004217ed  85f6                 test esi, esi
// 004217ef  740c                 je 0x4217fd
// 004217f1  83c604               add esi, 4
// 004217f4  b901000000           mov ecx, 1
// 004217f9  f00fc10e             lock xadd dword ptr [esi], ecx
// 004217fd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00421801  894a08               mov dword ptr [edx + 8], ecx
// 00421804  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00421808  894a0c               mov dword ptr [edx + 0xc], ecx
// 0042180b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0042180f  85d2                 test edx, edx
// 00421811  740c                 je 0x42181f
// 00421813  83c204               add edx, 4
// 00421816  b901000000           mov ecx, 1
// 0042181b  f00fc10a             lock xadd dword ptr [edx], ecx
// 0042181f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00421823  52                   push edx
// 00421824  57                   push edi
// 00421825  8bc8                 mov ecx, eax
// 00421827  e8c4faffff           call 0x4212f0
// 0042182c  8bf0                 mov esi, eax
// 0042182e  eb02                 jmp 0x421832
// 00421830  33f6                 xor esi, esi
// 00421832  8d442410             lea eax, [esp + 0x10]
// 00421836  50                   push eax
// 00421837  8d4f04               lea ecx, [edi + 4]
// 0042183a  89742414             mov dword ptr [esp + 0x14], esi
// 0042183e  e85dfbffff           call 0x4213a0
// 00421843  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00421846  56                   push esi
// 00421847  e804110100           call 0x432950
// 0042184c  8d4c2414             lea ecx, [esp + 0x14]
// 00421850  e80b140000           call 0x422c60
// 00421855  5f                   pop edi
// 00421856  5e                   pop esi
// 00421857  59                   pop ecx
// 00421858  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

void* __cdecl operator new(unsigned int) throw();

struct RefCount {
    long reserved;
    volatile long count;

    void addRef() throw();
};

__forceinline void RefCount::addRef() throw()
{
    volatile long* p = &count;
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(p, 1);
}

struct Bundle {
    void* first;
    RefCount* firstCount;
    void* second;
    RefCount* secondCount;

    Bundle(const Bundle& other) throw();
    ~Bundle() throw();
};

__forceinline Bundle::Bundle(const Bundle& other) throw()
{
    first = other.first;
    firstCount = other.firstCount;
    if (firstCount)
        firstCount->addRef();

    second = other.second;
    secondCount = other.secondCount;
    if (secondCount)
        secondCount->addRef();
}

struct Listener;

struct Node {
    char storage[32];
    Node(Listener* owner, int arg, Bundle value) throw();
};

struct Queue {
    char storage[28];
    void append(int* value) throw();
};

struct Messenger {
    void* field0;
    void* field4;
    void method(int arg) throw();
};

struct Listener {
    int reserved;
    Queue queue;
    Messenger* messenger;

    void method(int arg, Bundle value) throw();
};

void Listener::method(int arg, Bundle value) throw()
{
    int node = reinterpret_cast<int>(new Node(this, arg, value));
    arg = node;
    queue.append(&arg);
    messenger->method(node);
}
