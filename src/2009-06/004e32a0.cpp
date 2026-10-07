// roc 2009-06 004e32a0  unit: RBX::Network::Replicator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e32a0
//
// 004e32a0  8b01                 mov eax, dword ptr [ecx]
// 004e32a2  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e32a5  8908                 mov dword ptr [eax], ecx
// 004e32a7  c3                   ret 
// copied from an identical function in another client (function ?Apply@TGenericSlotWrapper@ns_ROCX00008f@@QAEXXZ)

namespace ns_ROCX00008f {
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
