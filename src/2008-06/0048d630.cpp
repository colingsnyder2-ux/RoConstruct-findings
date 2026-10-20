// from server: 22% by colin
// roc 2008-06 0048d630  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d630
//
// 0048d630  6aff                 push -1
// 0048d632  6800ef7b00           push 0x7bef00
// 0048d637  64a100000000         mov eax, dword ptr fs:[0]
// 0048d63d  50                   push eax
// 0048d63e  64892500000000       mov dword ptr fs:[0], esp
// 0048d645  83ec10               sub esp, 0x10
// 0048d648  53                   push ebx
// 0048d649  55                   push ebp
// 0048d64a  56                   push esi
// 0048d64b  57                   push edi
// 0048d64c  0fb60500fc9600       movzx eax, byte ptr [0x96fc00]
// 0048d653  8b542430             mov edx, dword ptr [esp + 0x30]
// 0048d657  83ec0c               sub esp, 0xc
// 0048d65a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0048d65e  8bcc                 mov ecx, esp
// 0048d660  50                   push eax
// 0048d661  83ec08               sub esp, 8
// 0048d664  8bc4                 mov eax, esp
// 0048d666  8910                 mov dword ptr [eax], edx
// 0048d668  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0048d66c  895004               mov dword ptr [eax + 4], edx
// 0048d66f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0048d673  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0048d67b  89642428             mov dword ptr [esp + 0x28], esp
// 0048d67f  85c0                 test eax, eax
// 0048d681  740c                 je 0x48d68f
// 0048d683  83c004               add eax, 4
// 0048d686  ba01000000           mov edx, 1
// 0048d68b  f00fc110             lock xadd dword ptr [eax], edx
// 0048d68f  6890a64800           push 0x48a690
// 0048d694  51                   push ecx
// 0048d695  e866f5ffff           call 0x48cc00
// 0048d69a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0048d69e  8b7810               mov edi, dword ptr [eax + 0x10]
// 0048d6a1  83c414               add esp, 0x14
// 0048d6a4  8bf0                 mov esi, eax
// 0048d6a6  39780c               cmp dword ptr [eax + 0xc], edi
// 0048d6a9  760a                 jbe 0x48d6b5
// 0048d6ab  ff1590288000         call dword ptr [0x802890]
// 0048d6b1  8b442444             mov eax, dword ptr [esp + 0x44]
// 0048d6b5  8b1e                 mov ebx, dword ptr [esi]
// 0048d6b7  8b700c               mov esi, dword ptr [eax + 0xc]
// 0048d6ba  8be8                 mov ebp, eax
// 0048d6bc  3b7010               cmp esi, dword ptr [eax + 0x10]
// 0048d6bf  7606                 jbe 0x48d6c7
// 0048d6c1  ff1590288000         call dword ptr [0x802890]
// 0048d6c7  8b4500               mov eax, dword ptr [ebp]
// 0048d6ca  57                   push edi
// 0048d6cb  53                   push ebx
// 0048d6cc  56                   push esi
// 0048d6cd  50                   push eax
// 0048d6ce  8d442430             lea eax, [esp + 0x30]
// 0048d6d2  50                   push eax
// 0048d6d3  e818faffff           call 0x48d0f0
// 0048d6d8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0048d6dc  83c420               add esp, 0x20
// 0048d6df  85c0                 test eax, eax
// 0048d6e1  742c                 je 0x48d70f
// 0048d6e3  8bf0                 mov esi, eax
// 0048d6e5  83c004               add eax, 4
// 0048d6e8  83c9ff               or ecx, 0xffffffff
// 0048d6eb  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d6ef  751e                 jne 0x48d70f
// 0048d6f1  8b16                 mov edx, dword ptr [esi]
// 0048d6f3  8b4204               mov eax, dword ptr [edx + 4]
// 0048d6f6  8bce                 mov ecx, esi
// 0048d6f8  ffd0                 call eax
// 0048d6fa  8d4e08               lea ecx, [esi + 8]
// 0048d6fd  83caff               or edx, 0xffffffff
// 0048d700  f00fc111             lock xadd dword ptr [ecx], edx
// 0048d704  7509                 jne 0x48d70f
// 0048d706  8b06                 mov eax, dword ptr [esi]
// 0048d708  8b5008               mov edx, dword ptr [eax + 8]
// 0048d70b  8bce                 mov ecx, esi
// 0048d70d  ffd2                 call edx
// 0048d70f  8b742434             mov esi, dword ptr [esp + 0x34]
// 0048d713  c644242800           mov byte ptr [esp + 0x28], 0
// 0048d718  85f6                 test esi, esi
// 0048d71a  742a                 je 0x48d746
// 0048d71c  8d4604               lea eax, [esi + 4]
// 0048d71f  83c9ff               or ecx, 0xffffffff
// 0048d722  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d726  751e                 jne 0x48d746
// 0048d728  8b16                 mov edx, dword ptr [esi]
// 0048d72a  8b4204               mov eax, dword ptr [edx + 4]
// 0048d72d  8bce                 mov ecx, esi
// 0048d72f  ffd0                 call eax
// 0048d731  8d4e08               lea ecx, [esi + 8]
// 0048d734  83caff               or edx, 0xffffffff
// 0048d737  f00fc111             lock xadd dword ptr [ecx], edx
// 0048d73b  7509                 jne 0x48d746
// 0048d73d  8b06                 mov eax, dword ptr [esi]
// 0048d73f  8b5008               mov edx, dword ptr [eax + 8]
// 0048d742  8bce                 mov ecx, esi
// 0048d744  ffd2                 call edx
// 0048d746  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0048d74a  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0048d752  85f6                 test esi, esi
// 0048d754  742a                 je 0x48d780
// 0048d756  8d4604               lea eax, [esi + 4]
// 0048d759  83c9ff               or ecx, 0xffffffff
// 0048d75c  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d760  751e                 jne 0x48d780
// 0048d762  8b16                 mov edx, dword ptr [esi]
// 0048d764  8b4204               mov eax, dword ptr [edx + 4]
// 0048d767  8bce                 mov ecx, esi
// 0048d769  ffd0                 call eax
// 0048d76b  8d4e08               lea ecx, [esi + 8]
// 0048d76e  83caff               or edx, 0xffffffff
// 0048d771  f00fc111             lock xadd dword ptr [ecx], edx
// 0048d775  7509                 jne 0x48d780
// 0048d777  8b06                 mov eax, dword ptr [esi]
// 0048d779  8b5008               mov edx, dword ptr [eax + 8]
// 0048d77c  8bce                 mov ecx, esi
// 0048d77e  ffd2                 call edx
// 0048d780  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048d784  5f                   pop edi
// 0048d785  5e                   pop esi
// 0048d786  5d                   pop ebp
// 0048d787  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d78e  5b                   pop ebx
// 0048d78f  83c41c               add esp, 0x1c
// 0048d792  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
};

struct RefCounted
{
    void* vtable;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Holder
{
    RefCounted* ptr;
};

struct Pair
{
    RefCounted* first;
    RefCounted* second;
};

extern "C" void __cdecl sub_48CC00(void*, void*);
extern "C" void __cdecl sub_48D0F0(void*, void*, void*, void*, void*);

void __cdecl sub_48D630(Holder* out, RefCounted* a, RefCounted* b, RefCounted* c)
{
    RefCounted* d = out->ptr;
    RefCounted* e = a;

    if (d->refCount > d->weakRefCount)
        _invalid_parameter_noinfo();
    void* v1 = d->vtable;
    void* v2 = (void*)d->refCount;
    if (e->refCount > e->weakRefCount)
        _invalid_parameter_noinfo();
    void* v3 = e->vtable;
    void* v4 = (void*)e->refCount;

    sub_48D0F0(out, v1, v2, v3, v4);

    RefCounted* h = out->ptr;
    if (h)
    {
        if (_InterlockedExchangeAdd(&h->refCount, -1) == 1)
        {
            ((void (__thiscall*)(RefCounted*))((void**)h->vtable)[1])(h);
            if (_InterlockedExchangeAdd(&h->weakRefCount, -1) == 1)
            {
                ((void (__thiscall*)(RefCounted*))((void**)h->vtable)[2])(h);
            }
        }
    }

    RefCounted* i = a;
    if (i)
    {
        if (_InterlockedExchangeAdd(&i->refCount, -1) == 1)
        {
            ((void (__thiscall*)(RefCounted*))((void**)i->vtable)[1])(i);
            if (_InterlockedExchangeAdd(&i->weakRefCount, -1) == 1)
            {
                ((void (__thiscall*)(RefCounted*))((void**)i->vtable)[2])(i);
            }
        }
    }

    RefCounted* j = b;
    if (j)
    {
        if (_InterlockedExchangeAdd(&j->refCount, -1) == 1)
        {
            ((void (__thiscall*)(RefCounted*))((void**)j->vtable)[1])(j);
            if (_InterlockedExchangeAdd(&j->weakRefCount, -1) == 1)
            {
                ((void (__thiscall*)(RefCounted*))((void**)j->vtable)[2])(j);
            }
        }
    }
}
