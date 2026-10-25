// from server: 100% by king_originala
// roc 2008-06 005893b0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005893b0
//
// 005893b0  56                   push esi
// 005893b1  8d442408             lea eax, [esp + 8]
// 005893b5  8bf1                 mov esi, ecx
// 005893b7  50                   push eax
// 005893b8  c70600000000         mov dword ptr [esi], 0
// 005893be  e82d0f0800           call 0x60a2f0
// 005893c3  83c404               add esp, 4
// 005893c6  84c0                 test al, al
// 005893c8  752e                 jne 0x5893f8
// 005893ca  8d4608               lea eax, [esi + 8]
// 005893cd  85c0                 test eax, eax
// 005893cf  741b                 je 0x5893ec
// 005893d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005893d5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005893d9  8908                 mov dword ptr [eax], ecx
// 005893db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005893df  895004               mov dword ptr [eax + 4], edx
// 005893e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 005893e6  894808               mov dword ptr [eax + 8], ecx
// 005893e9  89500c               mov dword ptr [eax + 0xc], edx
// 005893ec  c70644178300         mov dword ptr [esi], 0x831744
// 005893f2  8bc6                 mov eax, esi
// 005893f4  5e                   pop esi
// 005893f5  c21400               ret 0x14
// 005893f8  c70600000000         mov dword ptr [esi], 0
// 005893fe  8bc6                 mov eax, esi
// 00589400  5e                   pop esi
// 00589401  c21400               ret 0x14

struct Value
{
    unsigned int words[4];
};

struct Argument
{
    Value value;
    unsigned int extra;
};

extern "C" bool __cdecl func_0060a2f0();
extern unsigned char marker;

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct S
{
    void* tag;
    unsigned int reserved;
    Value value;

    S* f(Argument argument);
};

S* S::f(Argument argument)
{
    tag = 0;
    if (!((bool (__cdecl *)(const Argument*))func_0060a2f0)(&argument))
    {
        new (&value) Value(argument.value);
        tag = &marker;
    }
    else
    {
        tag = 0;
    }
    return this;
}
