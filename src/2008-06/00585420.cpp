// from server: 59% by colin
// from server: 58% by king_originala
// roc 2008-06 00585420  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585420
//
// 00585420  64a100000000         mov eax, dword ptr fs:[0]
// 00585426  8b542404             mov edx, dword ptr [esp + 4]
// 0058542a  6aff                 push -1
// 0058542c  6858847c00           push 0x7c8458
// 00585431  50                   push eax
// 00585432  64892500000000       mov dword ptr fs:[0], esp
// 00585439  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0058543c  8b01                 mov eax, dword ptr [ecx]
// 0058543e  8b4008               mov eax, dword ptr [eax + 8]
// 00585441  83ec10               sub esp, 0x10
// 00585444  52                   push edx
// 00585445  ffd0                 call eax
// 00585447  50                   push eax
// 00585448  8d4c240c             lea ecx, [esp + 0xc]
// 0058544c  51                   push ecx
// 0058544d  e8ee350900           call 0x618a40
// 00585452  8b08                 mov ecx, dword ptr [eax]
// 00585454  83c408               add esp, 8
// 00585457  85c9                 test ecx, ecx
// 00585459  7408                 je 0x585463
// 0058545b  83c114               add ecx, 0x14
// 0058545e  890c24               mov dword ptr [esp], ecx
// 00585461  eb07                 jmp 0x58546a
// 00585463  c7042400000000       mov dword ptr [esp], 0
// 0058546a  56                   push esi
// 0058546b  8b7004               mov esi, dword ptr [eax + 4]
// 0058546e  89742408             mov dword ptr [esp + 8], esi
// 00585472  85f6                 test esi, esi
// 00585474  740c                 je 0x585482
// 00585476  8d5604               lea edx, [esi + 4]
// 00585479  b801000000           mov eax, 1
// 0058547e  f00fc102             lock xadd dword ptr [edx], eax
// 00585482  57                   push edi
// 00585483  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00585487  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0058548f  85ff                 test edi, edi
// 00585491  742a                 je 0x5854bd
// 00585493  8d4f04               lea ecx, [edi + 4]
// 00585496  83caff               or edx, 0xffffffff
// 00585499  f00fc111             lock xadd dword ptr [ecx], edx
// 0058549d  751e                 jne 0x5854bd
// 0058549f  8b07                 mov eax, dword ptr [edi]
// 005854a1  8b5004               mov edx, dword ptr [eax + 4]
// 005854a4  8bcf                 mov ecx, edi
// 005854a6  ffd2                 call edx
// 005854a8  8d4708               lea eax, [edi + 8]
// 005854ab  83c9ff               or ecx, 0xffffffff
// 005854ae  f00fc108             lock xadd dword ptr [eax], ecx
// 005854b2  7509                 jne 0x5854bd
// 005854b4  8b17                 mov edx, dword ptr [edi]
// 005854b6  8b4208               mov eax, dword ptr [edx + 8]
// 005854b9  8bcf                 mov ecx, edi
// 005854bb  ffd0                 call eax
// 005854bd  e8ae75feff           call 0x56ca70
// 005854c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005854c6  8d542408             lea edx, [esp + 8]
// 005854ca  8901                 mov dword ptr [ecx], eax
// 005854cc  52                   push edx
// 005854cd  83c104               add ecx, 4
// 005854d0  e8bbc2f0ff           call 0x491790
// 005854d5  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005854dd  5f                   pop edi
// 005854de  85f6                 test esi, esi
// 005854e0  742a                 je 0x58550c
// 005854e2  8d4604               lea eax, [esi + 4]
// 005854e5  83c9ff               or ecx, 0xffffffff
// 005854e8  f00fc108             lock xadd dword ptr [eax], ecx
// 005854ec  751e                 jne 0x58550c
// 005854ee  8b16                 mov edx, dword ptr [esi]
// 005854f0  8b4204               mov eax, dword ptr [edx + 4]
// 005854f3  8bce                 mov ecx, esi
// 005854f5  ffd0                 call eax
// 005854f7  8d4e08               lea ecx, [esi + 8]
// 005854fa  83caff               or edx, 0xffffffff
// 005854fd  f00fc111             lock xadd dword ptr [ecx], edx
// 00585501  7509                 jne 0x58550c
// 00585503  8b06                 mov eax, dword ptr [esi]
// 00585505  8b5008               mov edx, dword ptr [eax + 8]
// 00585508  8bce                 mov ecx, esi
// 0058550a  ffd2                 call edx
// 0058550c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00585510  5e                   pop esi
// 00585511  64890d00000000       mov dword ptr fs:[0], ecx
// 00585518  83c41c               add esp, 0x1c
// 0058551b  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct BasePtr {
    char* pointer;
    Control* control;
    ~BasePtr();
};

struct SharedPtr {
    char* pointer;
    Control* control;
    SharedPtr(const BasePtr&);
    ~SharedPtr();
};

struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual void* get(void*);
};

struct Storage {
    void* pointer;
    Control* control;
    void assign(const SharedPtr&);
};

struct Output {
    void* type;
    Storage value;
};

BasePtr __cdecl acquire(void*);
void* __cdecl getType();

struct S {
    char padding[28];
    Getter* getter;
    void f(void*, Output*);
};

inline BasePtr::~BasePtr()
{
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

inline SharedPtr::SharedPtr(const BasePtr& source)
{
    pointer = source.pointer ? source.pointer + 20 : 0;
    control = source.control;
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline SharedPtr::~SharedPtr()
{
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

void S::f(void* object, Output* output)
{
    SharedPtr value(acquire(getter->get(object)));
    output->type = getType();
    output->value.assign(value);
}
