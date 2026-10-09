// from server: 69% by colin
// roc 2007-08 004a6e90  unit: RBX::Network::Replicator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6e90
//
// 004a6e90  8b442404             mov eax, dword ptr [esp + 4]
// 004a6e94  56                   push esi
// 004a6e95  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a6e99  85f6                 test esi, esi
// 004a6e9b  57                   push edi
// 004a6e9c  8bf9                 mov edi, ecx
// 004a6e9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a6ea2  8907                 mov dword ptr [edi], eax
// 004a6ea4  894f04               mov dword ptr [edi + 4], ecx
// 004a6ea7  897708               mov dword ptr [edi + 8], esi
// 004a6eaa  7435                 je 0x4a6ee1
// 004a6eac  8d4604               lea eax, [esi + 4]
// 004a6eaf  8bd0                 mov edx, eax
// 004a6eb1  b901000000           mov ecx, 1
// 004a6eb6  f00fc10a             lock xadd dword ptr [edx], ecx
// 004a6eba  83caff               or edx, 0xffffffff
// 004a6ebd  f00fc110             lock xadd dword ptr [eax], edx
// 004a6ec1  751e                 jne 0x4a6ee1
// 004a6ec3  8b06                 mov eax, dword ptr [esi]
// 004a6ec5  8b5004               mov edx, dword ptr [eax + 4]
// 004a6ec8  8bce                 mov ecx, esi
// 004a6eca  ffd2                 call edx
// 004a6ecc  8d4608               lea eax, [esi + 8]
// 004a6ecf  83c9ff               or ecx, 0xffffffff
// 004a6ed2  f00fc108             lock xadd dword ptr [eax], ecx
// 004a6ed6  7509                 jne 0x4a6ee1
// 004a6ed8  8b16                 mov edx, dword ptr [esi]
// 004a6eda  8b4208               mov eax, dword ptr [edx + 8]
// 004a6edd  8bce                 mov ecx, esi
// 004a6edf  ffd0                 call eax
// 004a6ee1  8bc7                 mov eax, edi
// 004a6ee3  5f                   pop edi
// 004a6ee4  5e                   pop esi
// 004a6ee5  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct S {
    void* field0;
    void* field4;
    RefCounted* field8;
    S* construct(void* a, void* b, RefCounted* c);
};

S* S::construct(void* a, void* b, RefCounted* c)
{
    this->field0 = a;
    this->field4 = b;
    this->field8 = c;
    if (c) {
        if (_InterlockedExchangeAdd(&c->refCount, 1) == 0) {
            void** vt = c->vptr;
            void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            fn(c);
        }
        if (_InterlockedExchangeAdd(&c->weakRefCount, -1) == 1) {
            void** vt = c->vptr;
            void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[2];
            fn(c);
        }
    }
    return this;
}
