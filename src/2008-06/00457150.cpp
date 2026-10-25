// from server: 100% by colin
// roc 2008-06 00457150  unit: RBX::VInstance::?$MarshaledListener  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457150
//
// 00457150  51                   push ecx
// 00457151  53                   push ebx
// 00457152  56                   push esi
// 00457153  57                   push edi
// 00457154  8bf9                 mov edi, ecx
// 00457156  8b7720               mov esi, dword ptr [edi + 0x20]
// 00457159  83c62c               add esi, 0x2c
// 0045715c  56                   push esi
// 0045715d  ff15d4228000         call dword ptr [0x8022d4]
// 00457163  8b1f                 mov ebx, dword ptr [edi]
// 00457165  83ec08               sub esp, 8
// 00457168  8d442420             lea eax, [esp + 0x20]
// 0045716c  8bcc                 mov ecx, esp
// 0045716e  89642414             mov dword ptr [esp + 0x14], esp
// 00457172  50                   push eax
// 00457173  83c30c               add ebx, 0xc
// 00457176  e875a5fbff           call 0x4116f0
// 0045717b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045717f  8b13                 mov edx, dword ptr [ebx]
// 00457181  51                   push ecx
// 00457182  8bcf                 mov ecx, edi
// 00457184  ffd2                 call edx
// 00457186  56                   push esi
// 00457187  ff15f4218000         call dword ptr [0x8021f4]
// 0045718d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00457191  85f6                 test esi, esi
// 00457193  742a                 je 0x4571bf
// 00457195  8d4604               lea eax, [esi + 4]
// 00457198  83c9ff               or ecx, 0xffffffff
// 0045719b  f00fc108             lock xadd dword ptr [eax], ecx
// 0045719f  751e                 jne 0x4571bf
// 004571a1  8b16                 mov edx, dword ptr [esi]
// 004571a3  8b4204               mov eax, dword ptr [edx + 4]
// 004571a6  8bce                 mov ecx, esi
// 004571a8  ffd0                 call eax
// 004571aa  8d4e08               lea ecx, [esi + 8]
// 004571ad  83caff               or edx, 0xffffffff
// 004571b0  f00fc111             lock xadd dword ptr [ecx], edx
// 004571b4  7509                 jne 0x4571bf
// 004571b6  8b06                 mov eax, dword ptr [esi]
// 004571b8  8b5008               mov edx, dword ptr [eax + 8]
// 004571bb  8bce                 mov ecx, esi
// 004571bd  ffd2                 call edx
// 004571bf  5f                   pop edi
// 004571c0  5e                   pop esi
// 004571c1  5b                   pop ebx
// 004571c2  59                   pop ecx
// 004571c3  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__stdcall *EnterCriticalSection)(void*);
extern "C" void (__stdcall *LeaveCriticalSection)(void*);

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Pair
{
    void* object;
    Control* control;

    Pair(const Pair&);
    ~Pair();
};

__forceinline Pair::~Pair()
{
}

struct S;
typedef void (__thiscall *Handler)(S*, void*, Pair);

struct S
{
    Handler* table;
    unsigned char reserved[28];
    unsigned char* owner;

    void f(void*, Pair);
};

void S::f(void* argument, Pair value)
{
    void* lock = owner + 44;
    EnterCriticalSection(lock);
    Handler* slot = table + 3;
    (*slot)(this, argument, value);
    LeaveCriticalSection(lock);

    if (value.control)
    {
        Control* control = value.control;
        if (_InterlockedDecrement(&control->strong) == 0)
        {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}

