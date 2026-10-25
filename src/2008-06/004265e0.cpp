// from server: 100% by king_originala
// roc 2008-06 004265e0  unit: CRobloxTreeCtrlNode  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004265e0
//
// 004265e0  8b442408             mov eax, dword ptr [esp + 8]
// 004265e4  56                   push esi
// 004265e5  50                   push eax
// 004265e6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004265ea  8b10                 mov edx, dword ptr [eax]
// 004265ec  83ec08               sub esp, 8
// 004265ef  8bf1                 mov esi, ecx
// 004265f1  8bcc                 mov ecx, esp
// 004265f3  8911                 mov dword ptr [ecx], edx
// 004265f5  8b4004               mov eax, dword ptr [eax + 4]
// 004265f8  89642418             mov dword ptr [esp + 0x18], esp
// 004265fc  894104               mov dword ptr [ecx + 4], eax
// 004265ff  85c0                 test eax, eax
// 00426601  740c                 je 0x42660f
// 00426603  83c004               add eax, 4
// 00426606  b901000000           mov ecx, 1
// 0042660b  f00fc108             lock xadd dword ptr [eax], ecx
// 0042660f  6a00                 push 0
// 00426611  8bce                 mov ecx, esi
// 00426613  e8c8f7ffff           call 0x425de0
// 00426618  804e5402             or byte ptr [esi + 0x54], 2
// 0042661c  c70660008100         mov dword ptr [esi], 0x810060
// 00426622  c7460454008100       mov dword ptr [esi + 4], 0x810054
// 00426629  c7460848008100       mov dword ptr [esi + 8], 0x810048
// 00426630  8bc6                 mov eax, esi
// 00426632  5e                   pop esi
// 00426633  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern unsigned char table_810060[];
extern unsigned char table_810054[];
extern unsigned char table_810048[];

struct RefCount {
    unsigned long reserved;
    volatile long strong;

    __forceinline void addRef();
};

__forceinline void RefCount::addRef()
{
    volatile long* p = &strong;
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(p, 1);
}

struct Handle {
    void* pointer;
    RefCount* count;

    __forceinline Handle(const Handle& other);
    ~Handle();
};

__forceinline Handle::Handle(const Handle& other)
    : pointer(other.pointer), count(other.count)
{
    if (count)
        count->addRef();
}

struct S {
    void* table0;
    void* table1;
    void* table2;
    unsigned char padding[0x48];
    unsigned char flags;

    void initialize(int mode, Handle handle, int value);
    S* construct(const Handle& handle, int value);
};

S* S::construct(const Handle& handle, int value)
{
    initialize(0, handle, value);
    flags |= 2;
    table0 = table_810060;
    table1 = table_810054;
    table2 = table_810048;
    return this;
}
