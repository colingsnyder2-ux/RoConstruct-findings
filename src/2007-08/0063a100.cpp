// from server: 100% by colin
// roc 2007-08 0063a100  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a100
//
// 0063a100  8b442404             mov eax, dword ptr [esp + 4]
// 0063a104  3b8108010000         cmp eax, dword ptr [ecx + 0x108]
// 0063a10a  740b                 je 0x63a117
// 0063a10c  898108010000         mov dword ptr [ecx + 0x108], eax
// 0063a112  e899fcffff           call 0x639db0
// 0063a117  c20400               ret 4

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
