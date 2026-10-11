// from server: 55% by atomic.potato
// roc 2009-06 004b4940  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b4940
//
// 004b4940  64a100000000         mov eax, dword ptr fs:[0]
// 004b4946  6aff                 push -1
// 004b4948  68f88c8500           push 0x858cf8
// 004b494d  50                   push eax
// 004b494e  64892500000000       mov dword ptr fs:[0], esp
// 004b4955  56                   push esi
// 004b4956  8bf1                 mov esi, ecx
// 004b4958  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b495c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b4964  894608               mov dword ptr [esi + 8], eax
// 004b4967  c70600000000         mov dword ptr [esi], 0
// 004b496d  83f808               cmp eax, 8
// 004b4970  7708                 ja 0x4b497a
// 004b4972  8bc6                 mov eax, esi
// 004b4974  8d4c2414             lea ecx, [esp + 0x14]
// 004b4978  eb0f                 jmp 0x4b4989
// 004b497a  50                   push eax
// 004b497b  e89a432600           call 0x718d1a
// 004b4980  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b4984  83c404               add esp, 4
// 004b4987  8906                 mov dword ptr [esi], eax
// 004b4989  8b5608               mov edx, dword ptr [esi + 8]
// 004b498c  52                   push edx
// 004b498d  51                   push ecx
// 004b498e  50                   push eax
// 004b498f  e822552600           call 0x719eb6
// 004b4994  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b4998  83c40c               add esp, 0xc
// 004b499b  837c241c08           cmp dword ptr [esp + 0x1c], 8
// 004b49a0  89460c               mov dword ptr [esi + 0xc], eax
// 004b49a3  7611                 jbe 0x4b49b6
// 004b49a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b49a9  85c0                 test eax, eax
// 004b49ab  7409                 je 0x4b49b6
// 004b49ad  50                   push eax
// 004b49ae  e82b432600           call 0x718cde
// 004b49b3  83c404               add esp, 4
// 004b49b6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b49ba  8bc6                 mov eax, esi
// 004b49bc  64890d00000000       mov dword ptr fs:[0], ecx
// 004b49c3  5e                   pop esi
// 004b49c4  83c40c               add esp, 0xc
// 004b49c7  c21000               ret 0x10

extern "C" void* __cdecl sub_718D1A(unsigned int);
extern "C" void __cdecl sub_718CDE(void*);
extern "C" void __cdecl sub_719EB6(void*, void*, unsigned int);

struct VPlayerFactoryProduct {
    void* field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    void* ctor(unsigned int, void*, unsigned int, unsigned int);
};

void* VPlayerFactoryProduct::ctor(unsigned int a2, void* a3, unsigned int a4, unsigned int a5)
{
    void* p;
    void* q;
    unsigned int n;
    unsigned int m;

    field8 = a2;
    field0 = 0;
    if (a2 <= 8) {
        p = this;
        q = &a3;
    } else {
        p = sub_718D1A(a2);
        q = a3;
        field0 = p;
    }
    n = field8;
    sub_719EB6(p, q, n);
    fieldC = a5;
    if (field8 > 8) {
        if (field0 != 0) {
            sub_718CDE(field0);
        }
    }
    return this;
}
