// from server: 100% by king_originala
// roc 2008-06 00581d80  unit: RBX::CameraModelViewCommand  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00581d80
//
// 00581d80  64a100000000         mov eax, dword ptr fs:[0]
// 00581d86  6aff                 push -1
// 00581d88  6868917d00           push 0x7d9168
// 00581d8d  50                   push eax
// 00581d8e  64892500000000       mov dword ptr fs:[0], esp
// 00581d95  83ec08               sub esp, 8
// 00581d98  56                   push esi
// 00581d99  8bf1                 mov esi, ecx
// 00581d9b  837e0400             cmp dword ptr [esi + 4], 0
// 00581d9f  0f8580000000         jne 0x581e25
// 00581da5  8b06                 mov eax, dword ptr [esi]
// 00581da7  57                   push edi
// 00581da8  50                   push eax
// 00581da9  e852eaffff           call 0x580800
// 00581dae  50                   push eax
// 00581daf  8d4c2410             lea ecx, [esp + 0x10]
// 00581db3  51                   push ecx
// 00581db4  e8876c0900           call 0x618a40
// 00581db9  83c40c               add esp, 0xc
// 00581dbc  8b10                 mov edx, dword ptr [eax]
// 00581dbe  83c004               add eax, 4
// 00581dc1  50                   push eax
// 00581dc2  8d4e08               lea ecx, [esi + 8]
// 00581dc5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00581dcd  895604               mov dword ptr [esi + 4], edx
// 00581dd0  e8db07e8ff           call 0x4025b0
// 00581dd5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00581dd9  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00581de1  85ff                 test edi, edi
// 00581de3  742a                 je 0x581e0f
// 00581de5  8d4704               lea eax, [edi + 4]
// 00581de8  83c9ff               or ecx, 0xffffffff
// 00581deb  f00fc108             lock xadd dword ptr [eax], ecx
// 00581def  751e                 jne 0x581e0f
// 00581df1  8b17                 mov edx, dword ptr [edi]
// 00581df3  8b4204               mov eax, dword ptr [edx + 4]
// 00581df6  8bcf                 mov ecx, edi
// 00581df8  ffd0                 call eax
// 00581dfa  8d4f08               lea ecx, [edi + 8]
// 00581dfd  83caff               or edx, 0xffffffff
// 00581e00  f00fc111             lock xadd dword ptr [ecx], edx
// 00581e04  7509                 jne 0x581e0f
// 00581e06  8b07                 mov eax, dword ptr [edi]
// 00581e08  8b5008               mov edx, dword ptr [eax + 8]
// 00581e0b  8bcf                 mov ecx, edi
// 00581e0d  ffd2                 call edx
// 00581e0f  8b4604               mov eax, dword ptr [esi + 4]
// 00581e12  5f                   pop edi
// 00581e13  5e                   pop esi
// 00581e14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581e18  64890d00000000       mov dword ptr fs:[0], ecx
// 00581e1f  83c414               add esp, 0x14
// 00581e22  c20400               ret 4
// 00581e25  8b4604               mov eax, dword ptr [esi + 4]
// 00581e28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00581e2c  5e                   pop esi
// 00581e2d  64890d00000000       mov dword ptr fs:[0], ecx
// 00581e34  83c414               add esp, 0x14
// 00581e37  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace RBX {
struct Instance;
struct ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_00580800(RBX::Instance*);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Control* control;
    ~Handle();
    Handle& operator=(const Handle&);
};

__forceinline Handle::~Handle()
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
    Handle handle;
    Product(const Product&);
    Product& operator=(const Product&);
};

__forceinline Product& Product::operator=(const Product& other)
{
    object = other.object;
    handle = other.handle;
    return *this;
}

Product __cdecl func_00618a40(RBX::ServiceProvider*);

struct S {
    RBX::Instance* instance;
    Product cached;
    void* get(void*);
};

void* S::get(void*)
{
    if (!cached.object)
        cached = func_00618a40(func_00580800(instance));
    return cached.object;
}
