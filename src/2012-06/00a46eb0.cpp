// roc 2012-06 00a46eb0  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a46eb0
//
// 00a46eb0  83ec10               sub esp, 0x10
// 00a46eb3  53                   push ebx
// 00a46eb4  8bd9                 mov ebx, ecx
// 00a46eb6  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 00a46ebc  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 00a46ec3  0f84c0000000         je 0xa46f89
// 00a46ec9  56                   push esi
// 00a46eca  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a46ece  57                   push edi
// 00a46ecf  56                   push esi
// 00a46ed0  8d4c2410             lea ecx, [esp + 0x10]
// 00a46ed4  51                   push ecx
// 00a46ed5  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a46edb  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 00a46ee1  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 00a46ee7  e8e6260500           call 0xa995d2
// 00a46eec  a900000021           test eax, 0x21000000
// 00a46ef1  751e                 jne 0xa46f11
// 00a46ef3  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 00a46ef9  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00a46eff  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a46f03  51                   push ecx
// 00a46f04  8d542410             lea edx, [esp + 0x10]
// 00a46f08  52                   push edx
// 00a46f09  50                   push eax
// 00a46f0a  8bcb                 mov ecx, ebx
// 00a46f0c  e85ffeffff           call 0xa46d70
// 00a46f11  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 00a46f17  e844f6f7ff           call 0x9c6560
// 00a46f1c  8b7804               mov edi, dword ptr [eax + 4]
// 00a46f1f  85ff                 test edi, edi
// 00a46f21  7449                 je 0xa46f6c
// 00a46f23  8bc7                 mov eax, edi
// 00a46f25  8b4008               mov eax, dword ptr [eax + 8]
// 00a46f28  83781803             cmp dword ptr [eax + 0x18], 3
// 00a46f2c  8b3f                 mov edi, dword ptr [edi]
// 00a46f2e  7534                 jne 0xa46f64
// 00a46f30  8db008ffffff         lea esi, [eax - 0xf8]
// 00a46f36  85f6                 test esi, esi
// 00a46f38  742a                 je 0xa46f64
// 00a46f3a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a46f3d  85c0                 test eax, eax
// 00a46f3f  7423                 je 0xa46f64
// 00a46f41  50                   push eax
// 00a46f42  ff153c3bb200         call dword ptr [0xb23b3c]
// 00a46f48  85c0                 test eax, eax
// 00a46f4a  7418                 je 0xa46f64
// 00a46f4c  39742420             cmp dword ptr [esp + 0x20], esi
// 00a46f50  7412                 je 0xa46f64
// 00a46f52  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a46f56  56                   push esi
// 00a46f57  8d4c2410             lea ecx, [esp + 0x10]
// 00a46f5b  51                   push ecx
// 00a46f5c  52                   push edx
// 00a46f5d  8bcb                 mov ecx, ebx
// 00a46f5f  e80cfeffff           call 0xa46d70
// 00a46f64  85ff                 test edi, edi
// 00a46f66  75bb                 jne 0xa46f23
// 00a46f68  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a46f6c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a46f70  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a46f74  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a46f78  8906                 mov dword ptr [esi], eax
// 00a46f7a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a46f7e  894e04               mov dword ptr [esi + 4], ecx
// 00a46f81  895608               mov dword ptr [esi + 8], edx
// 00a46f84  5f                   pop edi
// 00a46f85  89460c               mov dword ptr [esi + 0xc], eax
// 00a46f88  5e                   pop esi
// 00a46f89  5b                   pop ebx
// 00a46f8a  83c410               add esp, 0x10
// 00a46f8d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
