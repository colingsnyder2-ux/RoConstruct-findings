// roc 2009-12 00678c40  unit: RBX::ClearBackpack  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00678c40
//
// 00678c40  6aff                 push -1
// 00678c42  6833569400           push 0x945633
// 00678c47  64a100000000         mov eax, dword ptr fs:[0]
// 00678c4d  50                   push eax
// 00678c4e  64892500000000       mov dword ptr fs:[0], esp
// 00678c55  51                   push ecx
// 00678c56  56                   push esi
// 00678c57  57                   push edi
// 00678c58  8bf9                 mov edi, ecx
// 00678c5a  897c2408             mov dword ptr [esp + 8], edi
// 00678c5e  c707b8fb9c00         mov dword ptr [edi], 0x9cfbb8
// 00678c64  8b771c               mov esi, dword ptr [edi + 0x1c]
// 00678c67  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00678c6f  85f6                 test esi, esi
// 00678c71  742a                 je 0x678c9d
// 00678c73  8d4604               lea eax, [esi + 4]
// 00678c76  83c9ff               or ecx, 0xffffffff
// 00678c79  f00fc108             lock xadd dword ptr [eax], ecx
// 00678c7d  751e                 jne 0x678c9d
// 00678c7f  8b16                 mov edx, dword ptr [esi]
// 00678c81  8b4204               mov eax, dword ptr [edx + 4]
// 00678c84  8bce                 mov ecx, esi
// 00678c86  ffd0                 call eax
// 00678c88  8d4e08               lea ecx, [esi + 8]
// 00678c8b  83caff               or edx, 0xffffffff
// 00678c8e  f00fc111             lock xadd dword ptr [ecx], edx
// 00678c92  7509                 jne 0x678c9d
// 00678c94  8b06                 mov eax, dword ptr [esi]
// 00678c96  8b5008               mov edx, dword ptr [eax + 8]
// 00678c99  8bce                 mov ecx, esi
// 00678c9b  ffd2                 call edx
// 00678c9d  8b7710               mov esi, dword ptr [edi + 0x10]
// 00678ca0  c644241400           mov byte ptr [esp + 0x14], 0
// 00678ca5  85f6                 test esi, esi
// 00678ca7  742a                 je 0x678cd3
// 00678ca9  8d4604               lea eax, [esi + 4]
// 00678cac  83c9ff               or ecx, 0xffffffff
// 00678caf  f00fc108             lock xadd dword ptr [eax], ecx
// 00678cb3  751e                 jne 0x678cd3
// 00678cb5  8b16                 mov edx, dword ptr [esi]
// 00678cb7  8b4204               mov eax, dword ptr [edx + 4]
// 00678cba  8bce                 mov ecx, esi
// 00678cbc  ffd0                 call eax
// 00678cbe  8d4e08               lea ecx, [esi + 8]
// 00678cc1  83caff               or edx, 0xffffffff
// 00678cc4  f00fc111             lock xadd dword ptr [ecx], edx
// 00678cc8  7509                 jne 0x678cd3
// 00678cca  8b06                 mov eax, dword ptr [esi]
// 00678ccc  8b5008               mov edx, dword ptr [eax + 8]
// 00678ccf  8bce                 mov ecx, esi
// 00678cd1  ffd2                 call edx
// 00678cd3  8bcf                 mov ecx, edi
// 00678cd5  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00678cdd  e8ce510000           call 0x67deb0
// 00678ce2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678ce6  5f                   pop edi
// 00678ce7  5e                   pop esi
// 00678ce8  64890d00000000       mov dword ptr fs:[0], ecx
// 00678cef  83c410               add esp, 0x10
// 00678cf2  c3                   ret 
// copied from an identical function in another client (function ??1ClearBackpack@@UAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Reference {
    void* object;
    Control* control;

    ~Reference()
    {
        Control* p = control;
        if (p && _InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
};

struct Base {
    virtual ~Base();
    unsigned char padding[8];
};

struct ClearBackpack : Base {
    Reference first;
    unsigned char padding[4];
    Reference second;

    virtual ~ClearBackpack();
};

ClearBackpack::~ClearBackpack()
{
}