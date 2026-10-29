// roc 2009-12 005135e0  unit: RBX::Network::Players  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005135e0
//
// 005135e0  6aff                 push -1
// 005135e2  68598c9300           push 0x938c59
// 005135e7  64a100000000         mov eax, dword ptr fs:[0]
// 005135ed  50                   push eax
// 005135ee  64892500000000       mov dword ptr fs:[0], esp
// 005135f5  51                   push ecx
// 005135f6  56                   push esi
// 005135f7  57                   push edi
// 005135f8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005135fc  8bf1                 mov esi, ecx
// 005135fe  57                   push edi
// 005135ff  8974240c             mov dword ptr [esp + 0xc], esi
// 00513603  ff15f0b69800         call dword ptr [0x98b6f0]
// 00513609  8d471c               lea eax, [edi + 0x1c]
// 0051360c  50                   push eax
// 0051360d  8d4e1c               lea ecx, [esi + 0x1c]
// 00513610  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00513618  ff15f0b69800         call dword ptr [0x98b6f0]
// 0051361e  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00513621  894e38               mov dword ptr [esi + 0x38], ecx
// 00513624  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00513627  89463c               mov dword ptr [esi + 0x3c], eax
// 0051362a  85c0                 test eax, eax
// 0051362c  740c                 je 0x51363a
// 0051362e  83c004               add eax, 4
// 00513631  ba01000000           mov edx, 1
// 00513636  f00fc110             lock xadd dword ptr [eax], edx
// 0051363a  8b4740               mov eax, dword ptr [edi + 0x40]
// 0051363d  894640               mov dword ptr [esi + 0x40], eax
// 00513640  8b7f44               mov edi, dword ptr [edi + 0x44]
// 00513643  897e44               mov dword ptr [esi + 0x44], edi
// 00513646  85ff                 test edi, edi
// 00513648  740c                 je 0x513656
// 0051364a  83c704               add edi, 4
// 0051364d  b901000000           mov ecx, 1
// 00513652  f00fc10f             lock xadd dword ptr [edi], ecx
// 00513656  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051365a  5f                   pop edi
// 0051365b  8bc6                 mov eax, esi
// 0051365d  5e                   pop esi
// 0051365e  64890d00000000       mov dword ptr fs:[0], ecx
// 00513665  83c410               add esp, 0x10
// 00513668  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct String;
extern String* (__thiscall *stringCopy)(String*, const String&);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

inline String::String(const String& source)
{
    stringCopy(this, source);
}

inline void increment(volatile long* value)
{
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(value, 1);
}

struct RefCount {
    long reserved;
    volatile long count;
    void addRef() { _InterlockedIncrement(&count); }
};

struct Count {
    RefCount* pi;
    Count(const Count& other) : pi(other.pi)
    {
        if (pi != 0)
            pi->addRef();
    }
};

struct Shared {
    void* px;
    Count pn;
};

struct S {
    String first;
    String second;
    Shared firstShared;
    Shared secondShared;

    S(const S&);
};

S::S(const S& source)
    : first(source.first), second(source.second),
      firstShared(source.firstShared), secondShared(source.secondShared)
{
}