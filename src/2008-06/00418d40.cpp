// from server: 100% by king_originala
// roc 2008-06 00418d40  unit: VCLuaFunction::?$CComAggObject  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418d40
//
// 00418d40  6aff                 push -1
// 00418d42  68f8dc7b00           push 0x7bdcf8
// 00418d47  64a100000000         mov eax, dword ptr fs:[0]
// 00418d4d  50                   push eax
// 00418d4e  64892500000000       mov dword ptr fs:[0], esp
// 00418d55  51                   push ecx
// 00418d56  8b442414             mov eax, dword ptr [esp + 0x14]
// 00418d5a  56                   push esi
// 00418d5b  8bf1                 mov esi, ecx
// 00418d5d  8b08                 mov ecx, dword ptr [eax]
// 00418d5f  890e                 mov dword ptr [esi], ecx
// 00418d61  8b4804               mov ecx, dword ptr [eax + 4]
// 00418d64  89742404             mov dword ptr [esp + 4], esi
// 00418d68  894e04               mov dword ptr [esi + 4], ecx
// 00418d6b  85c9                 test ecx, ecx
// 00418d6d  740c                 je 0x418d7b
// 00418d6f  83c104               add ecx, 4
// 00418d72  ba01000000           mov edx, 1
// 00418d77  f00fc111             lock xadd dword ptr [ecx], edx
// 00418d7b  8b4808               mov ecx, dword ptr [eax + 8]
// 00418d7e  894e08               mov dword ptr [esi + 8], ecx
// 00418d81  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00418d84  894e0c               mov dword ptr [esi + 0xc], ecx
// 00418d87  85c9                 test ecx, ecx
// 00418d89  740c                 je 0x418d97
// 00418d8b  83c104               add ecx, 4
// 00418d8e  ba01000000           mov edx, 1
// 00418d93  f00fc111             lock xadd dword ptr [ecx], edx
// 00418d97  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00418d9a  894e10               mov dword ptr [esi + 0x10], ecx
// 00418d9d  83c014               add eax, 0x14
// 00418da0  50                   push eax
// 00418da1  8d4e14               lea ecx, [esi + 0x14]
// 00418da4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00418dac  ff155c248000         call dword ptr [0x80245c]
// 00418db2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00418db6  8bc6                 mov eax, esi
// 00418db8  5e                   pop esi
// 00418db9  64890d00000000       mov dword ptr fs:[0], ecx
// 00418dc0  83c410               add esp, 0x10
// 00418dc3  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

__forceinline void increment(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control
{
    void* table;
    volatile long strong;
};

struct Payload
{
    void* first;
    Control* firstControl;
    void* second;
    Control* secondControl;
    int value;

    Payload(const Payload& source);
    ~Payload();
};

struct String
{
    unsigned char storage[28];
};

extern String* (__thiscall *copy_string)(String*, const String*);

struct S
{
    Payload payload;
    String text;

    S(const S& source);
};

__forceinline Payload::Payload(const Payload& source)
{
    first = source.first;
    firstControl = source.firstControl;
    if (firstControl)
        increment(&firstControl->strong);

    second = source.second;
    secondControl = source.secondControl;
    if (secondControl)
        increment(&secondControl->strong);

    value = source.value;
}

S::S(const S& source) : payload(source.payload)
{
    copy_string(&text, &source.text);
}
