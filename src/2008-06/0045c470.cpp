// from server: 98% by colin
// from server: 87% by king_originala
// roc 2008-06 0045c470  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c470
//
// 0045c470  64a100000000         mov eax, dword ptr fs:[0]
// 0045c476  6aff                 push -1
// 0045c478  6858847c00           push 0x7c8458
// 0045c47d  50                   push eax
// 0045c47e  64892500000000       mov dword ptr fs:[0], esp
// 0045c485  81c108010000         add ecx, 0x108
// 0045c48b  83ec14               sub esp, 0x14
// 0045c48e  833900               cmp dword ptr [ecx], 0
// 0045c491  0f84cc000000         je 0x45c563
// 0045c497  53                   push ebx
// 0045c498  55                   push ebp
// 0045c499  56                   push esi
// 0045c49a  57                   push edi
// 0045c49b  8d442414             lea eax, [esp + 0x14]
// 0045c49f  50                   push eax
// 0045c4a0  e80b510300           call 0x4915b0
// 0045c4a5  8b742414             mov esi, dword ptr [esp + 0x14]
// 0045c4a9  8b4610               mov eax, dword ptr [esi + 0x10]
// 0045c4ac  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0045c4b2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0045c4ba  89442410             mov dword ptr [esp + 0x10], eax
// 0045c4be  39460c               cmp dword ptr [esi + 0xc], eax
// 0045c4c1  7602                 jbe 0x45c4c5
// 0045c4c3  ffd3                 call ebx
// 0045c4c5  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0045c4c8  8b0e                 mov ecx, dword ptr [esi]
// 0045c4ca  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0045c4ce  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0045c4d1  7602                 jbe 0x45c4d5
// 0045c4d3  ffd3                 call ebx
// 0045c4d5  8b36                 mov esi, dword ptr [esi]
// 0045c4d7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0045c4db  eb03                 jmp 0x45c4e0
// 0045c4dd  8d4900               lea ecx, [ecx]
// 0045c4e0  85f6                 test esi, esi
// 0045c4e2  7406                 je 0x45c4ea
// 0045c4e4  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0045c4e8  7402                 je 0x45c4ec
// 0045c4ea  ffd3                 call ebx
// 0045c4ec  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0045c4f0  7433                 je 0x45c525
// 0045c4f2  85f6                 test esi, esi
// 0045c4f4  7527                 jne 0x45c51d
// 0045c4f6  ffd3                 call ebx
// 0045c4f8  33c0                 xor eax, eax
// 0045c4fa  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0045c4fd  7202                 jb 0x45c501
// 0045c4ff  ffd3                 call ebx
// 0045c501  8b17                 mov edx, dword ptr [edi]
// 0045c503  52                   push edx
// 0045c504  ffd5                 call ebp
// 0045c506  83c404               add esp, 4
// 0045c509  85f6                 test esi, esi
// 0045c50b  7514                 jne 0x45c521
// 0045c50d  ffd3                 call ebx
// 0045c50f  33c0                 xor eax, eax
// 0045c511  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0045c514  7202                 jb 0x45c518
// 0045c516  ffd3                 call ebx
// 0045c518  83c708               add edi, 8
// 0045c51b  ebc3                 jmp 0x45c4e0
// 0045c51d  8b06                 mov eax, dword ptr [esi]
// 0045c51f  ebd9                 jmp 0x45c4fa
// 0045c521  8b06                 mov eax, dword ptr [esi]
// 0045c523  ebec                 jmp 0x45c511
// 0045c525  8b742418             mov esi, dword ptr [esp + 0x18]
// 0045c529  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0045c531  85f6                 test esi, esi
// 0045c533  742a                 je 0x45c55f
// 0045c535  8d4604               lea eax, [esi + 4]
// 0045c538  83c9ff               or ecx, 0xffffffff
// 0045c53b  f00fc108             lock xadd dword ptr [eax], ecx
// 0045c53f  751e                 jne 0x45c55f
// 0045c541  8b16                 mov edx, dword ptr [esi]
// 0045c543  8b4204               mov eax, dword ptr [edx + 4]
// 0045c546  8bce                 mov ecx, esi
// 0045c548  ffd0                 call eax
// 0045c54a  8d4e08               lea ecx, [esi + 8]
// 0045c54d  83caff               or edx, 0xffffffff
// 0045c550  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c554  7509                 jne 0x45c55f
// 0045c556  8b06                 mov eax, dword ptr [esi]
// 0045c558  8b5008               mov edx, dword ptr [eax + 8]
// 0045c55b  8bce                 mov ecx, esi
// 0045c55d  ffd2                 call edx
// 0045c55f  5f                   pop edi
// 0045c560  5e                   pop esi
// 0045c561  5d                   pop ebp
// 0045c562  5b                   pop ebx
// 0045c563  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045c567  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c56e  83c420               add esp, 0x20
// 0045c571  c20400               ret 4
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef void (__cdecl* Check)();
extern "C" Check invalid_parameter_noinfo;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Entry {
    void* value;
    unsigned long other;
};

struct Iterator {
    Proxy* proxy;
    Entry* position;
    Iterator(Proxy*, Entry*);
    bool different(const Iterator&, Check) const;
    void* value(Check) const;
    void advance(Check);
};

struct Vector {
    Proxy* proxy;
    unsigned long padding[2];
    Entry* first;
    Entry* last;
};

inline Iterator::Iterator(Proxy* p, Entry* e)
    : proxy(p), position(e)
{
}

inline bool Iterator::different(const Iterator& other, Check check) const
{
    if (!proxy || proxy != other.proxy)
        check();
    return position != other.position;
}

inline void* Iterator::value(Check check) const
{
    if (!proxy)
        check();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        check();
    return position->value;
}

inline void Iterator::advance(Check check)
{
    if (!proxy)
        check();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        check();
    ++position;
}

struct Shared {
    Vector* pointer;
    Control* control;
    ~Shared();
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

struct Holder {
    Vector* pointer;
    Control* control;
    Shared get();
};

struct S {
    unsigned char padding[0x108];
    Holder holder;
    void f(void (__cdecl*)(void*));
};

void S::f(void (__cdecl* callback)(void*))
{
    if (holder.pointer) {
        Shared shared = holder.get();
        Vector* vector = shared.pointer;
        Check check = invalid_parameter_noinfo;
        _ReadWriteBarrier();

        Entry* last = vector->last;
        if (vector->first > last)
            check();
        Iterator finish(vector->proxy, last);

        Entry* first = vector->first;
        if (first > vector->last)
            check();
        Iterator current(vector->proxy, first);

        while (current.different(finish, check)) {
            callback(current.value(check));
            current.advance(check);
        }
    }
}
