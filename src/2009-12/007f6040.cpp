// roc 2009-12 007f6040  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6040
//
// 007f6040  8b442404             mov eax, dword ptr [esp + 4]
// 007f6044  3b810c010000         cmp eax, dword ptr [ecx + 0x10c]
// 007f604a  740b                 je 0x7f6057
// 007f604c  89810c010000         mov dword ptr [ecx + 0x10c], eax
// 007f6052  e869fcffff           call 0x7f5cc0
// 007f6057  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CRobloxControlColorSelector@ns_ROCX00000a@@QAEXH@Z)

namespace ns_ROCX00000a {
// from server: 100% by tester
struct CRobloxControlColorSelector {
    void notifyChange();
    void setValue(int value);
    char pad_0[0x10c];
    int field_108;
};

void CRobloxControlColorSelector::setValue(int value)
{
    if (value != field_108) {
        field_108 = value;
        notifyChange();
    }
}
}
