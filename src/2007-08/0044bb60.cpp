// from server: 100% by colin
// roc 2007-08 0044bb60  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044bb60
//
// 0044bb60  8b442404             mov eax, dword ptr [esp + 4]
// 0044bb64  c70004010000         mov dword ptr [eax], 0x104
// 0044bb6a  c7400484000000       mov dword ptr [eax + 4], 0x84
// 0044bb71  c20800               ret 8

struct CRobloxControlColorSelector
{
    void SetSize(int* size, int unused);
};

void CRobloxControlColorSelector::SetSize(int* size, int unused)
{
    size[0] = 0x104;
    size[1] = 0x84;
}
