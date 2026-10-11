// from server: 100% by colin
// roc 2007-08 00691690  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691690
//
// 00691690  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00691694  8b542404             mov edx, dword ptr [esp + 4]
// 00691698  56                   push esi
// 00691699  8bf1                 mov esi, ecx
// 0069169b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069169f  50                   push eax
// 006916a0  51                   push ecx
// 006916a1  52                   push edx
// 006916a2  8bce                 mov ecx, esi
// 006916a4  e859740a00           call 0x738b02
// 006916a9  8b4620               mov eax, dword ptr [esi + 0x20]
// 006916ac  6a01                 push 1
// 006916ae  6a00                 push 0
// 006916b0  50                   push eax
// 006916b1  ff15dcec7700         call dword ptr [0x77ecdc]
// 006916b7  5e                   pop esi
// 006916b8  c20c00               ret 0xc

struct CXTSplitterWnd {
    char m_pad[0x20];
    void* m_hWnd;
    void SetRowInfo(int, int, int);
};

extern "C" int (__stdcall *g_pfnInvalidateRect)(void*, const void*, int);

void CXTSplitterWnd::SetRowInfo(int a, int b, int c)
{
    SetRowInfo(a, b, c);
    g_pfnInvalidateRect(m_hWnd, 0, 1);
}
