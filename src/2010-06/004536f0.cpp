// from server: 100% by tester
// roc 2010-06 004536f0  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004536f0
//
// 004536f0  8b442404             mov eax, dword ptr [esp + 4]
// 004536f4  c70004010000         mov dword ptr [eax], 0x104
// 004536fa  c7400404010000       mov dword ptr [eax + 4], 0x104
// 00453701  c20800               ret 8

struct CRobloxControlColorSelector
{
    void SetSize(int* size, int unused);
};

void CRobloxControlColorSelector::SetSize(int* size, int unused)
{
    size[0] = 0x104;
    size[1] = 0x104;
}