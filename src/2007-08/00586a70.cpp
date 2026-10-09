// from server: 58% by colin
// roc 2007-08 00586a70  unit: RBX::VHat::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586a70
//
// 00586a70  83ec08               sub esp, 8
// 00586a73  56                   push esi
// 00586a74  57                   push edi
// 00586a75  51                   push ecx
// 00586a76  8d44240c             lea eax, [esp + 0xc]
// 00586a7a  50                   push eax
// 00586a7b  e830fbffff           call 0x5865b0
// 00586a80  8bc8                 mov ecx, eax
// 00586a82  83c120               add ecx, 0x20
// 00586a85  e866cdf1ff           call 0x4a37f0
// 00586a8a  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00586a90  8bf0                 mov esi, eax
// 00586a92  833e00               cmp dword ptr [esi], 0
// 00586a95  7502                 jne 0x586a99
// 00586a97  ffd7                 call edi
// 00586a99  8b0e                 mov ecx, dword ptr [esi]
// 00586a9b  8b5604               mov edx, dword ptr [esi + 4]
// 00586a9e  3b5104               cmp edx, dword ptr [ecx + 4]
// 00586aa1  7502                 jne 0x586aa5
// 00586aa3  ffd7                 call edi
// 00586aa5  8b4604               mov eax, dword ptr [esi + 4]
// 00586aa8  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00586aab  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586aaf  668bd1               mov dx, cx
// 00586ab2  894c2408             mov dword ptr [esp + 8], ecx
// 00586ab6  8a4c240a             mov cl, byte ptr [esp + 0xa]
// 00586aba  5f                   pop edi
// 00586abb  668910               mov word ptr [eax], dx
// 00586abe  884802               mov byte ptr [eax + 2], cl
// 00586ac1  5e                   pop esi
// 00586ac2  83c408               add esp, 8
// 00586ac5  c20400               ret 4

struct Name {
    unsigned short a;
    unsigned char b;
};

struct NameHolder {
    Name name;
};

struct CreatorBase {
    void* vtable;
    void* field4;
};

struct Creator {
    CreatorBase* base;
    CreatorBase* field4;
};

struct FactoryProduct {
    char pad[0x20];
    NameHolder holder;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void* __cdecl sub_5865B0(void* p);
void* __cdecl sub_4A37F0(void* p);

void* __cdecl sub_586A70(FactoryProduct* self, Name* out)
{
    void* p = sub_5865B0(&self->holder);
    Creator* c = (Creator*)sub_4A37F0((char*)p + 0x20);
    void (__cdecl* fn)() = *(void (__cdecl**)())0x77e6d8;
    if (c->base == 0)
        fn();
    CreatorBase* b = c->base;
    CreatorBase* b4 = c->field4;
    if (b4 == *(CreatorBase**)((char*)b + 4))
        fn();
    CreatorBase* b2 = c->field4;
    unsigned int v = *(unsigned int*)((char*)b2 + 0x10);
    out->a = (unsigned short)v;
    out->b = (unsigned char)(v >> 16);
    return out;
}
