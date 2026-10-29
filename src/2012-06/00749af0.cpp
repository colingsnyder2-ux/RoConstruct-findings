// roc 2012-06 00749af0  unit: boost::Vthread::?$sp_counted_impl_p  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00749af0
//
// 00749af0  56                   push esi
// 00749af1  57                   push edi
// 00749af2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00749af6  57                   push edi
// 00749af7  8bf1                 mov esi, ecx
// 00749af9  ff154426b200         call dword ptr [0xb22644]
// 00749aff  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00749b02  89461c               mov dword ptr [esi + 0x1c], eax
// 00749b05  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00749b08  894e20               mov dword ptr [esi + 0x20], ecx
// 00749b0b  8b4724               mov eax, dword ptr [edi + 0x24]
// 00749b0e  894624               mov dword ptr [esi + 0x24], eax
// 00749b11  85c0                 test eax, eax
// 00749b13  740c                 je 0x749b21
// 00749b15  83c004               add eax, 4
// 00749b18  ba01000000           mov edx, 1
// 00749b1d  f00fc110             lock xadd dword ptr [eax], edx
// 00749b21  8b4728               mov eax, dword ptr [edi + 0x28]
// 00749b24  894628               mov dword ptr [esi + 0x28], eax
// 00749b27  8b7f2c               mov edi, dword ptr [edi + 0x2c]
// 00749b2a  897e2c               mov dword ptr [esi + 0x2c], edi
// 00749b2d  85ff                 test edi, edi
// 00749b2f  740c                 je 0x749b3d
// 00749b31  83c704               add edi, 4
// 00749b34  b901000000           mov ecx, 1
// 00749b39  f00fc10f             lock xadd dword ptr [edi], ecx
// 00749b3d  5f                   pop edi
// 00749b3e  8bc6                 mov eax, esi
// 00749b40  5e                   pop esi
// 00749b41  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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