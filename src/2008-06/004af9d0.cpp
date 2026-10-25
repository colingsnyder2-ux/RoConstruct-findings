// from server: 100% by tester
// roc 2008-06 004af9d0  unit: RBX::Network::Replicator::MarkerItem  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004af9d0
//
// 004af9d0  56                   push esi
// 004af9d1  8d442408             lea eax, [esp + 8]
// 004af9d5  8bf1                 mov esi, ecx
// 004af9d7  50                   push eax
// 004af9d8  c70600000000         mov dword ptr [esi], 0
// 004af9de  e80da91500           call 0x60a2f0
// 004af9e3  83c404               add esp, 4
// 004af9e6  84c0                 test al, al
// 004af9e8  752e                 jne 0x4afa18
// 004af9ea  8d4608               lea eax, [esi + 8]
// 004af9ed  85c0                 test eax, eax
// 004af9ef  741b                 je 0x4afa0c
// 004af9f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af9f5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004af9f9  8908                 mov dword ptr [eax], ecx
// 004af9fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af9ff  895004               mov dword ptr [eax + 4], edx
// 004afa02  8b542414             mov edx, dword ptr [esp + 0x14]
// 004afa06  894808               mov dword ptr [eax + 8], ecx
// 004afa09  89500c               mov dword ptr [eax + 0xc], edx
// 004afa0c  c706fc498200         mov dword ptr [esi], 0x8249fc
// 004afa12  8bc6                 mov eax, esi
// 004afa14  5e                   pop esi
// 004afa15  c21400               ret 0x14
// 004afa18  c70600000000         mov dword ptr [esi], 0
// 004afa1e  8bc6                 mov eax, esi
// 004afa20  5e                   pop esi
// 004afa21  c21400               ret 0x14

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
