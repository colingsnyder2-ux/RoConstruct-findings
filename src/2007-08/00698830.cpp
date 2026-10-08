// from server: 100% by colin
// roc 2007-08 00698830  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698830
//
// 00698830  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00698836  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 0069883c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0069883f  56                   push esi
// 00698840  8b742408             mov esi, dword ptr [esp + 8]
// 00698844  56                   push esi
// 00698845  50                   push eax
// 00698846  6898010000           push 0x198
// 0069884b  52                   push edx
// 0069884c  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00698852  8bc6                 mov eax, esi
// 00698854  5e                   pop esi
// 00698855  c20400               ret 4

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
