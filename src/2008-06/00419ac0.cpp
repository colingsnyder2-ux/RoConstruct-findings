// from server: 100% by king_originala
// roc 2008-06 00419ac0  unit: VCLuaFunction::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419ac0
//
// 00419ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00419ac4  85c0                 test eax, eax
// 00419ac6  7509                 jne 0x419ad1
// 00419ac8  89442404             mov dword ptr [esp + 4], eax
// 00419acc  e9ffebffff           jmp 0x4186d0
// 00419ad1  89442404             mov dword ptr [esp + 4], eax
// 00419ad5  e9f6f6ffff           jmp 0x4191d0

extern "C" int __cdecl zero_case(int value);
extern "C" int __cdecl nonzero_case(int value);

extern "C" int __cdecl dispatch(int value)
{
    if (value == 0)
        return zero_case(value);
    return nonzero_case(value);
}
