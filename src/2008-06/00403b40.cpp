// from server: 100% by king_originala
// roc 2008-06 00403b40  unit: ATL::CComClassFactory  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403b40
//
// 00403b40  8b442404             mov eax, dword ptr [esp + 4]
// 00403b44  85c0                 test eax, eax
// 00403b46  7509                 jne 0x403b51
// 00403b48  89442404             mov dword ptr [esp + 4], eax
// 00403b4c  e9ffebffff           jmp 0x402750
// 00403b51  89442404             mov dword ptr [esp + 4], eax
// 00403b55  e956f5ffff           jmp 0x4030b0

extern "C" int __cdecl function_402750(int);
extern "C" int __cdecl function_4030b0(int);

extern "C" int __cdecl function_403b40(int value)
{
    if (value == 0)
        return function_402750(value);
    return function_4030b0(value);
}
