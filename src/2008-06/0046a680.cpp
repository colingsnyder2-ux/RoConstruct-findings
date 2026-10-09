// roc 2008-06 0046a680  unit: CWebToolbox  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a680
//
// 0046a680  56                   push esi
// 0046a681  8b742408             mov esi, dword ptr [esp + 8]
// 0046a685  56                   push esi
// 0046a686  e8a9632300           call 0x6a0a34
// 0046a68b  85c0                 test eax, eax
// 0046a68d  7507                 jne 0x46a696
// 0046a68f  814e0417408401       or dword ptr [esi + 4], 0x1844017
// 0046a696  5e                   pop esi
// 0046a697  c20400               ret 4
// copied from an identical function in another client (function ?sub_42a530@ns_ROCX000001@@YGHPAH@Z)

namespace ns_ROCX000001 {
extern "C" int __stdcall sub_630010(int* p);

int __stdcall sub_42a530(int* p)
{
    int result = sub_630010(p);
    if (result == 0)
        p[1] |= 0x1844017;
    return result;
}
}
