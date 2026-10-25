// from server: 100% by king_originala
// roc 2008-06 00408cc0  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408cc0
//
// 00408cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00408cc4  85c0                 test eax, eax
// 00408cc6  7509                 jne 0x408cd1
// 00408cc8  89442404             mov dword ptr [esp + 4], eax
// 00408ccc  e90ff5ffff           jmp 0x4081e0
// 00408cd1  89442404             mov dword ptr [esp + 4], eax
// 00408cd5  e9b6fbffff           jmp 0x408890

extern int __cdecl zero_case(int);
extern int __cdecl nonzero_case(int);

int __cdecl dispatch(int value)
{
    if (value == 0)
        return zero_case(value);
    return nonzero_case(value);
}
