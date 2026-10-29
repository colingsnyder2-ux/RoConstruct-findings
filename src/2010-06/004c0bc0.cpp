// roc 2010-06 004c0bc0  unit: RBX::Network::Players  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0bc0
//
// 004c0bc0  6aff                 push -1
// 004c0bc2  6889009a00           push 0x9a0089
// 004c0bc7  64a100000000         mov eax, dword ptr fs:[0]
// 004c0bcd  50                   push eax
// 004c0bce  64892500000000       mov dword ptr fs:[0], esp
// 004c0bd5  51                   push ecx
// 004c0bd6  56                   push esi
// 004c0bd7  57                   push edi
// 004c0bd8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c0bdc  8bf1                 mov esi, ecx
// 004c0bde  57                   push edi
// 004c0bdf  8974240c             mov dword ptr [esp + 0xc], esi
// 004c0be3  ff150ca49e00         call dword ptr [0x9ea40c]
// 004c0be9  8d471c               lea eax, [edi + 0x1c]
// 004c0bec  50                   push eax
// 004c0bed  8d4e1c               lea ecx, [esi + 0x1c]
// 004c0bf0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c0bf8  ff150ca49e00         call dword ptr [0x9ea40c]
// 004c0bfe  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 004c0c01  894e38               mov dword ptr [esi + 0x38], ecx
// 004c0c04  8b473c               mov eax, dword ptr [edi + 0x3c]
// 004c0c07  89463c               mov dword ptr [esi + 0x3c], eax
// 004c0c0a  85c0                 test eax, eax
// 004c0c0c  740c                 je 0x4c0c1a
// 004c0c0e  83c004               add eax, 4
// 004c0c11  ba01000000           mov edx, 1
// 004c0c16  f00fc110             lock xadd dword ptr [eax], edx
// 004c0c1a  8b4740               mov eax, dword ptr [edi + 0x40]
// 004c0c1d  894640               mov dword ptr [esi + 0x40], eax
// 004c0c20  8b7f44               mov edi, dword ptr [edi + 0x44]
// 004c0c23  897e44               mov dword ptr [esi + 0x44], edi
// 004c0c26  85ff                 test edi, edi
// 004c0c28  740c                 je 0x4c0c36
// 004c0c2a  83c704               add edi, 4
// 004c0c2d  b901000000           mov ecx, 1
// 004c0c32  f00fc10f             lock xadd dword ptr [edi], ecx
// 004c0c36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c0c3a  5f                   pop edi
// 004c0c3b  8bc6                 mov eax, esi
// 004c0c3d  5e                   pop esi
// 004c0c3e  64890d00000000       mov dword ptr fs:[0], ecx
// 004c0c45  83c410               add esp, 0x10
// 004c0c48  c20400               ret 4
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