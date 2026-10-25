// from server: 100% by king_originala
// roc 2008-06 00581cc0  unit: RBX::CameraModelViewCommand  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00581cc0
//
// 00581cc0  64a100000000         mov eax, dword ptr fs:[0]
// 00581cc6  6aff                 push -1
// 00581cc8  6868917d00           push 0x7d9168
// 00581ccd  50                   push eax
// 00581cce  64892500000000       mov dword ptr fs:[0], esp
// 00581cd5  83ec08               sub esp, 8
// 00581cd8  56                   push esi
// 00581cd9  8bf1                 mov esi, ecx
// 00581cdb  837e0400             cmp dword ptr [esi + 4], 0
// 00581cdf  0f8580000000         jne 0x581d65
// 00581ce5  8b06                 mov eax, dword ptr [esi]
// 00581ce7  57                   push edi
// 00581ce8  50                   push eax
// 00581ce9  e8c2ffe9ff           call 0x421cb0
// 00581cee  50                   push eax
// 00581cef  8d4c2410             lea ecx, [esp + 0x10]
// 00581cf3  51                   push ecx
// 00581cf4  e8476d0900           call 0x618a40
// 00581cf9  83c40c               add esp, 0xc
// 00581cfc  8b10                 mov edx, dword ptr [eax]
// 00581cfe  83c004               add eax, 4
// 00581d01  50                   push eax
// 00581d02  8d4e08               lea ecx, [esi + 8]
// 00581d05  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00581d0d  895604               mov dword ptr [esi + 4], edx
// 00581d10  e89b08e8ff           call 0x4025b0
// 00581d15  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00581d19  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00581d21  85ff                 test edi, edi
// 00581d23  742a                 je 0x581d4f
// 00581d25  8d4704               lea eax, [edi + 4]
// 00581d28  83c9ff               or ecx, 0xffffffff
// 00581d2b  f00fc108             lock xadd dword ptr [eax], ecx
// 00581d2f  751e                 jne 0x581d4f
// 00581d31  8b17                 mov edx, dword ptr [edi]
// 00581d33  8b4204               mov eax, dword ptr [edx + 4]
// 00581d36  8bcf                 mov ecx, edi
// 00581d38  ffd0                 call eax
// 00581d3a  8d4f08               lea ecx, [edi + 8]
// 00581d3d  83caff               or edx, 0xffffffff
// 00581d40  f00fc111             lock xadd dword ptr [ecx], edx
// 00581d44  7509                 jne 0x581d4f
// 00581d46  8b07                 mov eax, dword ptr [edi]
// 00581d48  8b5008               mov edx, dword ptr [eax + 8]
// 00581d4b  8bcf                 mov ecx, edi
// 00581d4d  ffd2                 call edx
// 00581d4f  8b4604               mov eax, dword ptr [esi + 4]
// 00581d52  5f                   pop edi
// 00581d53  5e                   pop esi
// 00581d54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581d58  64890d00000000       mov dword ptr fs:[0], ecx
// 00581d5f  83c414               add esp, 0x14
// 00581d62  c20400               ret 4
// 00581d65  8b4604               mov eax, dword ptr [esi + 4]
// 00581d68  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00581d6c  5e                   pop esi
// 00581d6d  64890d00000000       mov dword ptr fs:[0], ecx
// 00581d74  83c414               add esp, 0x14
// 00581d77  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace RBX {
struct Instance;
struct ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
    ~Reference();
};

__forceinline Reference::~Reference()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Product {
    void* object;
    Reference reference;
};

Product __cdecl func_00618a40(RBX::ServiceProvider*);

struct S {
    RBX::Instance* instance;
    Product cached;
    void* f(int);
};

void* S::f(int)
{
    if (!cached.object)
        cached = func_00618a40(func_00421cb0(instance));
    return cached.object;
}
