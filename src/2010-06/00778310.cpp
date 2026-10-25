// from server: 100% by tester
// roc 2010-06 00778310  unit: RBX::EdgeEdgeConnector  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00778310
//
// 00778310  f644240401           test byte ptr [esp + 4], 1
// 00778315  56                   push esi
// 00778316  8bf1                 mov esi, ecx
// 00778318  b8080ca200           mov eax, 0xa20c08
// 0077831d  898684000000         mov dword ptr [esi + 0x84], eax
// 00778323  894668               mov dword ptr [esi + 0x68], eax
// 00778326  7409                 je 0x778331
// 00778328  56                   push esi
// 00778329  e862ffffff           call 0x778290
// 0077832e  83c404               add esp, 4
// 00778331  8bc6                 mov eax, esi
// 00778333  5e                   pop esi
// 00778334  c20400               ret 4

struct EdgeEdgeConnector
{
    char padding68[0x68];
    int field68;
    char padding84[0x18];
    int field84;
    int connect(int value);
};

extern "C" void __cdecl sub_7c77c0(EdgeEdgeConnector *);

int EdgeEdgeConnector::connect(int value)
{
    field84 = 0xa7fbbc;
    field68 = 0xa7fbbc;
    if (value & 1)
        sub_7c77c0(this);
    return (int)this;
}
