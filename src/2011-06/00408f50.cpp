// roc 2011-06 00408f50  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00408f50
//
// 00408f50  8b442404             mov eax, dword ptr [esp + 4]
// 00408f54  85c0                 test eax, eax
// 00408f56  7509                 jne 0x408f61
// 00408f58  89442404             mov dword ptr [esp + 4], eax
// 00408f5c  e9cff8ffff           jmp 0x408830
// 00408f61  89442404             mov dword ptr [esp + 4], eax
// 00408f65  e9a6fcffff           jmp 0x408c10
// copied from an identical function in another client (function ?sub_4046A0@ns_ROCX000015@@YGXPAX@Z)

namespace ns_ROCX000015 {
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
