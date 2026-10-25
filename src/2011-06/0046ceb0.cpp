// from server: 100% by tester
// roc 2011-06 0046ceb0  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046ceb0
//
// 0046ceb0  8b442404             mov eax, dword ptr [esp + 4]
// 0046ceb4  c70004010000         mov dword ptr [eax], 0x104
// 0046ceba  c7400404010000       mov dword ptr [eax + 4], 0x104
// 0046cec1  c20800               ret 8

struct CRobloxControlColorSelector
{
    void SetSize(int* size, int unused);
};

void CRobloxControlColorSelector::SetSize(int* size, int unused)
{
    size[0] = 0x104;
    size[1] = 0x104;
}