// from server: 100% by colin
// roc 2008-06 004a1ed0  unit: RBX::Network::P8Players::?$GetImpl  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1ed0
//
// 004a1ed0  56                   push esi
// 004a1ed1  57                   push edi
// 004a1ed2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a1ed6  8bf1                 mov esi, ecx
// 004a1ed8  8bcf                 mov ecx, edi
// 004a1eda  e8517b1600           call 0x609a30
// 004a1edf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a1ee3  50                   push eax
// 004a1ee4  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a1ee8  50                   push eax
// 004a1ee9  51                   push ecx
// 004a1eea  8bce                 mov ecx, esi
// 004a1eec  e8df7c0100           call 0x4b9bd0
// 004a1ef1  33c0                 xor eax, eax
// 004a1ef3  c70674348200         mov dword ptr [esi], 0x823474
// 004a1ef9  c7461064348200       mov dword ptr [esi + 0x10], 0x823464
// 004a1f00  c746145c348200       mov dword ptr [esi + 0x14], 0x82345c
// 004a1f07  c7462054348200       mov dword ptr [esi + 0x20], 0x823454
// 004a1f0e  c7462444348200       mov dword ptr [esi + 0x24], 0x823444
// 004a1f15  c7464434348200       mov dword ptr [esi + 0x44], 0x823434
// 004a1f1c  c7466424348200       mov dword ptr [esi + 0x64], 0x823424
// 004a1f23  c7868400000014348200 mov dword ptr [esi + 0x84], 0x823414
// 004a1f2d  c786a400000004348200 mov dword ptr [esi + 0xa4], 0x823404
// 004a1f37  c786c4000000f4338200 mov dword ptr [esi + 0xc4], 0x8233f4
// 004a1f41  c786742b0000c4338200 mov dword ptr [esi + 0x2b74], 0x8233c4
// 004a1f4b  8986682d0000         mov dword ptr [esi + 0x2d68], eax
// 004a1f51  89866c2d0000         mov dword ptr [esi + 0x2d6c], eax
// 004a1f57  89be702d0000         mov dword ptr [esi + 0x2d70], edi
// 004a1f5d  5f                   pop edi
// 004a1f5e  8bc6                 mov eax, esi
// 004a1f60  5e                   pop esi
// 004a1f61  c20c00               ret 0xc

#include <intrin.h>
struct S_func_00609a30 {
    char pad0[320];
    int m_x;
    int f();
};

extern char table_823474[];
extern char table_823464[];
extern char table_82345c[];
extern char table_823454[];
extern char table_823444[];
extern char table_823434[];
extern char table_823424[];
extern char table_823414[];
extern char table_823404[];
extern char table_8233f4[];
extern char table_8233c4[];

struct S {
    unsigned int data[0x2d74 / 4];
    void initialize(int a, int b, int c);
    S* construct(int a, int b, S_func_00609a30* p);
};

S* S::construct(int a, int b, S_func_00609a30* p)
{
    int v = p->f();
    initialize(a, b, v);

    data[0x00 / 4] = reinterpret_cast<unsigned int>(table_823474);
    data[0x10 / 4] = reinterpret_cast<unsigned int>(table_823464);
    data[0x14 / 4] = reinterpret_cast<unsigned int>(table_82345c);
    data[0x20 / 4] = reinterpret_cast<unsigned int>(table_823454);
    data[0x24 / 4] = reinterpret_cast<unsigned int>(table_823444);
    data[0x44 / 4] = reinterpret_cast<unsigned int>(table_823434);
    data[0x64 / 4] = reinterpret_cast<unsigned int>(table_823424);
    data[0x84 / 4] = reinterpret_cast<unsigned int>(table_823414);
    data[0xa4 / 4] = reinterpret_cast<unsigned int>(table_823404);
    data[0xc4 / 4] = reinterpret_cast<unsigned int>(table_8233f4);
    data[0x2b74 / 4] = reinterpret_cast<unsigned int>(table_8233c4);
    *reinterpret_cast<volatile unsigned int*>(&data[0x2d68 / 4]) = 0;
    *reinterpret_cast<volatile unsigned int*>(&data[0x2d6c / 4]) = 0;
    _ReadWriteBarrier();
    data[0x2d70 / 4] = reinterpret_cast<unsigned int>(p);
    return this;
}
