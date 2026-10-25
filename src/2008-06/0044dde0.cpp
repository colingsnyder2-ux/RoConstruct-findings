// from server: 100% by tester
// roc 2008-06 0044dde0  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044dde0
//
// 0044dde0  8b442404             mov eax, dword ptr [esp + 4]
// 0044dde4  85c0                 test eax, eax
// 0044dde6  750a                 jne 0x44ddf2
// 0044dde8  c78174010000ffffffff mov dword ptr [ecx + 0x174], 0xffffffff
// 0044ddf2  89442404             mov dword ptr [esp + 4], eax
// 0044ddf6  e9f5f42500           jmp 0x6ad2f0

struct CRobloxControlColorSelector
{
    char pad[0x174];
    int field_0x168;
    void setValue(int* value);
};

extern "C" void __stdcall sub_0063C050(int* value);

void CRobloxControlColorSelector::setValue(int* value)
{
    if (value == 0)
    {
        field_0x168 = -1;
    }
    sub_0063C050(value);
}
