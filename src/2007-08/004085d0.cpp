// from server: 73% by colin
// roc 2007-08 004085d0  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004085d0
//
// 004085d0  b924be8b00           mov ecx, 0x8bbe24
// 004085d5  e8f6fc0100           call 0x4282d0
// 004085da  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004085de  f6d8                 neg al
// 004085e0  1bc0                 sbb eax, eax
// 004085e2  668901               mov word ptr [ecx], ax
// 004085e5  33c0                 xor eax, eax
// 004085e7  c20800               ret 8

struct VCApp_CComObject {
    bool Init();
};

extern "C" bool __stdcall sub_4282D0();

bool VCApp_CComObject::Init()
{
    return sub_4282D0();
}

int __stdcall Target(unsigned short* out, int unused)
{
    VCApp_CComObject obj;
    bool b = obj.Init();
    *out = b ? 0xFFFF : 0;
    return 0;
}
