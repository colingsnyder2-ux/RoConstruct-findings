// from server: 100% by tester
// roc 2010-06 00454840  unit: CRobloxControlMaterialSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00454840
//
// 00454840  8b442404             mov eax, dword ptr [esp + 4]
// 00454844  c70024010000         mov dword ptr [eax], 0x124
// 0045484a  c7400424000000       mov dword ptr [eax + 4], 0x24
// 00454851  c20800               ret 8

struct CRobloxControlColorSelector
{
    void SetSize(int* size, int unused);
};

void CRobloxControlColorSelector::SetSize(int* size, int unused)
{
    size[0] = 0x124;
    size[1] = 0x24;
}