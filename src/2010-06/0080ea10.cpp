// from server: 100% by atomic.potato
// roc 2010-06 0080ea10  unit: CXTPStatusBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080ea10
//
// 0080ea10  53                   push ebx
// 0080ea11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0080ea15  55                   push ebp
// 0080ea16  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0080ea1a  56                   push esi
// 0080ea1b  8bf1                 mov esi, ecx
// 0080ea1d  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0080ea23  57                   push edi
// 0080ea24  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0080ea28  85c9                 test ecx, ecx
// 0080ea2a  7409                 je 0x80ea35
// 0080ea2c  57                   push edi
// 0080ea2d  53                   push ebx
// 0080ea2e  55                   push ebp
// 0080ea2f  56                   push esi
// 0080ea30  e81b8a0000           call 0x817450
// 0080ea35  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080ea39  50                   push eax
// 0080ea3a  57                   push edi
// 0080ea3b  53                   push ebx
// 0080ea3c  55                   push ebp
// 0080ea3d  8bce                 mov ecx, esi
// 0080ea3f  e8d690f9ff           call 0x7a7b1a
// 0080ea44  5f                   pop edi
// 0080ea45  5e                   pop esi
// 0080ea46  5d                   pop ebp
// 0080ea47  5b                   pop ebx
// 0080ea48  c21000               ret 0x10

struct CXTPStatusBar;

struct XTPStatusBarHelper {
    void Draw(CXTPStatusBar* pBar, int a1, int a2, int a3);
};

struct CXTPStatusBar {
    char pad[0xd0];
    XTPStatusBarHelper* m_pHelper;
    void BaseDraw(int a1, int a2, int a3, int a4);
    void Draw(int a1, int a2, int a3, int a4);
};

void CXTPStatusBar::Draw(int a1, int a2, int a3, int a4)
{
    if (m_pHelper != 0)
        m_pHelper->Draw(this, a1, a2, a3);
    BaseDraw(a1, a2, a3, a4);
}
