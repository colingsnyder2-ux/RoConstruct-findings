// from server: 78% by colin
// from server: 71% by king_originala
// roc 2008-06 00421a50  unit: CInstanceExplorer  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421a50
//
// 00421a50  6aff                 push -1
// 00421a52  68f0e87b00           push 0x7be8f0
// 00421a57  64a100000000         mov eax, dword ptr fs:[0]
// 00421a5d  50                   push eax
// 00421a5e  64892500000000       mov dword ptr fs:[0], esp
// 00421a65  83ec10               sub esp, 0x10
// 00421a68  55                   push ebp
// 00421a69  56                   push esi
// 00421a6a  8bf1                 mov esi, ecx
// 00421a6c  8a86c8030000         mov al, byte ptr [esi + 0x3c8]
// 00421a72  8daec8030000         lea ebp, [esi + 0x3c8]
// 00421a78  896c2408             mov dword ptr [esp + 8], ebp
// 00421a7c  8844240c             mov byte ptr [esp + 0xc], al
// 00421a80  c6450001             mov byte ptr [ebp], 1
// 00421a84  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00421a8c  85f6                 test esi, esi
// 00421a8e  7408                 je 0x421a98
// 00421a90  8d8e78030000         lea ecx, [esi + 0x378]
// 00421a96  eb02                 jmp 0x421a9a
// 00421a98  33c9                 xor ecx, ecx
// 00421a9a  8b86c0030000         mov eax, dword ptr [esi + 0x3c0]
// 00421aa0  85c0                 test eax, eax
// 00421aa2  7409                 je 0x421aad
// 00421aa4  51                   push ecx
// 00421aa5  8d4864               lea ecx, [eax + 0x64]
// 00421aa8  e8d33f1c00           call 0x5e5a80
// 00421aad  85f6                 test esi, esi
// 00421aaf  7408                 je 0x421ab9
// 00421ab1  8d8e9c030000         lea ecx, [esi + 0x39c]
// 00421ab7  eb02                 jmp 0x421abb
// 00421ab9  33c9                 xor ecx, ecx
// 00421abb  8b86c0030000         mov eax, dword ptr [esi + 0x3c0]
// 00421ac1  85c0                 test eax, eax
// 00421ac3  740c                 je 0x421ad1
// 00421ac5  51                   push ecx
// 00421ac6  8d8884000000         lea ecx, [eax + 0x84]
// 00421acc  e8af3f1c00           call 0x5e5a80
// 00421ad1  8b16                 mov edx, dword ptr [esi]
// 00421ad3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00421ad9  8bce                 mov ecx, esi
// 00421adb  ffd0                 call eax
// 00421add  8b88e8000000         mov ecx, dword ptr [eax + 0xe8]
// 00421ae3  e8685d2b00           call 0x6d7850
// 00421ae8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00421aec  51                   push ecx
// 00421aed  8d542414             lea edx, [esp + 0x14]
// 00421af1  52                   push edx
// 00421af2  e8496f1f00           call 0x618a40
// 00421af7  83c408               add esp, 8
// 00421afa  8b08                 mov ecx, dword ptr [eax]
// 00421afc  83c004               add eax, 4
// 00421aff  898ec0030000         mov dword ptr [esi + 0x3c0], ecx
// 00421b05  50                   push eax
// 00421b06  8d8ec4030000         lea ecx, [esi + 0x3c4]
// 00421b0c  c644242401           mov byte ptr [esp + 0x24], 1
// 00421b11  e89a0afeff           call 0x4025b0
// 00421b16  8b442414             mov eax, dword ptr [esp + 0x14]
// 00421b1a  c644242000           mov byte ptr [esp + 0x20], 0
// 00421b1f  85c0                 test eax, eax
// 00421b21  742e                 je 0x421b51
// 00421b23  57                   push edi
// 00421b24  8bf8                 mov edi, eax
// 00421b26  83c004               add eax, 4
// 00421b29  83caff               or edx, 0xffffffff
// 00421b2c  f00fc110             lock xadd dword ptr [eax], edx
// 00421b30  751e                 jne 0x421b50
// 00421b32  8b07                 mov eax, dword ptr [edi]
// 00421b34  8b5004               mov edx, dword ptr [eax + 4]
// 00421b37  8bcf                 mov ecx, edi
// 00421b39  ffd2                 call edx
// 00421b3b  8d4708               lea eax, [edi + 8]
// 00421b3e  83c9ff               or ecx, 0xffffffff
// 00421b41  f00fc108             lock xadd dword ptr [eax], ecx
// 00421b45  7509                 jne 0x421b50
// 00421b47  8b17                 mov edx, dword ptr [edi]
// 00421b49  8b4208               mov eax, dword ptr [edx + 8]
// 00421b4c  8bcf                 mov ecx, edi
// 00421b4e  ffd0                 call eax
// 00421b50  5f                   pop edi
// 00421b51  8b86c0030000         mov eax, dword ptr [esi + 0x3c0]
// 00421b57  8d8e78030000         lea ecx, [esi + 0x378]
// 00421b5d  85c0                 test eax, eax
// 00421b5f  7409                 je 0x421b6a
// 00421b61  51                   push ecx
// 00421b62  8d4864               lea ecx, [eax + 0x64]
// 00421b65  e836fdffff           call 0x4218a0
// 00421b6a  8b86c0030000         mov eax, dword ptr [esi + 0x3c0]
// 00421b70  8d8e9c030000         lea ecx, [esi + 0x39c]
// 00421b76  85c0                 test eax, eax
// 00421b78  740c                 je 0x421b86
// 00421b7a  51                   push ecx
// 00421b7b  8d8884000000         lea ecx, [eax + 0x84]
// 00421b81  e81afdffff           call 0x4218a0
// 00421b86  8b16                 mov edx, dword ptr [esi]
// 00421b88  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00421b8e  8bce                 mov ecx, esi
// 00421b90  ffd0                 call eax
// 00421b92  8b10                 mov edx, dword ptr [eax]
// 00421b94  8bc8                 mov ecx, eax
// 00421b96  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00421b9c  ffd0                 call eax
// 00421b9e  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00421ba2  884d00               mov byte ptr [ebp], cl
// 00421ba5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00421ba9  5e                   pop esi
// 00421baa  5d                   pop ebp
// 00421bab  64890d00000000       mov dword ptr fs:[0], ecx
// 00421bb2  83c41c               add esp, 0x1c
// 00421bb5  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Control
{
    RefCount* pointer;
    void assign(const Control&);
};

struct Signal
{
    char storage[32];
    void disconnect(void*);
    void connect(void*);
};

struct Instance
{
    char padding[100];
    Signal first;
    Signal second;
};

struct Shared
{
    Instance* pointer;
    Control control;
    ~Shared();
};

extern Shared __cdecl acquire(void*);

struct Service
{
    void reset();
};

struct Window;

struct WindowTable
{
    void* slots[88];
    void (__thiscall* refresh)(Window*);
};

struct Window
{
    WindowTable* table;
    char padding[228];
    Service* service;
};

struct Explorer;

struct ExplorerTable
{
    void* slots[101];
    Window* (__thiscall* getWindow)(Explorer*);
};

struct FlagGuard
{
    unsigned char* flag;
    unsigned char previous;
    FlagGuard(unsigned char&);
    ~FlagGuard();
};

__forceinline FlagGuard::FlagGuard(unsigned char& value)
    : flag(&value), previous(value)
{
    value = 1;
}

__forceinline FlagGuard::~FlagGuard()
{
    *flag = previous;
}

__forceinline Shared::~Shared()
{
    RefCount* p = control.pointer;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Explorer
{
    ExplorerTable* table;
    char padding[884];
    char firstListener[36];
    char secondListener[36];
    Instance* instance;
    Control control;
    unsigned char changing;

    void setInstance(void*);
};

void Explorer::setInstance(void* argument)
{
    FlagGuard guard(changing);

    void* listener = this ? firstListener : 0;
    if (instance)
        instance->first.disconnect(listener);

    listener = this ? secondListener : 0;
    if (instance)
        instance->second.disconnect(listener);

    table->getWindow(this)->service->reset();

    {
        const Shared& value = acquire(argument);
        instance = value.pointer;
        control.assign(value.control);
    }

    listener = firstListener;
    if (instance)
        instance->first.connect(listener);

    listener = secondListener;
    if (instance)
        instance->second.connect(listener);

    Window* window = table->getWindow(this);
    window->table->refresh(window);
}
