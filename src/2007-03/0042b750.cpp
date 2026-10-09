// roc 2007-03 0042b750  unit: seg_00420000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042b750
//
// 0042b750  56                   push esi
// 0042b751  8b742408             mov esi, dword ptr [esp + 8]
// 0042b755  56                   push esi
// 0042b756  e8432d1f00           call 0x61e49e
// 0042b75b  85c0                 test eax, eax
// 0042b75d  7507                 jne 0x42b766
// 0042b75f  814e0417408401       or dword ptr [esi + 4], 0x1844017
// 0042b766  5e                   pop esi
// 0042b767  c20400               ret 4
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
