// roc 2009-06 007e2a80  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2a80
//
// 007e2a80  83ec10               sub esp, 0x10
// 007e2a83  53                   push ebx
// 007e2a84  8bd9                 mov ebx, ecx
// 007e2a86  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 007e2a8c  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 007e2a93  0f84c0000000         je 0x7e2b59
// 007e2a99  56                   push esi
// 007e2a9a  8b742424             mov esi, dword ptr [esp + 0x24]
// 007e2a9e  57                   push edi
// 007e2a9f  56                   push esi
// 007e2aa0  8d4c2410             lea ecx, [esp + 0x10]
// 007e2aa4  51                   push ecx
// 007e2aa5  ff1500ee8900         call dword ptr [0x89ee00]
// 007e2aab  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 007e2ab1  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 007e2ab7  e820940600           call 0x84bedc
// 007e2abc  a900000021           test eax, 0x21000000
// 007e2ac1  751e                 jne 0x7e2ae1
// 007e2ac3  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 007e2ac9  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 007e2acf  8b442424             mov eax, dword ptr [esp + 0x24]
// 007e2ad3  51                   push ecx
// 007e2ad4  8d542410             lea edx, [esp + 0x10]
// 007e2ad8  52                   push edx
// 007e2ad9  50                   push eax
// 007e2ada  8bcb                 mov ecx, ebx
// 007e2adc  e85ffeffff           call 0x7e2940
// 007e2ae1  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 007e2ae7  e814aef7ff           call 0x75d900
// 007e2aec  8b7804               mov edi, dword ptr [eax + 4]
// 007e2aef  85ff                 test edi, edi
// 007e2af1  7449                 je 0x7e2b3c
// 007e2af3  8bc7                 mov eax, edi
// 007e2af5  8b4008               mov eax, dword ptr [eax + 8]
// 007e2af8  83781803             cmp dword ptr [eax + 0x18], 3
// 007e2afc  8b3f                 mov edi, dword ptr [edi]
// 007e2afe  7534                 jne 0x7e2b34
// 007e2b00  8db008ffffff         lea esi, [eax - 0xf8]
// 007e2b06  85f6                 test esi, esi
// 007e2b08  742a                 je 0x7e2b34
// 007e2b0a  8b4620               mov eax, dword ptr [esi + 0x20]
// 007e2b0d  85c0                 test eax, eax
// 007e2b0f  7423                 je 0x7e2b34
// 007e2b11  50                   push eax
// 007e2b12  ff15c8ed8900         call dword ptr [0x89edc8]
// 007e2b18  85c0                 test eax, eax
// 007e2b1a  7418                 je 0x7e2b34
// 007e2b1c  39742420             cmp dword ptr [esp + 0x20], esi
// 007e2b20  7412                 je 0x7e2b34
// 007e2b22  8b542424             mov edx, dword ptr [esp + 0x24]
// 007e2b26  56                   push esi
// 007e2b27  8d4c2410             lea ecx, [esp + 0x10]
// 007e2b2b  51                   push ecx
// 007e2b2c  52                   push edx
// 007e2b2d  8bcb                 mov ecx, ebx
// 007e2b2f  e80cfeffff           call 0x7e2940
// 007e2b34  85ff                 test edi, edi
// 007e2b36  75bb                 jne 0x7e2af3
// 007e2b38  8b742428             mov esi, dword ptr [esp + 0x28]
// 007e2b3c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e2b40  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e2b44  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e2b48  8906                 mov dword ptr [esi], eax
// 007e2b4a  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e2b4e  894e04               mov dword ptr [esi + 4], ecx
// 007e2b51  895608               mov dword ptr [esi + 8], edx
// 007e2b54  5f                   pop edi
// 007e2b55  89460c               mov dword ptr [esi + 0xc], eax
// 007e2b58  5e                   pop esi
// 007e2b59  5b                   pop ebx
// 007e2b5a  83c410               add esp, 0x10
// 007e2b5d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
