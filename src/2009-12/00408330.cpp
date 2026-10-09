// roc 2009-12 00408330  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00408330
//
// 00408330  8b442404             mov eax, dword ptr [esp + 4]
// 00408334  85c0                 test eax, eax
// 00408336  7509                 jne 0x408341
// 00408338  89442404             mov dword ptr [esp + 4], eax
// 0040833c  e91ff2ffff           jmp 0x407560
// 00408341  89442404             mov dword ptr [esp + 4], eax
// 00408345  e996fbffff           jmp 0x407ee0
// copied from an identical function in another client (function ?sub_4046A0@ns_ROCX000008@@YGXPAX@Z)

namespace ns_ROCX000008 {
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
