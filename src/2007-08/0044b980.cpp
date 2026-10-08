// from server: 100% by colin
// roc 2007-08 0044b980  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044b980
//
// 0044b980  8b442404             mov eax, dword ptr [esp + 4]
// 0044b984  85c0                 test eax, eax
// 0044b986  750a                 jne 0x44b992
// 0044b988  c78168010000ffffffff mov dword ptr [ecx + 0x168], 0xffffffff
// 0044b992  89442404             mov dword ptr [esp + 4], eax
// 0044b996  e9b5061f00           jmp 0x63c050

struct CRobloxControlColorSelector
{
    char pad[0x168];
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
