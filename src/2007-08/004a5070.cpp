// roc 2007-08 004a5070  unit: RBX::Network::Server::ClientProxy  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5070
//
// 004a5070  8b01                 mov eax, dword ptr [ecx]
// 004a5072  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a5075  8908                 mov dword ptr [eax], ecx
// 004a5077  c3                   ret 
// copied from an identical function in another client (function ?Apply@TGenericSlotWrapper@ns_ROCX000099@@QAEXXZ)

namespace ns_ROCX000099 {
struct TGenericSlotWrapper {
    int* m_target;
    int m_value;
    void Apply();
};

void TGenericSlotWrapper::Apply()
{
    *m_target = m_value;
}
}
