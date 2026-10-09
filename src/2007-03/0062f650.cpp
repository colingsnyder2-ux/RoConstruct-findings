// roc 2007-03 0062f650  unit: seg_00620000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f650
//
// 0062f650  8b442404             mov eax, dword ptr [esp + 4]
// 0062f654  3b8108010000         cmp eax, dword ptr [ecx + 0x108]
// 0062f65a  740b                 je 0x62f667
// 0062f65c  898108010000         mov dword ptr [ecx + 0x108], eax
// 0062f662  e889fcffff           call 0x62f2f0
// 0062f667  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CRobloxControlColorSelector@ns_ROCX000006@@QAEXH@Z)

namespace ns_ROCX000006 {
struct CRobloxControlColorSelector {
    void notifyChange();
    void setValue(int value);
    char pad_0[0x108];
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
