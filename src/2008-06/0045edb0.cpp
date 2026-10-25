// from server: 100% by king_originala
// roc 2008-06 0045edb0  unit: G3D::VStopwatch::?$TypedStatsItem  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045edb0
//
// 0045edb0  64a100000000         mov eax, dword ptr fs:[0]
// 0045edb6  6aff                 push -1
// 0045edb8  687b2f7c00           push 0x7c2f7b
// 0045edbd  50                   push eax
// 0045edbe  64892500000000       mov dword ptr fs:[0], esp
// 0045edc5  8b01                 mov eax, dword ptr [ecx]
// 0045edc7  81ec80000000         sub esp, 0x80
// 0045edcd  85c0                 test eax, eax
// 0045edcf  7519                 jne 0x45edea
// 0045edd1  8d0c24               lea ecx, [esp]
// 0045edd4  e817b1faff           call 0x409ef0
// 0045edd9  50                   push eax
// 0045edda  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 0045ede5  e816b7faff           call 0x40a500
// 0045edea  8b5004               mov edx, dword ptr [eax + 4]
// 0045eded  56                   push esi
// 0045edee  83c108               add ecx, 8
// 0045edf1  57                   push edi
// 0045edf2  51                   push ecx
// 0045edf3  8d4c2434             lea ecx, [esp + 0x34]
// 0045edf7  51                   push ecx
// 0045edf8  ffd2                 call edx
// 0045edfa  8bf0                 mov esi, eax
// 0045edfc  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0045ee03  83c408               add esp, 8
// 0045ee06  b916000000           mov ecx, 0x16
// 0045ee0b  8bf8                 mov edi, eax
// 0045ee0d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0045ee0f  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0045ee16  5f                   pop edi
// 0045ee17  5e                   pop esi
// 0045ee18  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ee1f  81c48c000000         add esp, 0x8c
// 0045ee25  c20400               ret 4

struct Result
{
    unsigned int words[22];
};

struct Exception
{
    char storage[40];
    Exception();
    ~Exception();
};

__declspec(noreturn) void __cdecl throw_exception(const Exception &);

typedef Result (__cdecl *Invoker)(const void *);

struct Table
{
    void (__cdecl *manager)();
    Invoker invoke;
};

struct S
{
    const Table *table;
    unsigned int padding;
    char buffer[4];

    Result operator()() const;
};

Result S::operator()() const
{
    if (!table)
        throw_exception(Exception());

    return table->invoke(buffer);
}
