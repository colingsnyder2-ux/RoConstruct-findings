// from server: 99% by king_originala
// roc 2008-06 0041db00  unit: VDHTMLWindow::?$SignalDesc  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041db00
//
// 0041db00  6aff                 push -1
// 0041db02  68e1e37b00           push 0x7be3e1
// 0041db07  64a100000000         mov eax, dword ptr fs:[0]
// 0041db0d  50                   push eax
// 0041db0e  64892500000000       mov dword ptr fs:[0], esp
// 0041db15  83ec28               sub esp, 0x28
// 0041db18  53                   push ebx
// 0041db19  55                   push ebp
// 0041db1a  56                   push esi
// 0041db1b  57                   push edi
// 0041db1c  8bf1                 mov esi, ecx
// 0041db1e  8d442420             lea eax, [esp + 0x20]
// 0041db22  33ed                 xor ebp, ebp
// 0041db24  50                   push eax
// 0041db25  896c2444             mov dword ptr [esp + 0x44], ebp
// 0041db29  e832a00000           call 0x427b60
// 0041db2e  8bc8                 mov ecx, eax
// 0041db30  e88bc00000           call 0x429bc0
// 0041db35  8b06                 mov eax, dword ptr [esi]
// 0041db37  8d5820               lea ebx, [eax + 0x20]
// 0041db3a  8bcb                 mov ecx, ebx
// 0041db3c  c644244001           mov byte ptr [esp + 0x40], 1
// 0041db41  895c2418             mov dword ptr [esp + 0x18], ebx
// 0041db45  e846551400           call 0x563090
// 0041db4a  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0041db4f  8b06                 mov eax, dword ptr [esi]
// 0041db51  8d4c2448             lea ecx, [esp + 0x48]
// 0041db55  51                   push ecx
// 0041db56  8d482c               lea ecx, [eax + 0x2c]
// 0041db59  c644244402           mov byte ptr [esp + 0x44], 2
// 0041db5e  ff150c248000         call dword ptr [0x80240c]
// 0041db64  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041db68  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0041db6c  b893244992           mov eax, 0x92492493
// 0041db71  f7e9                 imul ecx
// 0041db73  03d1                 add edx, ecx
// 0041db75  c1fa04               sar edx, 4
// 0041db78  8bc2                 mov eax, edx
// 0041db7a  c1e81f               shr eax, 0x1f
// 0041db7d  03c2                 add eax, edx
// 0041db7f  8d48f4               lea ecx, [eax - 0xc]
// 0041db82  894c2410             mov dword ptr [esp + 0x10], ecx
// 0041db86  3bcd                 cmp ecx, ebp
// 0041db88  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041db8c  8d4c2410             lea ecx, [esp + 0x10]
// 0041db90  7f04                 jg 0x41db96
// 0041db92  8d4c2414             lea ecx, [esp + 0x14]
// 0041db96  8b39                 mov edi, dword ptr [ecx]
// 0041db98  3bf8                 cmp edi, eax
// 0041db9a  734b                 jae 0x41dbe7
// 0041db9c  8d2cfd00000000       lea ebp, [edi*8]
// 0041dba3  2bef                 sub ebp, edi
// 0041dba5  03ed                 add ebp, ebp
// 0041dba7  03ed                 add ebp, ebp
// 0041dba9  3bf8                 cmp edi, eax
// 0041dbab  7206                 jb 0x41dbb3
// 0041dbad  ff1590288000         call dword ptr [0x802890]
// 0041dbb3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0041dbb7  8b0e                 mov ecx, dword ptr [esi]
// 0041dbb9  8d042a               lea eax, [edx + ebp]
// 0041dbbc  50                   push eax
// 0041dbbd  e80efbffff           call 0x41d6d0
// 0041dbc2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041dbc6  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0041dbca  b893244992           mov eax, 0x92492493
// 0041dbcf  f7e9                 imul ecx
// 0041dbd1  03d1                 add edx, ecx
// 0041dbd3  c1fa04               sar edx, 4
// 0041dbd6  8bc2                 mov eax, edx
// 0041dbd8  c1e81f               shr eax, 0x1f
// 0041dbdb  47                   inc edi
// 0041dbdc  03c2                 add eax, edx
// 0041dbde  83c51c               add ebp, 0x1c
// 0041dbe1  3bf8                 cmp edi, eax
// 0041dbe3  72ce                 jb 0x41dbb3
// 0041dbe5  33ed                 xor ebp, ebp
// 0041dbe7  8bcb                 mov ecx, ebx
// 0041dbe9  c644244001           mov byte ptr [esp + 0x40], 1
// 0041dbee  e8ed541400           call 0x5630e0
// 0041dbf3  807c246400           cmp byte ptr [esp + 0x64], 0
// 0041dbf8  750a                 jne 0x41dc04
// 0041dbfa  8d4e08               lea ecx, [esi + 8]
// 0041dbfd  e8de811700           call 0x595de0
// 0041dc02  eb2f                 jmp 0x41dc33
// 0041dc04  8b06                 mov eax, dword ptr [esi]
// 0041dc06  83ec08               sub esp, 8
// 0041dc09  8bcc                 mov ecx, esp
// 0041dc0b  8901                 mov dword ptr [ecx], eax
// 0041dc0d  8b4604               mov eax, dword ptr [esi + 4]
// 0041dc10  8964246c             mov dword ptr [esp + 0x6c], esp
// 0041dc14  894104               mov dword ptr [ecx + 4], eax
// 0041dc17  3bc5                 cmp eax, ebp
// 0041dc19  740c                 je 0x41dc27
// 0041dc1b  83c004               add eax, 4
// 0041dc1e  b901000000           mov ecx, 1
// 0041dc23  f00fc108             lock xadd dword ptr [eax], ecx
// 0041dc27  e834fbffff           call 0x41d760
// 0041dc2c  83c408               add esp, 8
// 0041dc2f  3bc5                 cmp eax, ebp
// 0041dc31  75d1                 jne 0x41dc04
// 0041dc33  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0041dc37  c644244003           mov byte ptr [esp + 0x40], 3
// 0041dc3c  3bf5                 cmp esi, ebp
// 0041dc3e  7424                 je 0x41dc64
// 0041dc40  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0041dc44  3bf7                 cmp esi, edi
// 0041dc46  7413                 je 0x41dc5b
// 0041dc48  8bce                 mov ecx, esi
// 0041dc4a  ff1568248000         call dword ptr [0x802468]
// 0041dc50  83c61c               add esi, 0x1c
// 0041dc53  3bf7                 cmp esi, edi
// 0041dc55  75f1                 jne 0x41dc48
// 0041dc57  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0041dc5b  56                   push esi
// 0041dc5c  e8192a2800           call 0x6a067a
// 0041dc61  83c404               add esp, 4
// 0041dc64  8b542420             mov edx, dword ptr [esp + 0x20]
// 0041dc68  52                   push edx
// 0041dc69  896c2430             mov dword ptr [esp + 0x30], ebp
// 0041dc6d  896c2434             mov dword ptr [esp + 0x34], ebp
// 0041dc71  896c2438             mov dword ptr [esp + 0x38], ebp
// 0041dc75  e8002a2800           call 0x6a067a
// 0041dc7a  83c404               add esp, 4
// 0041dc7d  8d4c2448             lea ecx, [esp + 0x48]
// 0041dc81  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0041dc89  ff1568248000         call dword ptr [0x802468]
// 0041dc8f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0041dc93  5f                   pop edi
// 0041dc94  5e                   pop esi
// 0041dc95  5d                   pop ebp
// 0041dc96  64890d00000000       mov dword ptr fs:[0], ecx
// 0041dc9d  5b                   pop ebx
// 0041dc9e  83c434               add esp, 0x34
// 0041dca1  c22000               ret 0x20

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void __cdecl operator delete(void*) throw();

struct String;
extern String& (__thiscall *assignString)(String*, const String&);
extern void (__thiscall *destroyString)(String*);
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct String {
    char data[28];
    String& operator=(const String&);
    ~String();
};

__forceinline String& String::operator=(const String& other)
{
    return assignString(this, other);
}

__forceinline String::~String()
{
    destroyString(this);
}

struct VectorBase {
    void* proxy;
    unsigned int reserved[2];
    ~VectorBase();
};

struct Vector : VectorBase {
    String* first;
    String* last;
    String* limit;

    ~Vector();
    unsigned int size() const;
    String& operator[](unsigned int);
};

__forceinline VectorBase::~VectorBase()
{
    operator delete(proxy);
}

__forceinline Vector::~Vector()
{
    if (first) {
        String* p = first;
        String* end = last;
        while (p != end) {
            p->~String();
            ++p;
        }
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline unsigned int Vector::size() const
{
    return last - first;
}

__forceinline String& Vector::operator[](unsigned int i)
{
    if (i >= size())
        _invalid_parameter_noinfo();
    return first[i];
}

__forceinline const int& maximum(const int& a, const int& b)
{
    return a > b ? a : b;
}

struct Collector {
    Vector collect();
};

Collector* __cdecl getCollector();

struct Mutex {
    char storage[12];
    void acquire();
    void release();
};

struct Guard {
    Mutex* mutex;
    bool active;

    Guard(Mutex*);
    ~Guard();
};

__forceinline Guard::Guard(Mutex* p) : mutex(p)
{
    mutex->acquire();
    active = true;
}

__forceinline Guard::~Guard()
{
    if (active)
        mutex->release();
}

struct Object {
    char reserved[32];
    Mutex mutex;
    String text;

    void append(const String&);
};

struct Count {
    long reserved;
    volatile long strong;
};

struct Shared {
    Object* object;
    Count* count;

    Shared(const Shared&);
    ~Shared();
    Object* operator->() const;
};

__forceinline Object* Shared::operator->() const
{
    return object;
}

__forceinline Shared::Shared(const Shared& other)
{
    object = other.object;
    count = other.count;
    if (count) {
        volatile long* strong = &count->strong;
        _InterlockedExchangeAdd(strong, 1);
    }
}

int __cdecl process(Shared);

struct Event {
    void wait();
};

struct S {
    Shared shared;
    Event event;

    void f(String, bool);
};

void S::f(String text, bool drain)
{
    Vector items = getCollector()->collect();

    {
        Guard guard(&shared->mutex);
        shared->text = text;

        int start = static_cast<int>(items.size()) - 12;
        int zero = 0;
        unsigned int i = maximum(start, zero);
        for (; i < items.size(); ++i)
            shared->append(items[i]);
    }

    if (!drain) {
        event.wait();
    } else {
        while (process(shared)) {
        }
    }
}
