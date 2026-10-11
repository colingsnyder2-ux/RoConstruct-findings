// from server: 100% by colin
// roc 2007-08 006ad860  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad860
//
// 006ad860  83ec10               sub esp, 0x10
// 006ad863  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006ad869  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006ad86f  890424               mov dword ptr [esp], eax
// 006ad872  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006ad878  89442408             mov dword ptr [esp + 8], eax
// 006ad87c  89542404             mov dword ptr [esp + 4], edx
// 006ad880  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 006ad886  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006ad88c  8d0424               lea eax, [esp]
// 006ad88f  50                   push eax
// 006ad890  51                   push ecx
// 006ad891  89542414             mov dword ptr [esp + 0x14], edx
// 006ad895  e856ffffff           call 0x6ad7f0
// 006ad89a  83c418               add esp, 0x18
// 006ad89d  c3                   ret 

struct CXTPTabPaintManager_CAppearanceSetFlat
{
    char pad[0xc0];
    int m_fieldC0;
    int m_fieldC4;
    int m_fieldC8;
    int m_fieldCC;
    char pad2[0xfc - 0xd0];
    int m_fieldFC;

    void sub_6ad860();
};

extern "C" void __cdecl sub_6ad7f0(int, int*);

void CXTPTabPaintManager_CAppearanceSetFlat::sub_6ad860()
{
    int local[4];
    local[0] = m_fieldC0;
    local[1] = m_fieldC4;
    local[2] = m_fieldC8;
    local[3] = m_fieldCC;
    sub_6ad7f0(m_fieldFC, local);
}
