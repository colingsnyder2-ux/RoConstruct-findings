// from server: 68% by colin
// roc 2007-08 006f5580  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5580
//
// 006f5580  56                   push esi
// 006f5581  8bf1                 mov esi, ecx
// 006f5583  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 006f5589  85c0                 test eax, eax
// 006f558b  740b                 je 0x6f5598
// 006f558d  50                   push eax
// 006f558e  ff15a0ed7700         call dword ptr [0x77eda0]
// 006f5594  85c0                 test eax, eax
// 006f5596  750c                 jne 0x6f55a4
// 006f5598  8b442408             mov eax, dword ptr [esp + 8]
// 006f559c  50                   push eax
// 006f559d  8bce                 mov ecx, esi
// 006f559f  e8bc50f4ff           call 0x63a660
// 006f55a4  5e                   pop esi
// 006f55a5  c20400               ret 4

extern "C" int __stdcall IsWindowVisible(void*);

struct CXTPControlCustom {
    char pad[0x170];
    void* m_hWnd;
    void SetVisible(int bVisible);
};

void CXTPControlCustom::SetVisible(int bVisible)
{
    if (m_hWnd != 0 && IsWindowVisible(m_hWnd) != 0)
        return;
    SetVisible(bVisible);
}
