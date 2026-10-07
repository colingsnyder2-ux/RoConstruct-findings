// roc 2010-06 004e59d0  unit: RBX::Network::Replicator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e59d0
//
// 004e59d0  8b01                 mov eax, dword ptr [ecx]
// 004e59d2  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e59d5  8908                 mov dword ptr [eax], ecx
// 004e59d7  c3                   ret 
// copied from an identical function in another client (function ?Apply@TGenericSlotWrapper@ns_ROCX00008e@@QAEXXZ)

namespace ns_ROCX00008e {
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
