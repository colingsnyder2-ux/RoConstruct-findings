// from server: 100% by king_originala
// roc 2008-06 00466d40  unit: CSettingsExplorer  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466d40
//
// 00466d40  6aff                 push -1
// 00466d42  6808357c00           push 0x7c3508
// 00466d47  64a100000000         mov eax, dword ptr fs:[0]
// 00466d4d  50                   push eax
// 00466d4e  64892500000000       mov dword ptr fs:[0], esp
// 00466d55  51                   push ecx
// 00466d56  56                   push esi
// 00466d57  8bf1                 mov esi, ecx
// 00466d59  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00466d5d  6a00                 push 0
// 00466d5f  6818949200           push 0x929418
// 00466d64  687c909200           push 0x92907c
// 00466d69  6a00                 push 0
// 00466d6b  50                   push eax
// 00466d6c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00466d74  e84daa2300           call 0x6a17c6
// 00466d79  83c414               add esp, 0x14
// 00466d7c  85c0                 test eax, eax
// 00466d7e  7458                 je 0x466dd8
// 00466d80  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00466d84  83ec10               sub esp, 0x10
// 00466d87  8bc4                 mov eax, esp
// 00466d89  8908                 mov dword ptr [eax], ecx
// 00466d8b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00466d8f  895004               mov dword ptr [eax + 4], edx
// 00466d92  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00466d96  89642414             mov dword ptr [esp + 0x14], esp
// 00466d9a  85c9                 test ecx, ecx
// 00466d9c  740c                 je 0x466daa
// 00466d9e  83c104               add ecx, 4
// 00466da1  ba01000000           mov edx, 1
// 00466da6  f00fc111             lock xadd dword ptr [ecx], edx
// 00466daa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00466dae  894808               mov dword ptr [eax + 8], ecx
// 00466db1  8b542438             mov edx, dword ptr [esp + 0x38]
// 00466db5  89500c               mov dword ptr [eax + 0xc], edx
// 00466db8  8b442438             mov eax, dword ptr [esp + 0x38]
// 00466dbc  85c0                 test eax, eax
// 00466dbe  740c                 je 0x466dcc
// 00466dc0  83c004               add eax, 4
// 00466dc3  b901000000           mov ecx, 1
// 00466dc8  f00fc108             lock xadd dword ptr [eax], ecx
// 00466dcc  8b542428             mov edx, dword ptr [esp + 0x28]
// 00466dd0  52                   push edx
// 00466dd1  8bce                 mov ecx, esi
// 00466dd3  e8d8a3fbff           call 0x4211b0
// 00466dd8  8d4c241c             lea ecx, [esp + 0x1c]
// 00466ddc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00466de4  e877befbff           call 0x422c60
// 00466de9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00466ded  64890d00000000       mov dword ptr fs:[0], ecx
// 00466df4  5e                   pop esi
// 00466df5  83c410               add esp, 0x10
// 00466df8  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern char instanceType;
extern char itemType;
extern "C" void* __cdecl dynamicCast(void*, long, void*, void*, int);

__forceinline void incrementReference(volatile long* count) {
    _InterlockedExchangeAdd(count, 1);
}

struct Reference {
    long reserved;
    volatile long count;
};

struct Pair {
    void* first;
    Reference* firstReference;
    void* second;
    Reference* secondReference;

    Pair(const Pair&);
    ~Pair();
};

__forceinline Pair::Pair(const Pair& other) {
    first = other.first;
    firstReference = other.firstReference;
    if (firstReference)
        incrementReference(&firstReference->count);
    second = other.second;
    secondReference = other.secondReference;
    if (secondReference)
        incrementReference(&secondReference->count);
}

struct CSettingsExplorer {
    void forward(int, Pair);
    void process(int, Pair);
};

void CSettingsExplorer::process(int value, Pair objects) {
    if (dynamicCast(objects.first, 0, &instanceType, &itemType, 0))
        forward(value, objects);
}
