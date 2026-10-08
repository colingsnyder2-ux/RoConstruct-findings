// from server: 63% by colin
// roc 2007-08 00493480  unit: RBX::VInstance::?$NonFactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493480
//
// 00493480  8911                 mov dword ptr [ecx], edx
// 00493482  8b4608               mov eax, dword ptr [esi + 8]
// 00493485  85c0                 test eax, eax
// 00493487  8964242c             mov dword ptr [esp + 0x2c], esp
// 0049348b  894104               mov dword ptr [ecx + 4], eax
// 0049348e  740c                 je 0x49349c
// 00493490  83c004               add eax, 4
// 00493493  b901000000           mov ecx, 1
// 00493498  f00fc108             lock xadd dword ptr [eax], ecx
// 0049349c  8b16                 mov edx, dword ptr [esi]
// 0049349e  ffd2                 call edx
// 004934a0  83c424               add esp, 0x24
// 004934a3  5e                   pop esi
// 004934a4  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    void f(int* src);
};

void S::f(int* src) {
    int* self = (int*)this;
    self[0] = (int)src;
    int v = ((int*)src)[2];
    self[1] = v;
    if (v != 0) {
        _InterlockedExchangeAdd((volatile long*)(v + 4), 1);
    }
    void (*fn)() = *(void (**)())src;
    fn();
}
