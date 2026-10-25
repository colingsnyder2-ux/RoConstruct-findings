// from server: 100% by king_originala
// roc 2008-06 00581c00  unit: RBX::CameraModelViewCommand  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00581c00
//
// 00581c00  64a100000000         mov eax, dword ptr fs:[0]
// 00581c06  6aff                 push -1
// 00581c08  6868917d00           push 0x7d9168
// 00581c0d  50                   push eax
// 00581c0e  64892500000000       mov dword ptr fs:[0], esp
// 00581c15  83ec08               sub esp, 8
// 00581c18  56                   push esi
// 00581c19  8bf1                 mov esi, ecx
// 00581c1b  837e0400             cmp dword ptr [esi + 4], 0
// 00581c1f  0f8580000000         jne 0x581ca5
// 00581c25  8b06                 mov eax, dword ptr [esi]
// 00581c27  57                   push edi
// 00581c28  50                   push eax
// 00581c29  e8d211f1ff           call 0x492e00
// 00581c2e  50                   push eax
// 00581c2f  8d4c2410             lea ecx, [esp + 0x10]
// 00581c33  51                   push ecx
// 00581c34  e8076e0900           call 0x618a40
// 00581c39  83c40c               add esp, 0xc
// 00581c3c  8b10                 mov edx, dword ptr [eax]
// 00581c3e  83c004               add eax, 4
// 00581c41  50                   push eax
// 00581c42  8d4e08               lea ecx, [esi + 8]
// 00581c45  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00581c4d  895604               mov dword ptr [esi + 4], edx
// 00581c50  e85b09e8ff           call 0x4025b0
// 00581c55  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00581c59  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00581c61  85ff                 test edi, edi
// 00581c63  742a                 je 0x581c8f
// 00581c65  8d4704               lea eax, [edi + 4]
// 00581c68  83c9ff               or ecx, 0xffffffff
// 00581c6b  f00fc108             lock xadd dword ptr [eax], ecx
// 00581c6f  751e                 jne 0x581c8f
// 00581c71  8b17                 mov edx, dword ptr [edi]
// 00581c73  8b4204               mov eax, dword ptr [edx + 4]
// 00581c76  8bcf                 mov ecx, edi
// 00581c78  ffd0                 call eax
// 00581c7a  8d4f08               lea ecx, [edi + 8]
// 00581c7d  83caff               or edx, 0xffffffff
// 00581c80  f00fc111             lock xadd dword ptr [ecx], edx
// 00581c84  7509                 jne 0x581c8f
// 00581c86  8b07                 mov eax, dword ptr [edi]
// 00581c88  8b5008               mov edx, dword ptr [eax + 8]
// 00581c8b  8bcf                 mov ecx, edi
// 00581c8d  ffd2                 call edx
// 00581c8f  8b4604               mov eax, dword ptr [esi + 4]
// 00581c92  5f                   pop edi
// 00581c93  5e                   pop esi
// 00581c94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581c98  64890d00000000       mov dword ptr fs:[0], ecx
// 00581c9f  83c414               add esp, 0x14
// 00581ca2  c20400               ret 4
// 00581ca5  8b4604               mov eax, dword ptr [esi + 4]
// 00581ca8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00581cac  5e                   pop esi
// 00581cad  64890d00000000       mov dword ptr fs:[0], ecx
// 00581cb4  83c414               add esp, 0x14
// 00581cb7  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace RBX {
struct Instance;
struct ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_00492e00(RBX::Instance*);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strongCount;
    volatile long weakCount;
};

struct Reference {
    Control* control;

    Reference& operator=(const Reference&);
    ~Reference();
};

inline Reference::~Reference()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strongCount) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weakCount) == 0)
                p->destroy();
        }
    }
}

struct Product {
    void* object;
    Reference reference;

    Product& operator=(const Product&);
};

inline Product& Product::operator=(const Product& other)
{
    object = other.object;
    reference = other.reference;
    return *this;
}

Product __cdecl func_00618a40(RBX::ServiceProvider*);

struct S {
    RBX::Instance* instance;
    Product cached;

    void* get(int);
};

void* S::get(int)
{
    if (!cached.object)
        cached = func_00618a40(func_00492e00(instance));
    return cached.object;
}
