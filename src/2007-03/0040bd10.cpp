// roc 2007-03 0040bd10  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040bd10
//
// 0040bd10  56                   push esi
// 0040bd11  8b742408             mov esi, dword ptr [esp + 8]
// 0040bd15  56                   push esi
// 0040bd16  e883272100           call 0x61e49e
// 0040bd1b  85c0                 test eax, eax
// 0040bd1d  7507                 jne 0x40bd26
// 0040bd1f  814e0414408401       or dword ptr [esi + 4], 0x1844014
// 0040bd26  5e                   pop esi
// 0040bd27  c20400               ret 4
// copied from an identical function in another client (function ?func@ns_ROCX000002@@YGXPAUS@1@@Z)

namespace ns_ROCX000002 {
extern "C" int __stdcall sub_630010(void* p);

struct S {
    int field0;
    unsigned int flags;
};

void __stdcall func(S* p)
{
    if (sub_630010(p) == 0)
        p->flags |= 0x1844014;
}
}
