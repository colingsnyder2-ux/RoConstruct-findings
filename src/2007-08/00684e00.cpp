// from server: 100% by colin
// roc 2007-08 00684e00  unit: CXTPPropExchange  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684e00
//
// 00684e00  56                   push esi
// 00684e01  8bf1                 mov esi, ecx
// 00684e03  e832350b00           call 0x73833a
// 00684e08  33c0                 xor eax, eax
// 00684e0a  894624               mov dword ptr [esi + 0x24], eax
// 00684e0d  894620               mov dword ptr [esi + 0x20], eax
// 00684e10  89462c               mov dword ptr [esi + 0x2c], eax
// 00684e13  894634               mov dword ptr [esi + 0x34], eax
// 00684e16  894630               mov dword ptr [esi + 0x30], eax
// 00684e19  b801000000           mov eax, 1
// 00684e1e  894638               mov dword ptr [esi + 0x38], eax
// 00684e21  89463c               mov dword ptr [esi + 0x3c], eax
// 00684e24  c7062cf47c00         mov dword ptr [esi], 0x7cf42c
// 00684e2a  c7462817000000       mov dword ptr [esi + 0x28], 0x17
// 00684e31  8bc6                 mov eax, esi
// 00684e33  5e                   pop esi
// 00684e34  c3                   ret 

struct CXTPPropExchange {
    CXTPPropExchange* Construct();
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
};

extern "C" void __stdcall sub_73833a();

CXTPPropExchange* CXTPPropExchange::Construct()
{
    sub_73833a();
    field24 = 0;
    field20 = 0;
    field2C = 0;
    field34 = 0;
    field30 = 0;
    field38 = 1;
    field3C = 1;
    *(int*)this = 0x7cf42c;
    field28 = 0x17;
    return this;
}
