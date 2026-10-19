// from server: 83% by colin
// from server: 68% by king_originala
// roc 2008-06 0060c400  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c400
//
// 0060c400  64a100000000         mov eax, dword ptr fs:[0]
// 0060c406  6aff                 push -1
// 0060c408  68a87d7c00           push 0x7c7da8
// 0060c40d  50                   push eax
// 0060c40e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060c412  64892500000000       mov dword ptr fs:[0], esp
// 0060c419  83ec48               sub esp, 0x48
// 0060c41c  56                   push esi
// 0060c41d  8bf1                 mov esi, ecx
// 0060c41f  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 0060c425  3bc1                 cmp eax, ecx
// 0060c427  0f8432010000         je 0x60c55f
// 0060c42d  50                   push eax
// 0060c42e  8d442408             lea eax, [esp + 8]
// 0060c432  50                   push eax
// 0060c433  e808c60000           call 0x618a40
// 0060c438  83c408               add esp, 8
// 0060c43b  8b08                 mov ecx, dword ptr [eax]
// 0060c43d  83c004               add eax, 4
// 0060c440  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0060c446  50                   push eax
// 0060c447  8d8e58010000         lea ecx, [esi + 0x158]
// 0060c44d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0060c455  e85661dfff           call 0x4025b0
// 0060c45a  8b442408             mov eax, dword ptr [esp + 8]
// 0060c45e  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0060c466  85c0                 test eax, eax
// 0060c468  742e                 je 0x60c498
// 0060c46a  57                   push edi
// 0060c46b  8bf8                 mov edi, eax
// 0060c46d  83c004               add eax, 4
// 0060c470  83caff               or edx, 0xffffffff
// 0060c473  f00fc110             lock xadd dword ptr [eax], edx
// 0060c477  751e                 jne 0x60c497
// 0060c479  8b07                 mov eax, dword ptr [edi]
// 0060c47b  8b5004               mov edx, dword ptr [eax + 4]
// 0060c47e  8bcf                 mov ecx, edi
// 0060c480  ffd2                 call edx
// 0060c482  8d4708               lea eax, [edi + 8]
// 0060c485  83c9ff               or ecx, 0xffffffff
// 0060c488  f00fc108             lock xadd dword ptr [eax], ecx
// 0060c48c  7509                 jne 0x60c497
// 0060c48e  8b17                 mov edx, dword ptr [edi]
// 0060c490  8b4208               mov eax, dword ptr [edx + 8]
// 0060c493  8bcf                 mov ecx, edi
// 0060c495  ffd0                 call eax
// 0060c497  5f                   pop edi
// 0060c498  68fcbd9700           push 0x97bdfc
// 0060c49d  8bce                 mov ecx, esi
// 0060c49f  e85c16e0ff           call 0x40db00
// 0060c4a4  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 0060c4aa  50                   push eax
// 0060c4ab  6a01                 push 1
// 0060c4ad  8bce                 mov ecx, esi
// 0060c4af  e86cdbffff           call 0x60a020
// 0060c4b4  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0060c4bb  0f8493000000         je 0x60c554
// 0060c4c1  33c9                 xor ecx, ecx
// 0060c4c3  894c2408             mov dword ptr [esp + 8], ecx
// 0060c4c7  8d4c2404             lea ecx, [esp + 4]
// 0060c4cb  b830a26000           mov eax, 0x60a230
// 0060c4d0  51                   push ecx
// 0060c4d1  8d4c2428             lea ecx, [esp + 0x28]
// 0060c4d5  89442408             mov dword ptr [esp + 8], eax
// 0060c4d9  89742410             mov dword ptr [esp + 0x10], esi
// 0060c4dd  e86ef1ffff           call 0x60b650
// 0060c4e2  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 0060c4e8  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0060c4f0  85c0                 test eax, eax
// 0060c4f2  7405                 je 0x60c4f9
// 0060c4f4  83c014               add eax, 0x14
// 0060c4f7  eb02                 jmp 0x60c4fb
// 0060c4f9  33c0                 xor eax, eax
// 0060c4fb  6a0a                 push 0xa
// 0060c4fd  8d542428             lea edx, [esp + 0x28]
// 0060c501  52                   push edx
// 0060c502  50                   push eax
// 0060c503  8d442420             lea eax, [esp + 0x20]
// 0060c507  50                   push eax
// 0060c508  b9383c9700           mov ecx, 0x973c38
// 0060c50d  e82e6ee9ff           call 0x4a3340
// 0060c512  50                   push eax
// 0060c513  8d8e5c010000         lea ecx, [esi + 0x15c]
// 0060c519  c644245802           mov byte ptr [esp + 0x58], 2
// 0060c51e  e81d90f8ff           call 0x595540
// 0060c523  8d4c2414             lea ecx, [esp + 0x14]
// 0060c527  c644245401           mov byte ptr [esp + 0x54], 1
// 0060c52c  e83f8ef8ff           call 0x595370
// 0060c531  8d4c2424             lea ecx, [esp + 0x24]
// 0060c535  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0060c53d  e8ce31e9ff           call 0x49f710
// 0060c542  5e                   pop esi
// 0060c543  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0060c547  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c54e  83c454               add esp, 0x54
// 0060c551  c20400               ret 4
// 0060c554  8d8e5c010000         lea ecx, [esi + 0x15c]
// 0060c55a  e8d18cf8ff           call 0x595230
// 0060c55f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0060c563  5e                   pop esi
// 0060c564  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c56b  83c454               add esp, 0x54
// 0060c56e  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
#pragma pointers_to_members(full_generality, multiple_inheritance)

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Object
{
    char prefix[20];
};

struct CountHandle
{
    RefCount* count;
    CountHandle& operator=(const CountHandle&);
};

struct Shared
{
    Object* object;
    CountHandle handle;

    Shared& operator=(const Shared&);
    ~Shared();
};

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    handle = other.handle;
    return *this;
}

__forceinline Shared::~Shared()
{
    if (handle.count)
    {
        RefCount* p = handle.count;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Settings;

struct Callback
{
    void (Settings::*function)();
    Settings* owner;
};

struct Function
{
    char storage[40];
    Function(const Callback&);
    ~Function();
};

struct Connection
{
    char storage[16];
    ~Connection();
};

struct ConnectionHandle
{
    char storage[16];
    ConnectionHandle& operator=(const Connection&);
    void clear();
};

struct Dispatcher
{
    Connection connect(void*, const Function&, int);
};

extern Dispatcher dispatcher;
extern char propertyDescriptor;
extern Shared __cdecl acquire(Object*);

struct Settings
{
    char prefix[0x154];
    Shared shared;
    ConnectionHandle connection;

    void callback();
    void notify(const void*);
    void update(int, Object*);
    void set(Object*);
};

void Settings::set(Object* value)
{
    if (value == shared.object)
        return;

    shared = acquire(value);

    notify(&propertyDescriptor);
    update(1, shared.object);

    if (shared.object)
    {
        Callback callbackValue;
        callbackValue.function = &Settings::callback;
        callbackValue.owner = this;

        Function function(callbackValue);
        connection = dispatcher.connect(
            shared.object ? reinterpret_cast<char*>(shared.object) + 20 : 0,
            function, 10);
    }
    else
    {
        connection.clear();
    }
}
