// from server: 100% by king_originala
// roc 2008-06 004cc1b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cc1b0
//
// 004cc1b0  56                   push esi
// 004cc1b1  8d442408             lea eax, [esp + 8]
// 004cc1b5  8bf1                 mov esi, ecx
// 004cc1b7  50                   push eax
// 004cc1b8  c70600000000         mov dword ptr [esi], 0
// 004cc1be  e82de11300           call 0x60a2f0
// 004cc1c3  83c404               add esp, 4
// 004cc1c6  84c0                 test al, al
// 004cc1c8  752e                 jne 0x4cc1f8
// 004cc1ca  8d4608               lea eax, [esi + 8]
// 004cc1cd  85c0                 test eax, eax
// 004cc1cf  741b                 je 0x4cc1ec
// 004cc1d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cc1d5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004cc1d9  8908                 mov dword ptr [eax], ecx
// 004cc1db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cc1df  895004               mov dword ptr [eax + 4], edx
// 004cc1e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cc1e6  894808               mov dword ptr [eax + 8], ecx
// 004cc1e9  89500c               mov dword ptr [eax + 0xc], edx
// 004cc1ec  c7061c698200         mov dword ptr [esi], 0x82691c
// 004cc1f2  8bc6                 mov eax, esi
// 004cc1f4  5e                   pop esi
// 004cc1f5  c21400               ret 0x14
// 004cc1f8  c70600000000         mov dword ptr [esi], 0
// 004cc1fe  8bc6                 mov eax, esi
// 004cc200  5e                   pop esi
// 004cc201  c21400               ret 0x14

struct Data {
    unsigned long a, b, c, d;
};

struct Argument {
    Data data;
    unsigned long extra;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char tag;

struct S {
    const void *type;
    unsigned long unused;
    Data data;

    S(Argument value);
};

S::S(Argument value)
{
    type = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument *)>(
            &func_0060a2f0)(&value)) {
        Data *destination = &data;
        if (destination)
            *destination = value.data;
        type = &tag;
    } else {
        type = 0;
    }
}
