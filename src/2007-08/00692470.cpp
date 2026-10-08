// from server: 89% by colin
// roc 2007-08 00692470  unit: CXTPStatusBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692470
//
// 00692470  53                   push ebx
// 00692471  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00692475  55                   push ebp
// 00692476  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0069247a  56                   push esi
// 0069247b  8bf1                 mov esi, ecx
// 0069247d  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00692483  85c9                 test ecx, ecx
// 00692485  57                   push edi
// 00692486  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0069248a  7409                 je 0x692495
// 0069248c  57                   push edi
// 0069248d  53                   push ebx
// 0069248e  55                   push ebp
// 0069248f  56                   push esi
// 00692490  e8fb430000           call 0x696890
// 00692495  8b442420             mov eax, dword ptr [esp + 0x20]
// 00692499  50                   push eax
// 0069249a  57                   push edi
// 0069249b  53                   push ebx
// 0069249c  55                   push ebp
// 0069249d  8bce                 mov ecx, esi
// 0069249f  e838d9f9ff           call 0x62fddc
// 006924a4  5f                   pop edi
// 006924a5  5e                   pop esi
// 006924a6  5d                   pop ebp
// 006924a7  5b                   pop ebx
// 006924a8  c21000               ret 0x10

struct CXTPStatusBar
{
    char pad[0xc0];
    void* m_pFrameHelper;
    void OnFrameHelperDraw(int, int, int, int);
    void OnPaint(int, int, int, int);
};

void CXTPStatusBar::OnFrameHelperDraw(int a, int b, int c, int d)
{
    if (m_pFrameHelper != 0)
    {
        extern void __stdcall helper_draw(void*, int, int, int, int);
        helper_draw(m_pFrameHelper, (int)this, a, b, c);
    }
    extern void __stdcall statusbar_paint(void*, int, int, int, int);
    statusbar_paint(this, a, b, c, d);
}
