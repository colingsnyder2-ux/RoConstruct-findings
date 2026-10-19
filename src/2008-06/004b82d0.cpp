// from server: 78% by colin
// from server: 73% by king_originala
// roc 2008-06 004b82d0  unit: RBX::Network::VReplicator::?$SignalDesc  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b82d0
//
// 004b82d0  64a100000000         mov eax, dword ptr fs:[0]
// 004b82d6  6aff                 push -1
// 004b82d8  68498c7c00           push 0x7c8c49
// 004b82dd  50                   push eax
// 004b82de  64892500000000       mov dword ptr fs:[0], esp
// 004b82e5  83ec2c               sub esp, 0x2c
// 004b82e8  53                   push ebx
// 004b82e9  56                   push esi
// 004b82ea  8bf1                 mov esi, ecx
// 004b82ec  8b8e882b0000         mov ecx, dword ptr [esi + 0x2b88]
// 004b82f2  57                   push edi
// 004b82f3  8dbe882b0000         lea edi, [esi + 0x2b88]
// 004b82f9  85c9                 test ecx, ecx
// 004b82fb  740e                 je 0x4b830b
// 004b82fd  6a00                 push 0
// 004b82ff  e8ec250a00           call 0x55a8f0
// 004b8304  8bcf                 mov ecx, edi
// 004b8306  e875ebf9ff           call 0x456e80
// 004b830b  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 004b830f  85db                 test ebx, ebx
// 004b8311  0f8460010000         je 0x4b8477
// 004b8317  6884438200           push 0x824384
// 004b831c  8d4c2420             lea ecx, [esp + 0x20]
// 004b8320  ff1558248000         call dword ptr [0x802458]
// 004b8326  8d44241c             lea eax, [esp + 0x1c]
// 004b832a  50                   push eax
// 004b832b  8bcb                 mov ecx, ebx
// 004b832d  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004b8335  e816f60900           call 0x557950
// 004b833a  85c0                 test eax, eax
// 004b833c  7407                 je 0x4b8345
// 004b833e  05e4000000           add eax, 0xe4
// 004b8343  eb02                 jmp 0x4b8347
// 004b8345  33c0                 xor eax, eax
// 004b8347  50                   push eax
// 004b8348  8d4c2410             lea ecx, [esp + 0x10]
// 004b834c  51                   push ecx
// 004b834d  e8def10000           call 0x4c7530
// 004b8352  83c408               add esp, 8
// 004b8355  b302                 mov bl, 2
// 004b8357  8d4c241c             lea ecx, [esp + 0x1c]
// 004b835b  885c2440             mov byte ptr [esp + 0x40], bl
// 004b835f  ff1568248000         call dword ptr [0x802468]
// 004b8365  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004b836a  0f84cd000000         je 0x4b843d
// 004b8370  8b86582d0000         mov eax, dword ptr [esi + 0x2d58]
// 004b8376  8b8e502d0000         mov ecx, dword ptr [esi + 0x2d50]
// 004b837c  8b11                 mov edx, dword ptr [ecx]
// 004b837e  8b920c010000         mov edx, dword ptr [edx + 0x10c]
// 004b8384  50                   push eax
// 004b8385  8b86542d0000         mov eax, dword ptr [esi + 0x2d54]
// 004b838b  50                   push eax
// 004b838c  ffd2                 call edx
// 004b838e  50                   push eax
// 004b838f  83ec08               sub esp, 8
// 004b8392  8bc4                 mov eax, esp
// 004b8394  89642454             mov dword ptr [esp + 0x54], esp
// 004b8398  56                   push esi
// 004b8399  50                   push eax
// 004b839a  e8a1061600           call 0x618a40
// 004b839f  8d4c2428             lea ecx, [esp + 0x28]
// 004b83a3  83c408               add esp, 8
// 004b83a6  51                   push ecx
// 004b83a7  e8a4faffff           call 0x4b7e50
// 004b83ac  83c410               add esp, 0x10
// 004b83af  8b10                 mov edx, dword ptr [eax]
// 004b83b1  83c004               add eax, 4
// 004b83b4  50                   push eax
// 004b83b5  8d4f04               lea ecx, [edi + 4]
// 004b83b8  c644244403           mov byte ptr [esp + 0x44], 3
// 004b83bd  8917                 mov dword ptr [edi], edx
// 004b83bf  e8eca1f4ff           call 0x4025b0
// 004b83c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b83c8  885c2440             mov byte ptr [esp + 0x40], bl
// 004b83cc  85c0                 test eax, eax
// 004b83ce  742c                 je 0x4b83fc
// 004b83d0  8bd8                 mov ebx, eax
// 004b83d2  83c004               add eax, 4
// 004b83d5  83c9ff               or ecx, 0xffffffff
// 004b83d8  f00fc108             lock xadd dword ptr [eax], ecx
// 004b83dc  751e                 jne 0x4b83fc
// 004b83de  8b13                 mov edx, dword ptr [ebx]
// 004b83e0  8b4204               mov eax, dword ptr [edx + 4]
// 004b83e3  8bcb                 mov ecx, ebx
// 004b83e5  ffd0                 call eax
// 004b83e7  8d4b08               lea ecx, [ebx + 8]
// 004b83ea  83caff               or edx, 0xffffffff
// 004b83ed  f00fc111             lock xadd dword ptr [ecx], edx
// 004b83f1  7509                 jne 0x4b83fc
// 004b83f3  8b03                 mov eax, dword ptr [ebx]
// 004b83f5  8b5008               mov edx, dword ptr [eax + 8]
// 004b83f8  8bcb                 mov ecx, ebx
// 004b83fa  ffd2                 call edx
// 004b83fc  8b0f                 mov ecx, dword ptr [edi]
// 004b83fe  8b01                 mov eax, dword ptr [ecx]
// 004b8400  8b5004               mov edx, dword ptr [eax + 4]
// 004b8403  81c610010000         add esi, 0x110
// 004b8409  56                   push esi
// 004b840a  ffd2                 call edx
// 004b840c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8410  83ec08               sub esp, 8
// 004b8413  8bc4                 mov eax, esp
// 004b8415  8908                 mov dword ptr [eax], ecx
// 004b8417  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b841b  895004               mov dword ptr [eax + 4], edx
// 004b841e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b8422  89642450             mov dword ptr [esp + 0x50], esp
// 004b8426  85c0                 test eax, eax
// 004b8428  740c                 je 0x4b8436
// 004b842a  83c004               add eax, 4
// 004b842d  b901000000           mov ecx, 1
// 004b8432  f00fc108             lock xadd dword ptr [eax], ecx
// 004b8436  8b0f                 mov ecx, dword ptr [edi]
// 004b8438  e8f330ffff           call 0x4ab530
// 004b843d  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b8441  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 004b8449  85f6                 test esi, esi
// 004b844b  742a                 je 0x4b8477
// 004b844d  8d5604               lea edx, [esi + 4]
// 004b8450  83c8ff               or eax, 0xffffffff
// 004b8453  f00fc102             lock xadd dword ptr [edx], eax
// 004b8457  751e                 jne 0x4b8477
// 004b8459  8b16                 mov edx, dword ptr [esi]
// 004b845b  8b4204               mov eax, dword ptr [edx + 4]
// 004b845e  8bce                 mov ecx, esi
// 004b8460  ffd0                 call eax
// 004b8462  8d4e08               lea ecx, [esi + 8]
// 004b8465  83caff               or edx, 0xffffffff
// 004b8468  f00fc111             lock xadd dword ptr [ecx], edx
// 004b846c  7509                 jne 0x4b8477
// 004b846e  8b06                 mov eax, dword ptr [esi]
// 004b8470  8b5008               mov edx, dword ptr [eax + 8]
// 004b8473  8bce                 mov ecx, esi
// 004b8475  ffd2                 call edx
// 004b8477  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004b847b  5f                   pop edi
// 004b847c  5e                   pop esi
// 004b847d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8484  5b                   pop ebx
// 004b8485  83c438               add esp, 0x38
// 004b8488  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;
    Count& operator=(const Count&);
    ~Count();
};

__forceinline Count::~Count()
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

template<class T> struct Shared {
    T* pointer;
    Count count;
    Shared();
    Shared(const Shared&);
    Shared& operator=(const Shared&);
    ~Shared();
    void reset();
};

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
{
    pointer = other.pointer;
    count.control = other.count.control;
    if (count.control)
        _InterlockedIncrement(&count.control->strong);
}

template<class T>
__forceinline Shared<T>& Shared<T>::operator=(const Shared& other)
{
    pointer = other.pointer;
    count = other.count;
    return *this;
}

template<class T>
__forceinline Shared<T>::~Shared()
{
}

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Network;

struct Connection {
    virtual void unused() = 0;
    virtual void attach(void*) = 0;
    void disconnect(int);
    void setNetwork(Shared<Network>);
};

struct Found {
    char prefix[0xe4];
    char signal;
};

struct Source {
    Found* find(const String&);
};

struct Dispatcher {
    typedef void* (__thiscall *Method)(Dispatcher*, unsigned long, unsigned long);
    struct Table {
        void* reserved[67];
        Method invoke;
    };
    Table* table;
};

struct S;

struct Binder {
    unsigned long words[2];
};

extern Shared<Network> __cdecl getNetwork(void*);
extern Binder __cdecl makeBinder(S*);
extern Shared<Connection> __cdecl build(Binder, void*);

struct S {
    char prefix[0x110];
    char attachment[0x2b88 - 0x110];
    Shared<Connection> connection;
    char padding[0x2d50 - 0x2b90];
    Dispatcher* dispatcher;
    unsigned long first;
    unsigned long second;
    void f(Source*);
};

void S::f(Source* source)
{
    if (connection.pointer) {
        connection.pointer->disconnect(0);
        connection.reset();
    }

    if (source) {
        Found* found;
        Shared<Network> network = getNetwork(
            (found = source->find(String("Network")))
                ? &found->signal : 0);

        if (network.pointer) {
            connection = build(
                makeBinder(this),
                dispatcher->table->invoke(dispatcher, first, second));
            connection.pointer->attach(attachment);
            connection.pointer->setNetwork(network);
        }
    }
}
