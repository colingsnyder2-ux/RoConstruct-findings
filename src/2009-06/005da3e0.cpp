// roc 2009-06 005da3e0  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da3e0
//
// 005da3e0  56                   push esi
// 005da3e1  57                   push edi
// 005da3e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005da3e6  57                   push edi
// 005da3e7  8bf1                 mov esi, ecx
// 005da3e9  ff15b8e48900         call dword ptr [0x89e4b8]
// 005da3ef  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005da3f2  89461c               mov dword ptr [esi + 0x1c], eax
// 005da3f5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 005da3f8  894e20               mov dword ptr [esi + 0x20], ecx
// 005da3fb  8b4724               mov eax, dword ptr [edi + 0x24]
// 005da3fe  894624               mov dword ptr [esi + 0x24], eax
// 005da401  85c0                 test eax, eax
// 005da403  740c                 je 0x5da411
// 005da405  83c004               add eax, 4
// 005da408  ba01000000           mov edx, 1
// 005da40d  f00fc110             lock xadd dword ptr [eax], edx
// 005da411  8b4728               mov eax, dword ptr [edi + 0x28]
// 005da414  894628               mov dword ptr [esi + 0x28], eax
// 005da417  8b7f2c               mov edi, dword ptr [edi + 0x2c]
// 005da41a  897e2c               mov dword ptr [esi + 0x2c], edi
// 005da41d  85ff                 test edi, edi
// 005da41f  740c                 je 0x5da42d
// 005da421  83c704               add edi, 4
// 005da424  b901000000           mov ecx, 1
// 005da429  f00fc10f             lock xadd dword ptr [edi], ecx
// 005da42d  5f                   pop edi
// 005da42e  8bc6                 mov eax, esi
// 005da430  5e                   pop esi
// 005da431  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 96% by king_originala
// roc 2008-06 0055d400  unit: RBX::MD5HasherImpl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d400
//
// 0055d400  56                   push esi
// 0055d401  57                   push edi
// 0055d402  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055d406  57                   push edi
// 0055d407  8bf1                 mov esi, ecx
// 0055d409  ff155c248000         call dword ptr [0x80245c]
// 0055d40f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0055d412  89461c               mov dword ptr [esi + 0x1c], eax
// 0055d415  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0055d418  894e20               mov dword ptr [esi + 0x20], ecx
// 0055d41b  8b4724               mov eax, dword ptr [edi + 0x24]
// 0055d41e  894624               mov dword ptr [esi + 0x24], eax
// 0055d421  85c0                 test eax, eax
// 0055d423  740c                 je 0x55d431
// 0055d425  83c004               add eax, 4
// 0055d428  ba01000000           mov edx, 1
// 0055d42d  f00fc110             lock xadd dword ptr [eax], edx
// 0055d431  8b4728               mov eax, dword ptr [edi + 0x28]
// 0055d434  894628               mov dword ptr [esi + 0x28], eax
// 0055d437  8b7f2c               mov edi, dword ptr [edi + 0x2c]
// 0055d43a  897e2c               mov dword ptr [esi + 0x2c], edi
// 0055d43d  85ff                 test edi, edi
// 0055d43f  740c                 je 0x55d44d
// 0055d441  83c704               add edi, 4
// 0055d444  b901000000           mov ecx, 1
// 0055d449  f00fc10f             lock xadd dword ptr [edi], ecx
// 0055d44d  5f                   pop edi
// 0055d44e  8bc6                 mov eax, esi
// 0055d450  5e                   pop esi
// 0055d451  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct String {
    char storage[28];
};

typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

struct Control {
    long reserved;
    volatile long references;
};

struct S : String {
    long value;
    void* first;
    Control* firstControl;
    void* second;
    Control* secondControl;

    S(const S&);
};

S::S(const S& source)
{
    copyString(this, source);
    value = source.value;
    first = source.first;
    firstControl = source.firstControl;
    if (firstControl) {
        volatile long* count = &firstControl->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }

    second = source.second;
    Control* control = source.secondControl;
    secondControl = control;
    if (control) {
        volatile long* count = &control->references;
        _ReadWriteBarrier();
        _InterlockedIncrement(count);
    }
}