// from server: 100% by auto
// roc 2008-06 0076a2d0  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076a2d0
//
// 0076a2d0  83ec10               sub esp, 0x10
// 0076a2d3  53                   push ebx
// 0076a2d4  8bd9                 mov ebx, ecx
// 0076a2d6  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 0076a2dc  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 0076a2e3  0f84c0000000         je 0x76a3a9
// 0076a2e9  56                   push esi
// 0076a2ea  8b742424             mov esi, dword ptr [esp + 0x24]
// 0076a2ee  57                   push edi
// 0076a2ef  56                   push esi
// 0076a2f0  8d4c2410             lea ecx, [esp + 0x10]
// 0076a2f4  51                   push ecx
// 0076a2f5  ff15702d8000         call dword ptr [0x802d70]
// 0076a2fb  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 0076a301  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 0076a307  e8fe1c0500           call 0x7bc00a
// 0076a30c  a900000021           test eax, 0x21000000
// 0076a311  751e                 jne 0x76a331
// 0076a313  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 0076a319  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 0076a31f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0076a323  51                   push ecx
// 0076a324  8d542410             lea edx, [esp + 0x10]
// 0076a328  52                   push edx
// 0076a329  50                   push eax
// 0076a32a  8bcb                 mov ecx, ebx
// 0076a32c  e85ffeffff           call 0x76a190
// 0076a331  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 0076a337  e8e4acf7ff           call 0x6e5020
// 0076a33c  8b7804               mov edi, dword ptr [eax + 4]
// 0076a33f  85ff                 test edi, edi
// 0076a341  7449                 je 0x76a38c
// 0076a343  8bc7                 mov eax, edi
// 0076a345  8b4008               mov eax, dword ptr [eax + 8]
// 0076a348  83781803             cmp dword ptr [eax + 0x18], 3
// 0076a34c  8b3f                 mov edi, dword ptr [edi]
// 0076a34e  7534                 jne 0x76a384
// 0076a350  8db008ffffff         lea esi, [eax - 0xf8]
// 0076a356  85f6                 test esi, esi
// 0076a358  742a                 je 0x76a384
// 0076a35a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0076a35d  85c0                 test eax, eax
// 0076a35f  7423                 je 0x76a384
// 0076a361  50                   push eax
// 0076a362  ff153c2d8000         call dword ptr [0x802d3c]
// 0076a368  85c0                 test eax, eax
// 0076a36a  7418                 je 0x76a384
// 0076a36c  39742420             cmp dword ptr [esp + 0x20], esi
// 0076a370  7412                 je 0x76a384
// 0076a372  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076a376  56                   push esi
// 0076a377  8d4c2410             lea ecx, [esp + 0x10]
// 0076a37b  51                   push ecx
// 0076a37c  52                   push edx
// 0076a37d  8bcb                 mov ecx, ebx
// 0076a37f  e80cfeffff           call 0x76a190
// 0076a384  85ff                 test edi, edi
// 0076a386  75bb                 jne 0x76a343
// 0076a388  8b742428             mov esi, dword ptr [esp + 0x28]
// 0076a38c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0076a390  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076a394  8b542414             mov edx, dword ptr [esp + 0x14]
// 0076a398  8906                 mov dword ptr [esi], eax
// 0076a39a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076a39e  894e04               mov dword ptr [esi + 4], ecx
// 0076a3a1  895608               mov dword ptr [esi + 8], edx
// 0076a3a4  5f                   pop edi
// 0076a3a5  89460c               mov dword ptr [esi + 0xc], eax
// 0076a3a8  5e                   pop esi
// 0076a3a9  5b                   pop ebx
// 0076a3aa  83c410               add esp, 0x10
// 0076a3ad  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
