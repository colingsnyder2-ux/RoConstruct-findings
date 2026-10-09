// roc 2007-03 00683c50  unit: seg_00680000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00683c50
//
// 00683c50  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00683c56  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 00683c5c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00683c5f  56                   push esi
// 00683c60  8b742408             mov esi, dword ptr [esp + 8]
// 00683c64  56                   push esi
// 00683c65  50                   push eax
// 00683c66  6898010000           push 0x198
// 00683c6b  52                   push edx
// 00683c6c  ff1550ee7700         call dword ptr [0x77ee50]
// 00683c72  8bc6                 mov eax, esi
// 00683c74  5e                   pop esi
// 00683c75  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@ns_ROCX00000d@@QAEJPAX@Z)

namespace ns_ROCX00000d {
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

struct CXTPPropertyGridItem {
    char pad0[0x80];
    void* m_pWnd;
    char pad1[0x30];
    void* m_pGrid;
    long SetValue(void* pValue);
};

long CXTPPropertyGridItem::SetValue(void* pValue)
{
    void* wnd = *(void**)((char*)m_pGrid + 0x20);
    SendMessageA(wnd, 0x198, (unsigned int)m_pWnd, (long)pValue);
    return (long)pValue;
}
}
