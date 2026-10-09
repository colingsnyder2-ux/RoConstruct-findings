// roc 2007-03 0044a210  unit: seg_00440000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a210
//
// 0044a210  8b442404             mov eax, dword ptr [esp + 4]
// 0044a214  85c0                 test eax, eax
// 0044a216  750a                 jne 0x44a222
// 0044a218  c78168010000ffffffff mov dword ptr [ecx + 0x168], 0xffffffff
// 0044a222  89442404             mov dword ptr [esp + 4], eax
// 0044a226  e955721e00           jmp 0x631480
// copied from an identical function in another client (function ?setValue@CRobloxControlColorSelector@ns_ROCX00001c@@QAEXPAH@Z)

namespace ns_ROCX00001c {
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
}
