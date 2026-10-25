// from server: 100% by king_originala
// roc 2008-06 0046a9b0  unit: VCWorkspace::?$CComObject  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a9b0
//
// 0046a9b0  6aff                 push -1
// 0046a9b2  6886387c00           push 0x7c3886
// 0046a9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0046a9bd  50                   push eax
// 0046a9be  64892500000000       mov dword ptr fs:[0], esp
// 0046a9c5  51                   push ecx
// 0046a9c6  56                   push esi
// 0046a9c7  57                   push edi
// 0046a9c8  8bf9                 mov edi, ecx
// 0046a9ca  897c2408             mov dword ptr [esp + 8], edi
// 0046a9ce  8b7730               mov esi, dword ptr [edi + 0x30]
// 0046a9d1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0046a9d9  85f6                 test esi, esi
// 0046a9db  742a                 je 0x46aa07
// 0046a9dd  8d4604               lea eax, [esi + 4]
// 0046a9e0  83c9ff               or ecx, 0xffffffff
// 0046a9e3  f00fc108             lock xadd dword ptr [eax], ecx
// 0046a9e7  751e                 jne 0x46aa07
// 0046a9e9  8b16                 mov edx, dword ptr [esi]
// 0046a9eb  8b4204               mov eax, dword ptr [edx + 4]
// 0046a9ee  8bce                 mov ecx, esi
// 0046a9f0  ffd0                 call eax
// 0046a9f2  8d4e08               lea ecx, [esi + 8]
// 0046a9f5  83caff               or edx, 0xffffffff
// 0046a9f8  f00fc111             lock xadd dword ptr [ecx], edx
// 0046a9fc  7509                 jne 0x46aa07
// 0046a9fe  8b06                 mov eax, dword ptr [esi]
// 0046aa00  8b5008               mov edx, dword ptr [eax + 8]
// 0046aa03  8bce                 mov ecx, esi
// 0046aa05  ffd2                 call edx
// 0046aa07  8b7728               mov esi, dword ptr [edi + 0x28]
// 0046aa0a  c644241400           mov byte ptr [esp + 0x14], 0
// 0046aa0f  85f6                 test esi, esi
// 0046aa11  742a                 je 0x46aa3d
// 0046aa13  8d4604               lea eax, [esi + 4]
// 0046aa16  83c9ff               or ecx, 0xffffffff
// 0046aa19  f00fc108             lock xadd dword ptr [eax], ecx
// 0046aa1d  751e                 jne 0x46aa3d
// 0046aa1f  8b16                 mov edx, dword ptr [esi]
// 0046aa21  8b4204               mov eax, dword ptr [edx + 4]
// 0046aa24  8bce                 mov ecx, esi
// 0046aa26  ffd0                 call eax
// 0046aa28  8d4e08               lea ecx, [esi + 8]
// 0046aa2b  83caff               or edx, 0xffffffff
// 0046aa2e  f00fc111             lock xadd dword ptr [ecx], edx
// 0046aa32  7509                 jne 0x46aa3d
// 0046aa34  8b06                 mov eax, dword ptr [esi]
// 0046aa36  8b5008               mov edx, dword ptr [eax + 8]
// 0046aa39  8bce                 mov ecx, esi
// 0046aa3b  ffd2                 call edx
// 0046aa3d  8b4714               mov eax, dword ptr [edi + 0x14]
// 0046aa40  5f                   pop edi
// 0046aa41  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046aa49  5e                   pop esi
// 0046aa4a  85c0                 test eax, eax
// 0046aa4c  7408                 je 0x46aa56
// 0046aa4e  8b08                 mov ecx, dword ptr [eax]
// 0046aa50  8b5108               mov edx, dword ptr [ecx + 8]
// 0046aa53  50                   push eax
// 0046aa54  ffd2                 call edx
// 0046aa56  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046aa5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0046aa61  83c410               add esp, 0x10
// 0046aa64  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

struct Interface {
    virtual long __stdcall QueryInterface(void*, void**) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct ComPtr {
    Interface* object;
    ~ComPtr();
};

struct S {
    char reserved0[20];
    ComPtr interfacePointer;
    char reserved1[12];
    Shared first;
    Shared second;
    ~S();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

inline ComPtr::~ComPtr()
{
    if (object)
        object->Release();
}

S::~S()
{
}
