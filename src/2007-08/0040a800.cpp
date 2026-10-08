// from server: 100% by colin
// roc 2007-08 0040a800  unit: CBrowserView  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a800
//
// 0040a800  56                   push esi
// 0040a801  8b742408             mov esi, dword ptr [esp + 8]
// 0040a805  56                   push esi
// 0040a806  e805582200           call 0x630010
// 0040a80b  85c0                 test eax, eax
// 0040a80d  7507                 jne 0x40a816
// 0040a80f  814e0414408401       or dword ptr [esi + 4], 0x1844014
// 0040a816  5e                   pop esi
// 0040a817  c20400               ret 4

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
