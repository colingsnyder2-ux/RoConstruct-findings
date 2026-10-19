// from server: 89% by colin
// from server: 88% by king_originala
// roc 2008-06 0045eef0  unit: G3D::VStopwatch::?$TypedStatsItem  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045eef0
//
// 0045eef0  83ec08               sub esp, 8
// 0045eef3  56                   push esi
// 0045eef4  8bf1                 mov esi, ecx
// 0045eef6  e8e5fcffff           call 0x45ebe0
// 0045eefb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045eeff  b870c15e00           mov eax, 0x5ec170
// 0045ef04  89442404             mov dword ptr [esp + 4], eax
// 0045ef08  8d442404             lea eax, [esp + 4]
// 0045ef0c  c70654a18100         mov dword ptr [esi], 0x81a154
// 0045ef12  c7461044a18100       mov dword ptr [esi + 0x10], 0x81a144
// 0045ef19  c746143ca18100       mov dword ptr [esi + 0x14], 0x81a13c
// 0045ef20  c7462034a18100       mov dword ptr [esi + 0x20], 0x81a134
// 0045ef27  c7462424a18100       mov dword ptr [esi + 0x24], 0x81a124
// 0045ef2e  c7464414a18100       mov dword ptr [esi + 0x44], 0x81a114
// 0045ef35  c7466404a18100       mov dword ptr [esi + 0x64], 0x81a104
// 0045ef3c  c78684000000f4a08100 mov dword ptr [esi + 0x84], 0x81a0f4
// 0045ef46  c786a4000000e4a08100 mov dword ptr [esi + 0xa4], 0x81a0e4
// 0045ef50  c786c4000000d4a08100 mov dword ptr [esi + 0xc4], 0x81a0d4
// 0045ef5a  50                   push eax
// 0045ef5b  894c240c             mov dword ptr [esp + 0xc], ecx
// 0045ef5f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0045ef69  e882b31a00           call 0x60a2f0
// 0045ef6e  83c404               add esp, 4
// 0045ef71  84c0                 test al, al
// 0045ef73  752a                 jne 0x45ef9f
// 0045ef75  8d8660010000         lea eax, [esi + 0x160]
// 0045ef7b  85c0                 test eax, eax
// 0045ef7d  740d                 je 0x45ef8c
// 0045ef7f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045ef83  8b542408             mov edx, dword ptr [esp + 8]
// 0045ef87  8908                 mov dword ptr [eax], ecx
// 0045ef89  895004               mov dword ptr [eax + 4], edx
// 0045ef8c  c78658010000e49c8100 mov dword ptr [esi + 0x158], 0x819ce4
// 0045ef96  8bc6                 mov eax, esi
// 0045ef98  5e                   pop esi
// 0045ef99  83c408               add esp, 8
// 0045ef9c  c20400               ret 4
// 0045ef9f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0045efa9  8bc6                 mov eax, esi
// 0045efab  5e                   pop esi
// 0045efac  83c408               add esp, 8
// 0045efaf  c20400               ret 4
#include <intrin.h>

bool __cdecl func_0060a2f0();

extern const unsigned table00;
extern const unsigned table10;
extern const unsigned table14;
extern const unsigned table20;
extern const unsigned table24;
extern const unsigned table44;
extern const unsigned table64;
extern const unsigned table84;
extern const unsigned tableA4;
extern const unsigned tableC4;
extern const unsigned pairTable;

struct Pair
{
    const char *first;
    unsigned second;
};

struct S
{
    unsigned data[90];

    void initialize();
    S *construct(unsigned value);
};

S *S::construct(unsigned value)
{
    initialize();

    Pair p;
    p.first = "Minor";
    p.second = value;
    _ReadWriteBarrier();

    data[0x00 / 4] = reinterpret_cast<unsigned>(&table00);
    data[0x10 / 4] = reinterpret_cast<unsigned>(&table10);
    data[0x14 / 4] = reinterpret_cast<unsigned>(&table14);
    data[0x20 / 4] = reinterpret_cast<unsigned>(&table20);
    data[0x24 / 4] = reinterpret_cast<unsigned>(&table24);
    data[0x44 / 4] = reinterpret_cast<unsigned>(&table44);
    data[0x64 / 4] = reinterpret_cast<unsigned>(&table64);
    data[0x84 / 4] = reinterpret_cast<unsigned>(&table84);
    data[0xa4 / 4] = reinterpret_cast<unsigned>(&tableA4);
    data[0xc4 / 4] = reinterpret_cast<unsigned>(&tableC4);
    data[0x158 / 4] = 0;

    if (!reinterpret_cast<bool (__cdecl *)(Pair *)>(
            func_0060a2f0)(&p))
    {
        Pair *destination = reinterpret_cast<Pair *>(&data[0x160 / 4]);
        if (destination)
            *destination = p;
        data[0x158 / 4] = reinterpret_cast<unsigned>(&pairTable);
        return this;
    }

    data[0x158 / 4] = 0;
    return this;
}
