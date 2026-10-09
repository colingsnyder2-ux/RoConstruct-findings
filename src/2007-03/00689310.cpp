// roc 2007-03 00689310  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00689310
//
// 00689310  e8ebfdffff           call 0x689100
// 00689315  c21000               ret 0x10
// copied from an identical function in another client (function ?SetRegistryKey@CXTRegistryManager@ns_ROCX00004b@@QAEHPBD000@Z)

namespace ns_ROCX00004b {
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
