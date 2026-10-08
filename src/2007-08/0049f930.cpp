// from server: 86% by colin
// roc 2007-08 0049f930  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f930
//
// 0049f930  80791000             cmp byte ptr [ecx + 0x10], 0
// 0049f934  7414                 je 0x49f94a
// 0049f936  81790400080000       cmp dword ptr [ecx + 4], 0x800
// 0049f93d  7e0b                 jle 0x49f94a
// 0049f93f  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0049f942  50                   push eax
// 0049f943  ff15c4e67700         call dword ptr [0x77e6c4]
// 0049f949  59                   pop ecx
// 0049f94a  c3                   ret 

extern "C" void __cdecl free(void*);

struct BoundFuncDesc {
    int field0;
    int field4;
    int field8;
    void* fieldC;
    char field10;
    void destroy();
};

void BoundFuncDesc::destroy() {
    if (field10 != 0 && field4 > 0x800) {
        free(fieldC);
    }
}
