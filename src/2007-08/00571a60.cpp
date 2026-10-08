// from server: 46% by colin
// roc 2007-08 00571a60  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571a60
//
// 00571a60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00571a64  8d410c               lea eax, [ecx + 0xc]
// 00571a67  50                   push eax
// 00571a68  8b4104               mov eax, dword ptr [ecx + 4]
// 00571a6b  83ec08               sub esp, 8
// 00571a6e  8bd4                 mov edx, esp
// 00571a70  8902                 mov dword ptr [edx], eax
// 00571a72  8b4108               mov eax, dword ptr [ecx + 8]
// 00571a75  85c0                 test eax, eax
// 00571a77  89642410             mov dword ptr [esp + 0x10], esp
// 00571a7b  894204               mov dword ptr [edx + 4], eax
// 00571a7e  740c                 je 0x571a8c
// 00571a80  83c004               add eax, 4
// 00571a83  ba01000000           mov edx, 1
// 00571a88  f00fc110             lock xadd dword ptr [eax], edx
// 00571a8c  8b01                 mov eax, dword ptr [ecx]
// 00571a8e  ffd0                 call eax
// 00571a90  83c40c               add esp, 0xc
// 00571a93  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Udata {
    void* vtbl;
    void* field4;
    long* field8;
    char pad_c[0x10];
    void invoke();
};

void Udata::invoke()
{
    void* a = field4;
    long* b = field8;
    if (b != 0) {
        _InterlockedExchangeAdd(b + 1, 1);
    }
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))vtbl;
    fn(this, a, b);
}
