// from server: 95% by colin
// roc 2007-08 0043e4f0  unit: G3D::VColor3::?$XItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043e4f0
//
// 0043e4f0  56                   push esi
// 0043e4f1  57                   push edi
// 0043e4f2  8bf9                 mov edi, ecx
// 0043e4f4  85ff                 test edi, edi
// 0043e4f6  7408                 je 0x43e500
// 0043e4f8  8db70c010000         lea esi, [edi + 0x10c]
// 0043e4fe  eb02                 jmp 0x43e502
// 0043e500  33f6                 xor esi, esi
// 0043e502  8b4608               mov eax, dword ptr [esi + 8]
// 0043e505  85c0                 test eax, eax
// 0043e507  7409                 je 0x43e512
// 0043e509  50                   push eax
// 0043e50a  e853171f00           call 0x62fc62
// 0043e50f  83c404               add esp, 4
// 0043e512  8bcf                 mov ecx, edi
// 0043e514  c7460800000000       mov dword ptr [esi + 8], 0
// 0043e51b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043e522  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0043e529  e842bd2500           call 0x69a270
// 0043e52e  f644240c01           test byte ptr [esp + 0xc], 1
// 0043e533  7409                 je 0x43e53e
// 0043e535  57                   push edi
// 0043e536  e827171f00           call 0x62fc62
// 0043e53b  83c404               add esp, 4
// 0043e53e  8bc7                 mov eax, edi
// 0043e540  5f                   pop edi
// 0043e541  5e                   pop esi
// 0043e542  c20400               ret 4

struct XItem {
    char pad[0x10c];
    int field_10c;
    int field_110;
    int field_114;
    int field_118;
    int field_11c;
    XItem* destroy(unsigned int flags);
};

extern "C" void __cdecl sub_0062fc62(void*);
extern "C" void __cdecl sub_0069a270();

XItem* XItem::destroy(unsigned int flags)
{
    XItem* p = this;
    int* esi;
    if (p != 0)
        esi = (int*)((char*)p + 0x10c);
    else
        esi = 0;

    if (esi[2] != 0)
    {
        sub_0062fc62((void*)esi[2]);
    }
    esi[2] = 0;
    esi[3] = 0;
    esi[4] = 0;
    sub_0069a270();
    if (flags & 1)
    {
        sub_0062fc62(p);
    }
    return p;
}
