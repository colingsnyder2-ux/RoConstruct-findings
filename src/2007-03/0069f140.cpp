// roc 2007-03 0069f140  unit: seg_00690000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069f140
//
// 0069f140  56                   push esi
// 0069f141  8bf1                 mov esi, ecx
// 0069f143  e8f8fcffff           call 0x69ee40
// 0069f148  c7460400000000       mov dword ptr [esi + 4], 0
// 0069f14f  5e                   pop esi
// 0069f150  c3                   ret 
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
