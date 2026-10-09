// roc 2008-06 0044dfa0  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044dfa0
//
// 0044dfa0  8b442404             mov eax, dword ptr [esp + 4]
// 0044dfa4  c70004010000         mov dword ptr [eax], 0x104
// 0044dfaa  c7400484000000       mov dword ptr [eax + 4], 0x84
// 0044dfb1  c20800               ret 8
// copied from an identical function in another client (function ?SetSize@CRobloxControlColorSelector@ns_ROCX000035@@QAEXPAHH@Z)

namespace ns_ROCX000035 {
struct CRobloxControlColorSelector
{
    void SetSize(int* size, int unused);
};

void CRobloxControlColorSelector::SetSize(int* size, int unused)
{
    size[0] = 0x104;
    size[1] = 0x84;
}
}
