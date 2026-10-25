// from server: 100% by tester
// roc 2008-06 006ab340  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab340
//
// 006ab340  8b442404             mov eax, dword ptr [esp + 4]
// 006ab344  3b810c010000         cmp eax, dword ptr [ecx + 0x10c]
// 006ab34a  740b                 je 0x6ab357
// 006ab34c  89810c010000         mov dword ptr [ecx + 0x10c], eax
// 006ab352  e869fcffff           call 0x6aafc0
// 006ab357  c20400               ret 4

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
