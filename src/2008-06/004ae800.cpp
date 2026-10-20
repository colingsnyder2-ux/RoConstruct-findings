// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_boundreference_47d97823779339e3.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
// from server: 80% by colin
// from server: 74% by king_originala
// roc 2008-06 004ae800  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae800
//
// 004ae800  8b442408             mov eax, dword ptr [esp + 8]
// 004ae804  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ae808  50                   push eax
// 004ae809  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004ae80c  83ec08               sub esp, 8
// 004ae80f  8bd4                 mov edx, esp
// 004ae811  8902                 mov dword ptr [edx], eax
// 004ae813  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004ae816  89642410             mov dword ptr [esp + 0x10], esp
// 004ae81a  894204               mov dword ptr [edx + 4], eax
// 004ae81d  85c0                 test eax, eax
// 004ae81f  740c                 je 0x4ae82d
// 004ae821  83c004               add eax, 4
// 004ae824  ba01000000           mov edx, 1
// 004ae829  f00fc110             lock xadd dword ptr [eax], edx
// 004ae82d  8b4108               mov eax, dword ptr [ecx + 8]
// 004ae830  50                   push eax
// 004ae831  e8da80feff           call 0x496910
// 004ae836  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef boost::shared_ptr<void> Pair;

struct S {
    unsigned char padding[8];
    void* pointer;
    Pair value;
    void helper(void*, Pair, void*);
};



void __cdecl function(S& object, void* argument)
{
    object.helper(object.pointer, object.value, argument);
}
