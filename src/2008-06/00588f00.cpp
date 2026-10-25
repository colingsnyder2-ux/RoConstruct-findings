// from server: 100% by king_originala
// roc 2008-06 00588f00  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00588f00
//
// 00588f00  56                   push esi
// 00588f01  8d442408             lea eax, [esp + 8]
// 00588f05  8bf1                 mov esi, ecx
// 00588f07  50                   push eax
// 00588f08  c70600000000         mov dword ptr [esi], 0
// 00588f0e  e8dd130800           call 0x60a2f0
// 00588f13  83c404               add esp, 4
// 00588f16  84c0                 test al, al
// 00588f18  752e                 jne 0x588f48
// 00588f1a  8d4608               lea eax, [esi + 8]
// 00588f1d  85c0                 test eax, eax
// 00588f1f  741b                 je 0x588f3c
// 00588f21  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00588f25  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00588f29  8908                 mov dword ptr [eax], ecx
// 00588f2b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00588f2f  895004               mov dword ptr [eax + 4], edx
// 00588f32  8b542414             mov edx, dword ptr [esp + 0x14]
// 00588f36  894808               mov dword ptr [eax + 8], ecx
// 00588f39  89500c               mov dword ptr [eax + 0xc], edx
// 00588f3c  c706c4168300         mov dword ptr [esi], 0x8316c4
// 00588f42  8bc6                 mov eax, esi
// 00588f44  5e                   pop esi
// 00588f45  c21400               ret 0x14
// 00588f48  c70600000000         mov dword ptr [esi], 0
// 00588f4e  8bc6                 mov eax, esi
// 00588f50  5e                   pop esi
// 00588f51  c21400               ret 0x14

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
