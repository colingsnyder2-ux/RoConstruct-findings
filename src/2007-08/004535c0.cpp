// from server: 100% by colin
// roc 2007-08 004535c0  unit: CRobloxReportPaneView  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004535c0
//
// 004535c0  8b442404             mov eax, dword ptr [esp + 4]
// 004535c4  56                   push esi
// 004535c5  50                   push eax
// 004535c6  8bf1                 mov esi, ecx
// 004535c8  e8e3f00e00           call 0x5426b0
// 004535cd  c7066c1e7900         mov dword ptr [esi], 0x791e6c
// 004535d3  c74604601e7900       mov dword ptr [esi + 4], 0x791e60
// 004535da  c74610581e7900       mov dword ptr [esi + 0x10], 0x791e58
// 004535e1  c74614481e7900       mov dword ptr [esi + 0x14], 0x791e48
// 004535e8  c7462c381e7900       mov dword ptr [esi + 0x2c], 0x791e38
// 004535ef  c74644281e7900       mov dword ptr [esi + 0x44], 0x791e28
// 004535f6  c7465c181e7900       mov dword ptr [esi + 0x5c], 0x791e18
// 004535fd  c74674081e7900       mov dword ptr [esi + 0x74], 0x791e08
// 00453604  c7868c000000f81d7900 mov dword ptr [esi + 0x8c], 0x791df8
// 0045360e  8bc6                 mov eax, esi
// 00453610  5e                   pop esi
// 00453611  c20400               ret 4

struct CRobloxReportPaneView {
    CRobloxReportPaneView* construct(int);
};

extern "C" void __stdcall sub_005426b0(int);

CRobloxReportPaneView* CRobloxReportPaneView::construct(int a)
{
    sub_005426b0(a);
    *(int*)((char*)this + 0x00) = 0x791e6c;
    *(int*)((char*)this + 0x04) = 0x791e60;
    *(int*)((char*)this + 0x10) = 0x791e58;
    *(int*)((char*)this + 0x14) = 0x791e48;
    *(int*)((char*)this + 0x2c) = 0x791e38;
    *(int*)((char*)this + 0x44) = 0x791e28;
    *(int*)((char*)this + 0x5c) = 0x791e18;
    *(int*)((char*)this + 0x74) = 0x791e08;
    *(int*)((char*)this + 0x8c) = 0x791df8;
    return this;
}
