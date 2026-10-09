// roc 2009-12 004765a0  unit: CWebToolbox  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004765a0
//
// 004765a0  56                   push esi
// 004765a1  8b742408             mov esi, dword ptr [esp + 8]
// 004765a5  56                   push esi
// 004765a6  e863d63700           call 0x7f3c0e
// 004765ab  85c0                 test eax, eax
// 004765ad  7507                 jne 0x4765b6
// 004765af  814e0417408401       or dword ptr [esi + 4], 0x1844017
// 004765b6  5e                   pop esi
// 004765b7  c20400               ret 4
// copied from an identical function in another client (function ?sub_42a530@ns_ROCX000004@@YGHPAH@Z)

namespace ns_ROCX000004 {
extern "C" int __stdcall sub_630010(int* p);

int __stdcall sub_42a530(int* p)
{
    int result = sub_630010(p);
    if (result == 0)
        p[1] |= 0x1844017;
    return result;
}
}
