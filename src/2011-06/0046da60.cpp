// from server: 100% by tester
// roc 2011-06 0046da60  unit: CRobloxControlMaterialSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046da60
//
// 0046da60  8b442404             mov eax, dword ptr [esp + 4]
// 0046da64  c70024010000         mov dword ptr [eax], 0x124
// 0046da6a  c7400424000000       mov dword ptr [eax + 4], 0x24
// 0046da71  c20800               ret 8

struct CRobloxControlColorSelector
{
    void SetSize(int* size, int unused);
};

void CRobloxControlColorSelector::SetSize(int* size, int unused)
{
    size[0] = 0x124;
    size[1] = 0x24;
}