// roc 2011-06 00771d30  unit: RBX::Lua::VFunctionScriptSlot::PAV?$TGenericSlotWrapper::?$sp_counted_impl_pd  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00771d30
//
// 00771d30  8b01                 mov eax, dword ptr [ecx]
// 00771d32  8b4904               mov ecx, dword ptr [ecx + 4]
// 00771d35  8908                 mov dword ptr [eax], ecx
// 00771d37  c3                   ret 
// copied from an identical function in another client (function ?Apply@TGenericSlotWrapper@ns_ROCX000046@@QAEXXZ)

namespace ns_ROCX000046 {
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
