// from server: 100% by colin
// roc 2007-08 006ffa80  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffa80
//
// 006ffa80  8b442404             mov eax, dword ptr [esp + 4]
// 006ffa84  8b11                 mov edx, dword ptr [ecx]
// 006ffa86  898108010000         mov dword ptr [ecx + 0x108], eax
// 006ffa8c  8b4270               mov eax, dword ptr [edx + 0x70]
// 006ffa8f  ffd0                 call eax
// 006ffa91  c20400               ret 4

struct CXTPTabPaintManager
{
    int m_pad[0x42];
    int m_nValue;

    void SetValue(int value);
};

void CXTPTabPaintManager::SetValue(int value)
{
    m_nValue = value;
    ((void (__thiscall *)(CXTPTabPaintManager *))((*(void ***)this)[0x1C]))(this);
}
