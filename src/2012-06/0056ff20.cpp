// roc 2012-06 0056ff20  unit: RBX::Network::IdSerializer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056ff20
//
// 0056ff20  8b01                 mov eax, dword ptr [ecx]
// 0056ff22  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056ff25  8908                 mov dword ptr [eax], ecx
// 0056ff27  c3                   ret 
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
