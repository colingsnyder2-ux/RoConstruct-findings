// from server: 39% by atomic.potato
// roc 2010-06 00724d10  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00724d10
//
// 00724d10  56                   push esi
// 00724d11  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724d15  85f6                 test esi, esi
// 00724d17  7479                 je 0x724d92
// 00724d19  83fe01               cmp esi, 1
// 00724d1c  7474                 je 0x724d92
// 00724d1e  83fe02               cmp esi, 2
// 00724d21  7536                 jne 0x724d59
// 00724d23  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00724d27  8b7008               mov esi, dword ptr [eax + 8]
// 00724d2a  85f6                 test esi, esi
// 00724d2c  744e                 je 0x724d7c
// 00724d2e  8d4e04               lea ecx, [esi + 4]
// 00724d31  83caff               or edx, 0xffffffff
// 00724d34  f00fc111             lock xadd dword ptr [ecx], edx
// 00724d38  7542                 jne 0x724d7c
// 00724d3a  8b06                 mov eax, dword ptr [esi]
// 00724d3c  8b5004               mov edx, dword ptr [eax + 4]
// 00724d3f  8bce                 mov ecx, esi
// 00724d41  ffd2                 call edx
// 00724d43  8d4608               lea eax, [esi + 8]
// 00724d46  83c9ff               or ecx, 0xffffffff
// 00724d49  f00fc108             lock xadd dword ptr [eax], ecx
// 00724d4d  752d                 jne 0x724d7c
// 00724d4f  8b16                 mov edx, dword ptr [esi]
// 00724d51  8b4208               mov eax, dword ptr [edx + 8]
// 00724d54  8bce                 mov ecx, esi
// 00724d56  5e                   pop esi
// 00724d57  ffe0                 jmp eax
// 00724d59  83fe03               cmp esi, 3
// 00724d5c  7520                 jne 0x724d7e
// 00724d5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00724d62  8b0e                 mov ecx, dword ptr [esi]
// 00724d64  682829be00           push 0xbe2928
// 00724d69  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00724d6f  0fb6c8               movzx ecx, al
// 00724d72  f7d9                 neg ecx
// 00724d74  1bc9                 sbb ecx, ecx
// 00724d76  234c2408             and ecx, dword ptr [esp + 8]
// 00724d7a  890e                 mov dword ptr [esi], ecx
// 00724d7c  5e                   pop esi
// 00724d7d  c3                   ret 
// 00724d7e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00724d82  c7002829be00         mov dword ptr [eax], 0xbe2928
// 00724d88  c6400400             mov byte ptr [eax + 4], 0
// 00724d8c  c6400500             mov byte ptr [eax + 5], 0
// 00724d90  5e                   pop esi
// 00724d91  c3                   ret 
// 00724d92  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00724d96  8b542408             mov edx, dword ptr [esp + 8]
// 00724d9a  85c0                 test eax, eax
// 00724d9c  7420                 je 0x724dbe
// 00724d9e  8b0a                 mov ecx, dword ptr [edx]
// 00724da0  8908                 mov dword ptr [eax], ecx
// 00724da2  8b4a04               mov ecx, dword ptr [edx + 4]
// 00724da5  894804               mov dword ptr [eax + 4], ecx
// 00724da8  8b4a08               mov ecx, dword ptr [edx + 8]
// 00724dab  894808               mov dword ptr [eax + 8], ecx
// 00724dae  85c9                 test ecx, ecx
// 00724db0  740c                 je 0x724dbe
// 00724db2  83c104               add ecx, 4
// 00724db5  b801000000           mov eax, 1
// 00724dba  f00fc101             lock xadd dword ptr [ecx], eax
// 00724dbe  83fe01               cmp esi, 1
// 00724dc1  75b9                 jne 0x724d7c
// 00724dc3  8b7208               mov esi, dword ptr [edx + 8]
// 00724dc6  85f6                 test esi, esi
// 00724dc8  74b2                 je 0x724d7c
// 00724dca  8d4e04               lea ecx, [esi + 4]
// 00724dcd  83caff               or edx, 0xffffffff
// 00724dd0  f00fc111             lock xadd dword ptr [ecx], edx
// 00724dd4  75a6                 jne 0x724d7c
// 00724dd6  8b06                 mov eax, dword ptr [esi]
// 00724dd8  8b5004               mov edx, dword ptr [eax + 4]
// 00724ddb  8bce                 mov ecx, esi
// 00724ddd  ffd2                 call edx
// 00724ddf  8d4608               lea eax, [esi + 8]
// 00724de2  83c9ff               or ecx, 0xffffffff
// 00724de5  f00fc108             lock xadd dword ptr [eax], ecx
// 00724de9  7591                 jne 0x724d7c
// 00724deb  8b16                 mov edx, dword ptr [esi]
// 00724ded  8b4208               mov eax, dword ptr [edx + 8]
// 00724df0  8bce                 mov ecx, esi
// 00724df2  5e                   pop esi
// 00724df3  ffe0                 jmp eax

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall MSVCR90_type_info_equals(const void*, const void*);

struct RefCounted {
    void** vptr;
    long refcount;
    long weakrefcount;
};

struct Holder {
    void* p0;
    RefCounted* p1;
};

struct TypeInfoHolder {
    const void* p0;
    char b4;
    char b5;
};

struct BindT {
    void* p0;
    RefCounted* p1;
};

extern "C" int __stdcall type_info_equals(const void*, const void*);

struct VYieldFunctionStateObject {
    void* p0;
    RefCounted* p1;
};

struct sp_counted_impl_p {
    void* p0;
    RefCounted* p1;
};

struct S {
};

void __cdecl f(void* dst, const void* src, int op)
{
    if (op == 0 || op == 1) {
        Holder* d = (Holder*)dst;
        const Holder* s = (const Holder*)src;
        if (d) {
            d->p0 = s->p0;
            d->p1 = s->p1;
            if (d->p1) {
                _InterlockedExchangeAdd(&d->p1->refcount, 1);
            }
        }
        if (op == 1) {
            RefCounted* r = s->p1;
            if (r) {
                if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                    ((void (__stdcall*)(RefCounted*))r->vptr[1])(r);
                    if (_InterlockedExchangeAdd(&r->weakrefcount, -1) == 1) {
                        ((void (__stdcall*)(RefCounted*))r->vptr[2])(r);
                    }
                }
            }
        }
        return;
    }
    if (op == 2) {
        const Holder* s = (const Holder*)src;
        RefCounted* r = s->p1;
        if (r) {
            if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                ((void (__stdcall*)(RefCounted*))r->vptr[1])(r);
                if (_InterlockedExchangeAdd(&r->weakrefcount, -1) == 1) {
                    ((void (__stdcall*)(RefCounted*))r->vptr[2])(r);
                }
            }
        }
        return;
    }
    if (op == 3) {
        TypeInfoHolder* d = (TypeInfoHolder*)dst;
        const void* ti = *(const void**)src;
        int eq = type_info_equals(ti, (const void*)0xbe2928);
        d->p0 = eq ? (const void*)0xbe2928 : 0;
        return;
    }
    TypeInfoHolder* d = (TypeInfoHolder*)dst;
    d->p0 = (const void*)0xbe2928;
    d->b4 = 0;
    d->b5 = 0;
}
