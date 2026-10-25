// from server: 100% by tester
// roc 2008-06 0055f350  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f350
//
// 0055f350  56                   push esi
// 0055f351  8d442408             lea eax, [esp + 8]
// 0055f355  8bf1                 mov esi, ecx
// 0055f357  50                   push eax
// 0055f358  c70600000000         mov dword ptr [esi], 0
// 0055f35e  e88daf0a00           call 0x60a2f0
// 0055f363  83c404               add esp, 4
// 0055f366  84c0                 test al, al
// 0055f368  752e                 jne 0x55f398
// 0055f36a  8d4608               lea eax, [esi + 8]
// 0055f36d  85c0                 test eax, eax
// 0055f36f  741b                 je 0x55f38c
// 0055f371  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055f375  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0055f379  8908                 mov dword ptr [eax], ecx
// 0055f37b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055f37f  895004               mov dword ptr [eax + 4], edx
// 0055f382  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055f386  894808               mov dword ptr [eax + 8], ecx
// 0055f389  89500c               mov dword ptr [eax + 0xc], edx
// 0055f38c  c70668dd8200         mov dword ptr [esi], 0x82dd68
// 0055f392  8bc6                 mov eax, esi
// 0055f394  5e                   pop esi
// 0055f395  c21400               ret 0x14
// 0055f398  c70600000000         mov dword ptr [esi], 0
// 0055f39e  8bc6                 mov eax, esi
// 0055f3a0  5e                   pop esi
// 0055f3a1  c21400               ret 0x14

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
