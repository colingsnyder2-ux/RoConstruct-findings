// from server: 100% by king_originala
// roc 2008-06 00408960  unit: VCApp::?$CComAggObject  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408960
//
// 00408960  56                   push esi
// 00408961  8bf1                 mov esi, ecx
// 00408963  e8e8dcffff           call 0x406650
// 00408968  8b442408             mov eax, dword ptr [esp + 8]
// 0040896c  50                   push eax
// 0040896d  8bce                 mov ecx, esi
// 0040896f  e83cf9ffff           call 0x4082b0
// 00408974  f644240c05           test byte ptr [esp + 0xc], 5
// 00408979  0f84e6000000         je 0x408a65
// 0040897f  85c0                 test eax, eax
// 00408981  0f84de000000         je 0x408a65
// 00408987  83be3412000000       cmp dword ptr [esi + 0x1234], 0
// 0040898e  57                   push edi
// 0040898f  8dbe34120000         lea edi, [esi + 0x1234]
// 00408995  7620                 jbe 0x4089b7
// 00408997  6881000000           push 0x81
// 0040899c  8d8622010000         lea eax, [esi + 0x122]
// 004089a2  57                   push edi
// 004089a3  50                   push eax
// 004089a4  50                   push eax
// 004089a5  e856d9ffff           call 0x406300
// 004089aa  83c410               add esp, 0x10
// 004089ad  85c0                 test eax, eax
// 004089af  0f84af000000         je 0x408a64
// 004089b5  ff0f                 dec dword ptr [edi]
// 004089b7  83be3812000000       cmp dword ptr [esi + 0x1238], 0
// 004089be  8dbe38120000         lea edi, [esi + 0x1238]
// 004089c4  7620                 jbe 0x4089e6
// 004089c6  6881000000           push 0x81
// 004089cb  8d86a3010000         lea eax, [esi + 0x1a3]
// 004089d1  57                   push edi
// 004089d2  50                   push eax
// 004089d3  50                   push eax
// 004089d4  e827d9ffff           call 0x406300
// 004089d9  83c410               add esp, 0x10
// 004089dc  85c0                 test eax, eax
// 004089de  0f8480000000         je 0x408a64
// 004089e4  ff0f                 dec dword ptr [edi]
// 004089e6  83be3012000000       cmp dword ptr [esi + 0x1230], 0
// 004089ed  8dbe30120000         lea edi, [esi + 0x1230]
// 004089f3  7619                 jbe 0x408a0e
// 004089f5  6801010000           push 0x101
// 004089fa  8d4621               lea eax, [esi + 0x21]
// 004089fd  57                   push edi
// 004089fe  50                   push eax
// 004089ff  50                   push eax
// 00408a00  e8fbd8ffff           call 0x406300
// 00408a05  83c410               add esp, 0x10
// 00408a08  85c0                 test eax, eax
// 00408a0a  7458                 je 0x408a64
// 00408a0c  ff0f                 dec dword ptr [edi]
// 00408a0e  83be3c12000000       cmp dword ptr [esi + 0x123c], 0
// 00408a15  8dbe3c120000         lea edi, [esi + 0x123c]
// 00408a1b  761c                 jbe 0x408a39
// 00408a1d  6801080000           push 0x801
// 00408a22  8d8624020000         lea eax, [esi + 0x224]
// 00408a28  57                   push edi
// 00408a29  50                   push eax
// 00408a2a  50                   push eax
// 00408a2b  e8d0d8ffff           call 0x406300
// 00408a30  83c410               add esp, 0x10
// 00408a33  85c0                 test eax, eax
// 00408a35  742d                 je 0x408a64
// 00408a37  ff0f                 dec dword ptr [edi]
// 00408a39  83be4012000000       cmp dword ptr [esi + 0x1240], 0
// 00408a40  8dbe40120000         lea edi, [esi + 0x1240]
// 00408a46  761c                 jbe 0x408a64
// 00408a48  6801080000           push 0x801
// 00408a4d  8d86250a0000         lea eax, [esi + 0xa25]
// 00408a53  57                   push edi
// 00408a54  50                   push eax
// 00408a55  50                   push eax
// 00408a56  e8a5d8ffff           call 0x406300
// 00408a5b  83c410               add esp, 0x10
// 00408a5e  85c0                 test eax, eax
// 00408a60  7402                 je 0x408a64
// 00408a62  ff0f                 dec dword ptr [edi]
// 00408a64  5f                   pop edi
// 00408a65  5e                   pop esi
// 00408a66  c20800               ret 8

extern "C" int __cdecl sub_406300(char*, char*, unsigned int*, unsigned int);

struct VCContent_CComAggObject
{
    void Init();
    int sub_4082B0(int);
    void f(int, unsigned int);
};

void VCContent_CComAggObject::f(int value, unsigned int flags)
{
    Init();
    int result = sub_4082B0(value);
    if (!(flags & 5) || !result)
        return;

    unsigned int* count = (unsigned int*)((char*)this + 0x1234);
    if (*count > 0)
    {
        char* buffer = (char*)this + 0x122;
        if (!sub_406300(buffer, buffer, count, 0x81))
            return;
        --*count;
    }

    count = (unsigned int*)((char*)this + 0x1238);
    if (*count > 0)
    {
        char* buffer = (char*)this + 0x1A3;
        if (!sub_406300(buffer, buffer, count, 0x81))
            return;
        --*count;
    }

    count = (unsigned int*)((char*)this + 0x1230);
    if (*count > 0)
    {
        char* buffer = (char*)this + 0x21;
        if (!sub_406300(buffer, buffer, count, 0x101))
            return;
        --*count;
    }

    count = (unsigned int*)((char*)this + 0x123C);
    if (*count > 0)
    {
        char* buffer = (char*)this + 0x224;
        if (!sub_406300(buffer, buffer, count, 0x801))
            return;
        --*count;
    }

    count = (unsigned int*)((char*)this + 0x1240);
    if (*count > 0)
    {
        char* buffer = (char*)this + 0xA25;
        if (!sub_406300(buffer, buffer, count, 0x801))
            return;
        --*count;
    }
}
