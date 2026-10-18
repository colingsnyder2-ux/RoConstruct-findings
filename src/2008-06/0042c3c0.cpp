// from server: 92% by colin
// from server: 90% by colin
// roc 2008-06 0042c3c0  unit: CLuaHtmlView::Binder  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042c3c0
//
// 0042c3c0  6aff                 push -1
// 0042c3c2  68ccf67b00           push 0x7bf6cc
// 0042c3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0042c3cd  50                   push eax
// 0042c3ce  64892500000000       mov dword ptr fs:[0], esp
// 0042c3d5  83ec0c               sub esp, 0xc
// 0042c3d8  56                   push esi
// 0042c3d9  8bf1                 mov esi, ecx
// 0042c3db  8974240c             mov dword ptr [esp + 0xc], esi
// 0042c3df  c70654068100         mov dword ptr [esi], 0x810654
// 0042c3e5  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0042c3e8  6850595600           push 0x565950
// 0042c3ed  8d4808               lea ecx, [eax + 8]
// 0042c3f0  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 0042c3f8  e823ffffff           call 0x42c320
// 0042c3fd  8b4630               mov eax, dword ptr [esi + 0x30]
// 0042c400  c744240400000000     mov dword ptr [esp + 4], 0
// 0042c408  85c0                 test eax, eax
// 0042c40a  7411                 je 0x42c41d
// 0042c40c  8b08                 mov ecx, dword ptr [eax]
// 0042c40e  8d542404             lea edx, [esp + 4]
// 0042c412  52                   push edx
// 0042c413  685c058100           push 0x81055c
// 0042c418  50                   push eax
// 0042c419  8b01                 mov eax, dword ptr [ecx]
// 0042c41b  ffd0                 call eax
// 0042c41d  57                   push edi
// 0042c41e  8b7c2408             mov edi, dword ptr [esp + 8]
// 0042c422  6844068100           push 0x810644
// 0042c427  8d4c2410             lea ecx, [esp + 0x10]
// 0042c42b  c644242004           mov byte ptr [esp + 0x20], 4
// 0042c430  e84b4dfdff           call 0x401180
// 0042c435  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0042c438  8b00                 mov eax, dword ptr [eax]
// 0042c43a  8b17                 mov edx, dword ptr [edi]
// 0042c43c  51                   push ecx
// 0042c43d  50                   push eax
// 0042c43e  8b820c010000         mov eax, dword ptr [edx + 0x10c]
// 0042c444  57                   push edi
// 0042c445  c644242805           mov byte ptr [esp + 0x28], 5
// 0042c44a  ffd0                 call eax
// 0042c44c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042c450  51                   push ecx
// 0042c451  ff1544298000         call dword ptr [0x802944]
// 0042c457  8b442408             mov eax, dword ptr [esp + 8]
// 0042c45b  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0042c460  5f                   pop edi
// 0042c461  85c0                 test eax, eax
// 0042c463  7408                 je 0x42c46d
// 0042c465  8b10                 mov edx, dword ptr [eax]
// 0042c467  50                   push eax
// 0042c468  8b4208               mov eax, dword ptr [edx + 8]
// 0042c46b  ffd0                 call eax
// 0042c46d  8b4630               mov eax, dword ptr [esi + 0x30]
// 0042c470  c644241802           mov byte ptr [esp + 0x18], 2
// 0042c475  85c0                 test eax, eax
// 0042c477  7408                 je 0x42c481
// 0042c479  8b08                 mov ecx, dword ptr [eax]
// 0042c47b  8b5108               mov edx, dword ptr [ecx + 8]
// 0042c47e  50                   push eax
// 0042c47f  ffd2                 call edx
// 0042c481  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0042c484  c644241801           mov byte ptr [esp + 0x18], 1
// 0042c489  85c0                 test eax, eax
// 0042c48b  7408                 je 0x42c495
// 0042c48d  8b08                 mov ecx, dword ptr [eax]
// 0042c48f  8b5108               mov edx, dword ptr [ecx + 8]
// 0042c492  50                   push eax
// 0042c493  ffd2                 call edx
// 0042c495  8d4e0c               lea ecx, [esi + 0xc]
// 0042c498  c644241800           mov byte ptr [esp + 0x18], 0
// 0042c49d  e8de450800           call 0x4b0a80
// 0042c4a2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042c4a5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0042c4ad  5e                   pop esi
// 0042c4ae  85c9                 test ecx, ecx
// 0042c4b0  7413                 je 0x42c4c5
// 0042c4b2  8d4108               lea eax, [ecx + 8]
// 0042c4b5  83caff               or edx, 0xffffffff
// 0042c4b8  f00fc110             lock xadd dword ptr [eax], edx
// 0042c4bc  7507                 jne 0x42c4c5
// 0042c4be  8b01                 mov eax, dword ptr [ecx]
// 0042c4c0  8b5008               mov edx, dword ptr [eax + 8]
// 0042c4c3  ffd2                 call edx
// 0042c4c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042c4c9  64890d00000000       mov dword ptr fs:[0], ecx
// 0042c4d0  83c418               add esp, 0x18
// 0042c4d3  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
extern void __stdcall SysFreeString(unsigned short *);
}

typedef void (__cdecl *Manager)(void *, void *, int);

struct Callback {
    Manager *manager;
    unsigned int reserved;
    unsigned int storage;
    Callback &assign(unsigned int);
};

extern void __cdecl changeCallback();
extern const unsigned char interfaceId[];
extern const unsigned short eventName[];

struct Interface;

struct InterfaceTable {
    long (__stdcall *query)(Interface *, const void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
    void *reserved[64];
    long (__stdcall *detach)(Interface *, unsigned short *, Interface *);
};

struct Interface {
    InterfaceTable *table;
    unsigned int reserved;
    Callback callback;
};

struct InterfacePtr {
    Interface *pointer;
    __forceinline ~InterfacePtr();
};

__forceinline InterfacePtr::~InterfacePtr()
{
    if (pointer)
        pointer->table->release(pointer);
}

struct EventPtr {
    Interface *pointer;
    __forceinline EventPtr(Interface *);
    __forceinline ~EventPtr();
};

__forceinline EventPtr::EventPtr(Interface *source) : pointer(0)
{
    if (source)
        source->table->query(
            source, interfaceId, reinterpret_cast<void **>(&pointer));
}

__forceinline EventPtr::~EventPtr()
{
    if (pointer)
        pointer->table->release(pointer);
}

struct String {
    unsigned short *value;
    String(const unsigned short *);
    __forceinline ~String() throw();
};

struct Control {
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    virtual void release() = 0;
    long reserved;
    volatile long count;
};

struct Shared {
    void *pointer;
    Control *control;
    __forceinline ~Shared();
};

__forceinline Shared::~Shared()
{
    Control *object = control;
    if (object && _InterlockedExchangeAdd(&object->count, -1) == 1)
        object->release();
}

struct Storage {
    unsigned char data[32];
    ~Storage();
};

struct ViewBinder {
    Shared owner;
    Storage storage;
    InterfacePtr source;
    InterfacePtr connection;
    virtual ~ViewBinder();
};

ViewBinder::~ViewBinder()
{
    source.pointer->callback.assign(
        reinterpret_cast<unsigned int>(&changeCallback));

    EventPtr target(connection.pointer);
    Interface *object = target.pointer;
    object->table->detach(object, String(eventName).value, source.pointer);
}
