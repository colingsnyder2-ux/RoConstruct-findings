// from server: 68% by colin
// roc 2007-08 006fdf40  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fdf40
//
// 006fdf40  837c240400           cmp dword ptr [esp + 4], 0
// 006fdf45  7412                 je 0x6fdf59
// 006fdf47  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006fdf4a  2b8188000000         sub eax, dword ptr [ecx + 0x88]
// 006fdf50  89442404             mov dword ptr [esp + 4], eax
// 006fdf54  e9a7f4ffff           jmp 0x6fd400
// 006fdf59  8b9188000000         mov edx, dword ptr [ecx + 0x88]
// 006fdf5f  035114               add edx, dword ptr [ecx + 0x14]
// 006fdf62  89542404             mov dword ptr [esp + 4], edx
// 006fdf66  e995f4ffff           jmp 0x6fd400

struct S_func_006fdf40 {
    char pad0[0x14];
    int m_field14;
    char pad1[0x88 - 0x14 - 4];
    int m_field88;
    int f(int a1);
};

int S_func_006fdf40::f(int a1)
{
    if (a1 != 0) {
        a1 = m_field14 - m_field88;
        return ((int (__thiscall *)(S_func_006fdf40 *, int))0x6fd400)(this, a1);
    }
    a1 = m_field88 + m_field14;
    return ((int (__thiscall *)(S_func_006fdf40 *, int))0x6fd400)(this, a1);
}
