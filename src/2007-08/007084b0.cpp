// from server: 100% by colin
// roc 2007-08 007084b0  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007084b0
//
// 007084b0  8b442404             mov eax, dword ptr [esp + 4]
// 007084b4  56                   push esi
// 007084b5  50                   push eax
// 007084b6  8bf1                 mov esi, ecx
// 007084b8  e83578f2ff           call 0x62fcf2
// 007084bd  85c0                 test eax, eax
// 007084bf  7504                 jne 0x7084c5
// 007084c1  5e                   pop esi
// 007084c2  c20400               ret 4
// 007084c5  c6466400             mov byte ptr [esi + 0x64], 0
// 007084c9  b801000000           mov eax, 1
// 007084ce  5e                   pop esi
// 007084cf  c20400               ret 4

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
