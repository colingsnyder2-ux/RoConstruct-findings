// roc 2007-03 006c2ae0  unit: seg_006c0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c2ae0
//
// 006c2ae0  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 006c2ae6  83c154               add ecx, 0x54
// 006c2ae9  e9326a0000           jmp 0x6c9520
// copied from an identical function in another client (function ?GetSomething@CXTPDockingPaneMiniWnd@ns_ROCX000052@@QAEHXZ)

namespace ns_ROCX000052 {
struct CXTPDockingPaneMiniWnd {
    char pad[0xe8];
    int m_field;
    int GetSomething();
};

extern "C" int __fastcall sub_6e0540(int);

int CXTPDockingPaneMiniWnd::GetSomething()
{
    return sub_6e0540(m_field + 0x54);
}
}
