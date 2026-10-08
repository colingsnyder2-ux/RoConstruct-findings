// from server: 100% by colin
// roc 2007-08 00686770  unit: CXTPPropExchange  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00686770
//
// 00686770  56                   push esi
// 00686771  8bf1                 mov esi, ecx
// 00686773  e888e6ffff           call 0x684e00
// 00686778  8b442408             mov eax, dword ptr [esp + 8]
// 0068677c  894640               mov dword ptr [esi + 0x40], eax
// 0068677f  c7066cf57c00         mov dword ptr [esi], 0x7cf56c
// 00686785  8b4018               mov eax, dword ptr [eax + 0x18]
// 00686788  83e001               and eax, 1
// 0068678b  894624               mov dword ptr [esi + 0x24], eax
// 0068678e  8bc6                 mov eax, esi
// 00686790  5e                   pop esi
// 00686791  c20400               ret 4

struct CXTPPropExchange
{
    void Construct();
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    int field_40;
    CXTPPropExchange* Init(int* p);
};

CXTPPropExchange* CXTPPropExchange::Init(int* p)
{
    Construct();
    field_40 = (int)p;
    field_0 = 0x7cf56c;
    field_24 = p[6] & 1;
    return this;
}
