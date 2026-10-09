// roc 2007-03 0044b640  unit: seg_00440000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b640
//
// 0044b640  8b442404             mov eax, dword ptr [esp + 4]
// 0044b644  39815c010000         cmp dword ptr [ecx + 0x15c], eax
// 0044b64a  740b                 je 0x44b657
// 0044b64c  89815c010000         mov dword ptr [ecx + 0x15c], eax
// 0044b652  e8993c1e00           call 0x62f2f0
// 0044b657  c20400               ret 4
// copied from an identical function in another client (function ?SetColor@CRobloxControlColorSelector@ns_ROCX000004@@QAEXH@Z)

namespace ns_ROCX000004 {
struct CRobloxControlColorSelector {
    void SetColor(int value);
    void Invalidate();
    char pad_0[0x15c];
    int m_field;
};

void CRobloxControlColorSelector::SetColor(int value) {
    if (this->m_field != value) {
        this->m_field = value;
        this->Invalidate();
    }
}
}
