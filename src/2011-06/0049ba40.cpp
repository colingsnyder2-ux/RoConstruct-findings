// roc 2011-06 0049ba40  unit: CWebToolbox  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049ba40
//
// 0049ba40  56                   push esi
// 0049ba41  8b742408             mov esi, dword ptr [esp + 8]
// 0049ba45  56                   push esi
// 0049ba46  e8c1e93600           call 0x80a40c
// 0049ba4b  85c0                 test eax, eax
// 0049ba4d  7507                 jne 0x49ba56
// 0049ba4f  814e0417408401       or dword ptr [esi + 4], 0x1844017
// 0049ba56  5e                   pop esi
// 0049ba57  c20400               ret 4
// copied from an identical function in another client (function ?sub_42a530@ns_ROCX000003@@YGHPAH@Z)

namespace ns_ROCX000003 {
extern "C" int __stdcall sub_630010(int* p);

int __stdcall sub_42a530(int* p)
{
    int result = sub_630010(p);
    if (result == 0)
        p[1] |= 0x1844017;
    return result;
}
}
