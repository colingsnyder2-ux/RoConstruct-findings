// from server: 78% by atomic.potato
// roc 2009-06 00637b30  unit: RBX::VScriptContext::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637b30
//
// 00637b30  51                   push ecx
// 00637b31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00637b35  50                   push eax
// 00637b36  c744240400000000     mov dword ptr [esp + 4], 0
// 00637b3e  e8adfcffff           call 0x6377f0
// 00637b43  8bc8                 mov ecx, eax
// 00637b45  8b11                 mov edx, dword ptr [ecx]
// 00637b47  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00637b4b  8910                 mov dword ptr [eax], edx
// 00637b4d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00637b50  83c404               add esp, 4
// 00637b53  894804               mov dword ptr [eax + 4], ecx
// 00637b56  85c9                 test ecx, ecx
// 00637b58  740c                 je 0x637b66
// 00637b5a  83c104               add ecx, 4
// 00637b5d  ba01000000           mov edx, 1
// 00637b62  f00fc111             lock xadd dword ptr [ecx], edx
// 00637b66  59                   pop ecx
// 00637b67  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    int a;
    volatile long ref;
};

struct Outer {
    int a;
    Inner* p;
};

extern Outer* __cdecl sub_6377f0(int);

Outer* __cdecl sub_637b30(Outer* out, int arg)
{
    Outer* r = sub_6377f0(arg);
    out->a = r->a;
    out->p = r->p;
    if (out->p)
        _InterlockedExchangeAdd(&out->p->ref, 1);
    return out;
}
