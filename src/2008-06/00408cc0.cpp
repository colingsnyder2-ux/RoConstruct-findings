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
// copied from an identical function in another client (function ?sub_4046A0@ns_ROCX000022@@YGXPAX@Z)

namespace ns_ROCX000022 {
void __stdcall sub_402CA0(void* p);
void __stdcall sub_403930(void* p);

void __stdcall sub_4046A0(void* p)
{
    if (p == 0)
        sub_402CA0(p);
    else
        sub_403930(p);
}
}
