// roc 2010-06 0047c140  unit: CWebToolbox  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047c140
//
// 0047c140  56                   push esi
// 0047c141  8b742408             mov esi, dword ptr [esp + 8]
// 0047c145  56                   push esi
// 0047c146  e803bc3200           call 0x7a7d4e
// 0047c14b  85c0                 test eax, eax
// 0047c14d  7507                 jne 0x47c156
// 0047c14f  814e0417408401       or dword ptr [esi + 4], 0x1844017
// 0047c156  5e                   pop esi
// 0047c157  c20400               ret 4
// copied from an identical function in another client (function ?sub_42a530@ns_ROCX000000@@YGHPAH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_630010(int* p);

int __stdcall sub_42a530(int* p)
{
    int result = sub_630010(p);
    if (result == 0)
        p[1] |= 0x1844017;
    return result;
}
}
