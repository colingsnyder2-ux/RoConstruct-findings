// from server: 100% by colin
// roc 2007-08 006b2ed0  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2ed0
//
// 006b2ed0  56                   push esi
// 006b2ed1  8bf1                 mov esi, ecx
// 006b2ed3  e8f8fcffff           call 0x6b2bd0
// 006b2ed8  c7460400000000       mov dword ptr [esi + 4], 0
// 006b2edf  5e                   pop esi
// 006b2ee0  c3                   ret 

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
