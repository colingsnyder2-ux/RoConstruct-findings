// roc 2008-06 0071f7e0  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f7e0
//
// 0071f7e0  56                   push esi
// 0071f7e1  8bf1                 mov esi, ecx
// 0071f7e3  e838faffff           call 0x71f220
// 0071f7e8  c7460400000000       mov dword ptr [esi + 4], 0
// 0071f7ef  5e                   pop esi
// 0071f7f0  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPResourceManager@ns_ROCX00002a@@QAEXXZ)

namespace ns_ROCX00002a {
struct CXTPResourceManager {
    void sub_6B2BD0();
    void Init();
    int field_0;
    int field_4;
};

void CXTPResourceManager::Init()
{
    sub_6B2BD0();
    field_4 = 0;
}
}
