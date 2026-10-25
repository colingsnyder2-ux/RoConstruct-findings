// from server: 100% by tester
// roc 2008-06 005a2e90  unit: RBX::Workspace  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2e90
//
// 005a2e90  56                   push esi
// 005a2e91  8d442408             lea eax, [esp + 8]
// 005a2e95  8bf1                 mov esi, ecx
// 005a2e97  50                   push eax
// 005a2e98  c70600000000         mov dword ptr [esi], 0
// 005a2e9e  e84d740600           call 0x60a2f0
// 005a2ea3  83c404               add esp, 4
// 005a2ea6  84c0                 test al, al
// 005a2ea8  752e                 jne 0x5a2ed8
// 005a2eaa  8d4608               lea eax, [esi + 8]
// 005a2ead  85c0                 test eax, eax
// 005a2eaf  741b                 je 0x5a2ecc
// 005a2eb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a2eb5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a2eb9  8908                 mov dword ptr [eax], ecx
// 005a2ebb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2ebf  895004               mov dword ptr [eax + 4], edx
// 005a2ec2  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a2ec6  894808               mov dword ptr [eax + 8], ecx
// 005a2ec9  89500c               mov dword ptr [eax + 0xc], edx
// 005a2ecc  c706e8388300         mov dword ptr [esi], 0x8338e8
// 005a2ed2  8bc6                 mov eax, esi
// 005a2ed4  5e                   pop esi
// 005a2ed5  c21400               ret 0x14
// 005a2ed8  c70600000000         mov dword ptr [esi], 0
// 005a2ede  8bc6                 mov eax, esi
// 005a2ee0  5e                   pop esi
// 005a2ee1  c21400               ret 0x14

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
