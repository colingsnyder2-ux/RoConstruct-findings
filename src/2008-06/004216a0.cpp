// from server: 100% by atomic.potato
// roc 2008-06 004216a0  unit: RBX::VInstance::?$MarshaledListener  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004216a0
//
// 004216a0  51                   push ecx
// 004216a1  56                   push esi
// 004216a2  57                   push edi
// 004216a3  6a20                 push 0x20
// 004216a5  8bf9                 mov edi, ecx
// 004216a7  e874f22700           call 0x6a0920
// 004216ac  83c404               add esp, 4
// 004216af  85c0                 test eax, eax
// 004216b1  745d                 je 0x421710
// 004216b3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004216b7  83ec10               sub esp, 0x10
// 004216ba  8bd4                 mov edx, esp
// 004216bc  890a                 mov dword ptr [edx], ecx
// 004216be  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004216c2  894a04               mov dword ptr [edx + 4], ecx
// 004216c5  8b742428             mov esi, dword ptr [esp + 0x28]
// 004216c9  89642418             mov dword ptr [esp + 0x18], esp
// 004216cd  85f6                 test esi, esi
// 004216cf  740c                 je 0x4216dd
// 004216d1  83c604               add esi, 4
// 004216d4  b901000000           mov ecx, 1
// 004216d9  f00fc10e             lock xadd dword ptr [esi], ecx
// 004216dd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004216e1  894a08               mov dword ptr [edx + 8], ecx
// 004216e4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004216e8  894a0c               mov dword ptr [edx + 0xc], ecx
// 004216eb  8b542430             mov edx, dword ptr [esp + 0x30]
// 004216ef  85d2                 test edx, edx
// 004216f1  740c                 je 0x4216ff
// 004216f3  83c204               add edx, 4
// 004216f6  b901000000           mov ecx, 1
// 004216fb  f00fc10a             lock xadd dword ptr [edx], ecx
// 004216ff  8b542420             mov edx, dword ptr [esp + 0x20]
// 00421703  52                   push edx
// 00421704  57                   push edi
// 00421705  8bc8                 mov ecx, eax
// 00421707  e834fbffff           call 0x421240
// 0042170c  8bf0                 mov esi, eax
// 0042170e  eb02                 jmp 0x421712
// 00421710  33f6                 xor esi, esi
// 00421712  8d442410             lea eax, [esp + 0x10]
// 00421716  50                   push eax
// 00421717  8d4f04               lea ecx, [edi + 4]
// 0042171a  89742414             mov dword ptr [esp + 0x14], esi
// 0042171e  e87dfcffff           call 0x4213a0
// 00421723  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00421726  56                   push esi
// 00421727  e824120100           call 0x432950
// 0042172c  8d4c2414             lea ecx, [esp + 0x14]
// 00421730  e82b150000           call 0x422c60
// 00421735  5f                   pop edi
// 00421736  5e                   pop esi
// 00421737  59                   pop ecx
// 00421738  c21400               ret 0x14

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
