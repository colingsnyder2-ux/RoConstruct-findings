// roc 2008-06 0061fab0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061fab0
//
// 0061fab0  8b01                 mov eax, dword ptr [ecx]
// 0061fab2  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061fab5  8908                 mov dword ptr [eax], ecx
// 0061fab7  c3                   ret 

struct TGenericSlotWrapper {
    int* m_target;
    int m_value;
    void Apply();
};

void TGenericSlotWrapper::Apply()
{
    *m_target = m_value;
}
