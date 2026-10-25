// from server: 100% by king_originala
// roc 2008-06 0066e330  unit: RBX::GroupDragTool  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066e330
//
// 0066e330  6aff                 push -1
// 0066e332  6868917d00           push 0x7d9168
// 0066e337  64a100000000         mov eax, dword ptr fs:[0]
// 0066e33d  50                   push eax
// 0066e33e  64892500000000       mov dword ptr fs:[0], esp
// 0066e345  83ec08               sub esp, 8
// 0066e348  57                   push edi
// 0066e349  8d442404             lea eax, [esp + 4]
// 0066e34d  50                   push eax
// 0066e34e  8bf9                 mov edi, ecx
// 0066e350  e8abc7f5ff           call 0x5cab00
// 0066e355  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066e359  8b00                 mov eax, dword ptr [eax]
// 0066e35b  51                   push ecx
// 0066e35c  8bc8                 mov ecx, eax
// 0066e35e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0066e366  e835f5f2ff           call 0x59d8a0
// 0066e36b  8b442408             mov eax, dword ptr [esp + 8]
// 0066e36f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0066e377  85c0                 test eax, eax
// 0066e379  742e                 je 0x66e3a9
// 0066e37b  56                   push esi
// 0066e37c  8bf0                 mov esi, eax
// 0066e37e  83c004               add eax, 4
// 0066e381  83caff               or edx, 0xffffffff
// 0066e384  f00fc110             lock xadd dword ptr [eax], edx
// 0066e388  751e                 jne 0x66e3a8
// 0066e38a  8b06                 mov eax, dword ptr [esi]
// 0066e38c  8b5004               mov edx, dword ptr [eax + 4]
// 0066e38f  8bce                 mov ecx, esi
// 0066e391  ffd2                 call edx
// 0066e393  8d4608               lea eax, [esi + 8]
// 0066e396  83c9ff               or ecx, 0xffffffff
// 0066e399  f00fc108             lock xadd dword ptr [eax], ecx
// 0066e39d  7509                 jne 0x66e3a8
// 0066e39f  8b16                 mov edx, dword ptr [esi]
// 0066e3a1  8b4208               mov eax, dword ptr [edx + 8]
// 0066e3a4  8bce                 mov ecx, esi
// 0066e3a6  ffd0                 call eax
// 0066e3a8  5e                   pop esi
// 0066e3a9  8bcf                 mov ecx, edi
// 0066e3ab  e840f7ffff           call 0x66daf0
// 0066e3b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066e3b4  5f                   pop edi
// 0066e3b5  64890d00000000       mov dword ptr fs:[0], ecx
// 0066e3bc  83c414               add esp, 0x14
// 0066e3bf  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct ControlBlock {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Service {
    void apply(int value);
};

struct ServicePtr {
    Service* pointer;
    ControlBlock* control;
    ~ServicePtr();
    Service* operator->() const;
};

struct S {
    ServicePtr getService();
    void finish();
    void f(int value);
};

__forceinline void ControlBlock::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Service* ServicePtr::operator->() const
{
    return pointer;
}

__forceinline ServicePtr::~ServicePtr()
{
    if (control)
        control->release();
}

void S::f(int value)
{
    getService()->apply(value);
    finish();
}
