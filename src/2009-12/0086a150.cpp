// roc 2009-12 0086a150  unit: CXTPPropertyGridView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a150
//
// 0086a150  e8ebfdffff           call 0x869f40
// 0086a155  c21000               ret 0x10
// copied from an identical function in another client (function ?SetRegistryKey@CXTRegistryManager@ns_ROCX000045@@QAEHPBD000@Z)

namespace ns_ROCX000045 {
extern "C" int __cdecl sub_630a1e();

struct CXTRegistryManager
{
    int SetRegistryKey(const char* a, const char* b, const char* c, const char* d);
};

int CXTRegistryManager::SetRegistryKey(const char* a, const char* b, const char* c, const char* d)
{
    return sub_630a1e();
}
}
