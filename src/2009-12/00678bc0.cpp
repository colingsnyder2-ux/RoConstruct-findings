// roc 2009-12 00678bc0  unit: RBX::ClearBackpack  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00678bc0
//
// 00678bc0  6aff                 push -1
// 00678bc2  68a8c79200           push 0x92c7a8
// 00678bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00678bcd  50                   push eax
// 00678bce  64892500000000       mov dword ptr fs:[0], esp
// 00678bd5  51                   push ecx
// 00678bd6  56                   push esi
// 00678bd7  57                   push edi
// 00678bd8  8bf9                 mov edi, ecx
// 00678bda  897c2408             mov dword ptr [esp + 8], edi
// 00678bde  c707a0fb9c00         mov dword ptr [edi], 0x9cfba0
// 00678be4  8b7718               mov esi, dword ptr [edi + 0x18]
// 00678be7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00678bef  85f6                 test esi, esi
// 00678bf1  742a                 je 0x678c1d
// 00678bf3  8d4604               lea eax, [esi + 4]
// 00678bf6  83c9ff               or ecx, 0xffffffff
// 00678bf9  f00fc108             lock xadd dword ptr [eax], ecx
// 00678bfd  751e                 jne 0x678c1d
// 00678bff  8b16                 mov edx, dword ptr [esi]
// 00678c01  8b4204               mov eax, dword ptr [edx + 4]
// 00678c04  8bce                 mov ecx, esi
// 00678c06  ffd0                 call eax
// 00678c08  8d4e08               lea ecx, [esi + 8]
// 00678c0b  83caff               or edx, 0xffffffff
// 00678c0e  f00fc111             lock xadd dword ptr [ecx], edx
// 00678c12  7509                 jne 0x678c1d
// 00678c14  8b06                 mov eax, dword ptr [esi]
// 00678c16  8b5008               mov edx, dword ptr [eax + 8]
// 00678c19  8bce                 mov ecx, esi
// 00678c1b  ffd2                 call edx
// 00678c1d  8bcf                 mov ecx, edi
// 00678c1f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00678c27  e884520000           call 0x67deb0
// 00678c2c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678c30  5f                   pop edi
// 00678c31  5e                   pop esi
// 00678c32  64890d00000000       mov dword ptr fs:[0], ecx
// 00678c39  83c410               add esp, 0x10
// 00678c3c  c3                   ret 
// copied from an identical function in another client (function ??1ClearBackpack@@UAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* object;
    Control* control;
    ~Handle();
};

inline Handle::~Handle()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Base {
    virtual ~Base();
    char padding[16];
};

struct ClearBackpack : Base {
    Handle handle;
    virtual ~ClearBackpack();
};

ClearBackpack::~ClearBackpack()
{
}