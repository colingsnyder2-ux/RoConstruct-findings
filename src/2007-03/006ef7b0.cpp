// roc 2007-03 006ef7b0  unit: seg_006e0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ef7b0
//
// 006ef7b0  8b442404             mov eax, dword ptr [esp + 4]
// 006ef7b4  56                   push esi
// 006ef7b5  50                   push eax
// 006ef7b6  8bf1                 mov esi, ecx
// 006ef7b8  e8c9e9f2ff           call 0x61e186
// 006ef7bd  85c0                 test eax, eax
// 006ef7bf  7504                 jne 0x6ef7c5
// 006ef7c1  5e                   pop esi
// 006ef7c2  c20400               ret 4
// 006ef7c5  c6466400             mov byte ptr [esi + 0x64], 0
// 006ef7c9  b801000000           mov eax, 1
// 006ef7ce  5e                   pop esi
// 006ef7cf  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTColorHex@ns_ROCX0000b0@@QAEHPBD@Z)

namespace ns_ROCX0000b0 {
struct CXTColorHex
{
    char pad[0x64];
    char field_64;
    int Set(const char* str);
};

extern "C" int __stdcall sub_0062FCF2(const char* str);

int CXTColorHex::Set(const char* str)
{
    if (sub_0062FCF2(str) == 0)
        return 0;
    field_64 = 0;
    return 1;
}
}
