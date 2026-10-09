// roc 2007-03 00643d30  unit: seg_00640000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00643d30
//
// 00643d30  8b89a8000000         mov ecx, dword ptr [ecx + 0xa8]
// 00643d36  56                   push esi
// 00643d37  8b742408             mov esi, dword ptr [esp + 8]
// 00643d3b  56                   push esi
// 00643d3c  e8dfb90000           call 0x64f720
// 00643d41  8bc6                 mov eax, esi
// 00643d43  5e                   pop esi
// 00643d44  c20400               ret 4
// copied from an identical function in another client (function ?SetItem@Outer@ns_ROCX00001b@@QAEPAUInner@2@PAU32@@Z)

namespace ns_ROCX00001b {
struct Inner;

struct Outer {
    char pad[0xa8];
    Inner* inner;
    Inner* SetItem(Inner* item);
};

struct Inner {
    Inner* SetItem(Inner* item);
};

Inner* Outer::SetItem(Inner* item)
{
    Inner* result = inner->SetItem(item);
    return item;
}
}
