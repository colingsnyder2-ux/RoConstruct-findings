// roc 2010-06 00408360  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00408360
//
// 00408360  8b442404             mov eax, dword ptr [esp + 4]
// 00408364  85c0                 test eax, eax
// 00408366  7509                 jne 0x408371
// 00408368  89442404             mov dword ptr [esp + 4], eax
// 0040836c  e9cfedffff           jmp 0x407140
// 00408371  89442404             mov dword ptr [esp + 4], eax
// 00408375  e996fbffff           jmp 0x407f10
// copied from an identical function in another client (function ?sub_4046A0@ns_ROCX000004@@YGXPAX@Z)

namespace ns_ROCX000004 {
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
