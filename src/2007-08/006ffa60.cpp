// from server: 100% by colin
// roc 2007-08 006ffa60  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffa60
//
// 006ffa60  8b442404             mov eax, dword ptr [esp + 4]
// 006ffa64  8b11                 mov edx, dword ptr [ecx]
// 006ffa66  898104010000         mov dword ptr [ecx + 0x104], eax
// 006ffa6c  8b4270               mov eax, dword ptr [edx + 0x70]
// 006ffa6f  ffd0                 call eax
// 006ffa71  c20400               ret 4

struct CXTPTabPaintManager
{
    int m_nValue;
    char m_pad[0x100];
    int m_nField104;
    void SetValue(int);
};

void CXTPTabPaintManager::SetValue(int nValue)
{
    m_nField104 = nValue;
    (*(void (__thiscall **)(CXTPTabPaintManager *))(*(int *)this + 0x70))(this);
}
