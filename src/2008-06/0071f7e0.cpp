// from server: 100% by tester
// roc 2008-06 0071f7e0  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f7e0
//
// 0071f7e0  56                   push esi
// 0071f7e1  8bf1                 mov esi, ecx
// 0071f7e3  e838faffff           call 0x71f220
// 0071f7e8  c7460400000000       mov dword ptr [esi + 4], 0
// 0071f7ef  5e                   pop esi
// 0071f7f0  c3                   ret 

struct CXTPResourceManager {
    int field0;
    int field4;
    void sub_79a920();
    void sub_79aee0();
};

void CXTPResourceManager::sub_79aee0() {
    sub_79a920();
    field4 = 0;
}
