// from server: 100% by colin
// roc 2007-08 006d9950  unit: CXTPDockingPaneMiniWnd  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d9950
//
// 006d9950  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 006d9956  83c154               add ecx, 0x54
// 006d9959  e9e26b0000           jmp 0x6e0540

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
