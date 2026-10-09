// roc 2007-03 0044a3d0  unit: seg_00440000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a3d0
//
// 0044a3d0  8b442404             mov eax, dword ptr [esp + 4]
// 0044a3d4  c70004010000         mov dword ptr [eax], 0x104
// 0044a3da  c7400484000000       mov dword ptr [eax + 4], 0x84
// 0044a3e1  c20800               ret 8
// copied from an identical function in another client (function ?SetSize@CRobloxControlColorSelector@ns_ROCX000020@@QAEXPAHH@Z)

namespace ns_ROCX000020 {
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
