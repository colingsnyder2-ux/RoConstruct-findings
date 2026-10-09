// from server: 70% by colin
// roc 2007-08 00414110  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414110
//
// 00414110  8b442404             mov eax, dword ptr [esp + 4]
// 00414114  56                   push esi
// 00414115  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00414119  85f6                 test esi, esi
// 0041411b  57                   push edi
// 0041411c  8bf9                 mov edi, ecx
// 0041411e  8907                 mov dword ptr [edi], eax
// 00414120  897704               mov dword ptr [edi + 4], esi
// 00414123  740c                 je 0x414131
// 00414125  8d4e04               lea ecx, [esi + 4]
// 00414128  ba01000000           mov edx, 1
// 0041412d  f00fc111             lock xadd dword ptr [ecx], edx
// 00414131  85f6                 test esi, esi
// 00414133  8b442414             mov eax, dword ptr [esp + 0x14]
// 00414137  894708               mov dword ptr [edi + 8], eax
// 0041413a  742a                 je 0x414166
// 0041413c  8d4e04               lea ecx, [esi + 4]
// 0041413f  83caff               or edx, 0xffffffff
// 00414142  f00fc111             lock xadd dword ptr [ecx], edx
// 00414146  751e                 jne 0x414166
// 00414148  8b06                 mov eax, dword ptr [esi]
// 0041414a  8b5004               mov edx, dword ptr [eax + 4]
// 0041414d  8bce                 mov ecx, esi
// 0041414f  ffd2                 call edx
// 00414151  8d4608               lea eax, [esi + 8]
// 00414154  83c9ff               or ecx, 0xffffffff
// 00414157  f00fc108             lock xadd dword ptr [eax], ecx
// 0041415b  7509                 jne 0x414166
// 0041415d  8b16                 mov edx, dword ptr [esi]
// 0041415f  8b4208               mov eax, dword ptr [edx + 8]
// 00414162  8bce                 mov ecx, esi
// 00414164  ffd0                 call eax
// 00414166  8bc7                 mov eax, edi
// 00414168  5f                   pop edi
// 00414169  5e                   pop esi
// 0041416a  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Holder {
    void* ptr;
    RefCounted* ctrl;
    void* extra;
    Holder(void* p, RefCounted* c, void* e);
};

Holder::Holder(void* p, RefCounted* c, void* e)
{
    this->ptr = p;
    this->ctrl = c;
    if (c) {
        _InterlockedExchangeAdd(&c->refcount, 1);
    }
    this->extra = e;
    if (c) {
        if (_InterlockedExchangeAdd(&c->refcount, -1) == 1) {
            void** vt = (void**)c->vptr;
            void (__thiscall *fn)(RefCounted*) = (void (__thiscall*)(RefCounted*))vt[1];
            fn(c);
            if (_InterlockedExchangeAdd(&c->weakcount, -1) == 1) {
                void (__thiscall *fn2)(RefCounted*) = (void (__thiscall*)(RefCounted*))vt[2];
                fn2(c);
            }
        }
    }
}
