// from server: 73% by colin
// roc 2007-08 00586a20  unit: RBX::VHat::?$FactoryProduct  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586a20
//
// 00586a20  83ec08               sub esp, 8
// 00586a23  56                   push esi
// 00586a24  57                   push edi
// 00586a25  51                   push ecx
// 00586a26  8d44240c             lea eax, [esp + 0xc]
// 00586a2a  50                   push eax
// 00586a2b  e880fbffff           call 0x5865b0
// 00586a30  8bc8                 mov ecx, eax
// 00586a32  83c120               add ecx, 0x20
// 00586a35  e8b6cdf1ff           call 0x4a37f0
// 00586a3a  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00586a40  8bf0                 mov esi, eax
// 00586a42  833e00               cmp dword ptr [esi], 0
// 00586a45  7502                 jne 0x586a49
// 00586a47  ffd7                 call edi
// 00586a49  8b0e                 mov ecx, dword ptr [esi]
// 00586a4b  8b5604               mov edx, dword ptr [esi + 4]
// 00586a4e  3b5104               cmp edx, dword ptr [ecx + 4]
// 00586a51  7502                 jne 0x586a55
// 00586a53  ffd7                 call edi
// 00586a55  8b4604               mov eax, dword ptr [esi + 4]
// 00586a58  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00586a5b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586a5f  5f                   pop edi
// 00586a60  8908                 mov dword ptr [eax], ecx
// 00586a62  5e                   pop esi
// 00586a63  83c408               add esp, 8
// 00586a66  c20400               ret 4

struct RBXName {
    int dummy;
};

struct NameHolder {
    RBXName* name;
};

struct CreatorBase {
    void* vtable;
    NameHolder* holder;
};

struct FactoryProductCreator {
    void* vtable;
    NameHolder* holder;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __cdecl sub_005865B0(void* out);
extern "C" void* __cdecl sub_004A37F0(void* p);

void* __cdecl sub_00586A20(void* out, void* arg)
{
    void* tmp;
    sub_005865B0(&tmp);
    void* p = (char*)tmp + 0x20;
    void* r = sub_004A37F0(p);
    void* esi = r;
    void (*edi)() = *(void(**)())0x77e6d8;
    if (*(void**)esi == 0)
        edi();
    void* ecx = *(void**)esi;
    void* edx = *(void**)((char*)esi + 4);
    if (edx == *(void**)((char*)ecx + 4))
        edi();
    void* eax = *(void**)((char*)esi + 4);
    void* ecx2 = *(void**)((char*)eax + 0x10);
    *(void**)arg = ecx2;
    return out;
}
