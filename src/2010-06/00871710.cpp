// roc 2010-06 00871710  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00871710
//
// 00871710  83ec10               sub esp, 0x10
// 00871713  53                   push ebx
// 00871714  8bd9                 mov ebx, ecx
// 00871716  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 0087171c  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 00871723  0f84c0000000         je 0x8717e9
// 00871729  56                   push esi
// 0087172a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087172e  57                   push edi
// 0087172f  56                   push esi
// 00871730  8d4c2410             lea ecx, [esp + 0x10]
// 00871734  51                   push ecx
// 00871735  ff1548bc9e00         call dword ptr [0x9ebc48]
// 0087173b  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 00871741  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 00871747  e892b61000           call 0x97cdde
// 0087174c  a900000021           test eax, 0x21000000
// 00871751  751e                 jne 0x871771
// 00871753  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 00871759  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 0087175f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00871763  51                   push ecx
// 00871764  8d542410             lea edx, [esp + 0x10]
// 00871768  52                   push edx
// 00871769  50                   push eax
// 0087176a  8bcb                 mov ecx, ebx
// 0087176c  e85ffeffff           call 0x8715d0
// 00871771  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 00871777  e814b1f7ff           call 0x7ec890
// 0087177c  8b7804               mov edi, dword ptr [eax + 4]
// 0087177f  85ff                 test edi, edi
// 00871781  7449                 je 0x8717cc
// 00871783  8bc7                 mov eax, edi
// 00871785  8b4008               mov eax, dword ptr [eax + 8]
// 00871788  83781803             cmp dword ptr [eax + 0x18], 3
// 0087178c  8b3f                 mov edi, dword ptr [edi]
// 0087178e  7534                 jne 0x8717c4
// 00871790  8db008ffffff         lea esi, [eax - 0xf8]
// 00871796  85f6                 test esi, esi
// 00871798  742a                 je 0x8717c4
// 0087179a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087179d  85c0                 test eax, eax
// 0087179f  7423                 je 0x8717c4
// 008717a1  50                   push eax
// 008717a2  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 008717a8  85c0                 test eax, eax
// 008717aa  7418                 je 0x8717c4
// 008717ac  39742420             cmp dword ptr [esp + 0x20], esi
// 008717b0  7412                 je 0x8717c4
// 008717b2  8b542424             mov edx, dword ptr [esp + 0x24]
// 008717b6  56                   push esi
// 008717b7  8d4c2410             lea ecx, [esp + 0x10]
// 008717bb  51                   push ecx
// 008717bc  52                   push edx
// 008717bd  8bcb                 mov ecx, ebx
// 008717bf  e80cfeffff           call 0x8715d0
// 008717c4  85ff                 test edi, edi
// 008717c6  75bb                 jne 0x871783
// 008717c8  8b742428             mov esi, dword ptr [esp + 0x28]
// 008717cc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008717d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008717d4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008717d8  8906                 mov dword ptr [esi], eax
// 008717da  8b442418             mov eax, dword ptr [esp + 0x18]
// 008717de  894e04               mov dword ptr [esi + 4], ecx
// 008717e1  895608               mov dword ptr [esi + 8], edx
// 008717e4  5f                   pop edi
// 008717e5  89460c               mov dword ptr [esi + 0xc], eax
// 008717e8  5e                   pop esi
// 008717e9  5b                   pop ebx
// 008717ea  83c410               add esp, 0x10
// 008717ed  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
