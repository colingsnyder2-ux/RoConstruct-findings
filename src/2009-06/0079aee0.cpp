// roc 2009-06 0079aee0  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079aee0
//
// 0079aee0  56                   push esi
// 0079aee1  8bf1                 mov esi, ecx
// 0079aee3  e838faffff           call 0x79a920
// 0079aee8  c7460400000000       mov dword ptr [esi + 4], 0
// 0079aeef  5e                   pop esi
// 0079aef0  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPResourceManager@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
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
