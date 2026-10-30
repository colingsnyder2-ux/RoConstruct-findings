// roc 2007-03 006d5f40  unit: seg_006d0000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d5f40
//
// 006d5f40  83ec10               sub esp, 0x10
// 006d5f43  53                   push ebx
// 006d5f44  8bd9                 mov ebx, ecx
// 006d5f46  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 006d5f4c  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 006d5f53  0f84c0000000         je 0x6d6019
// 006d5f59  56                   push esi
// 006d5f5a  8b742424             mov esi, dword ptr [esp + 0x24]
// 006d5f5e  57                   push edi
// 006d5f5f  56                   push esi
// 006d5f60  8d4c2410             lea ecx, [esp + 0x10]
// 006d5f64  51                   push ecx
// 006d5f65  ff1550ed7700         call dword ptr [0x77ed50]
// 006d5f6b  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 006d5f71  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 006d5f77  e8484c0600           call 0x73abc4
// 006d5f7c  a900000021           test eax, 0x21000000
// 006d5f81  751e                 jne 0x6d5fa1
// 006d5f83  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 006d5f89  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 006d5f8f  8b442424             mov eax, dword ptr [esp + 0x24]
// 006d5f93  51                   push ecx
// 006d5f94  8d542410             lea edx, [esp + 0x10]
// 006d5f98  52                   push edx
// 006d5f99  50                   push eax
// 006d5f9a  8bcb                 mov ecx, ebx
// 006d5f9c  e85ffeffff           call 0x6d5e00
// 006d5fa1  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 006d5fa7  e86441f8ff           call 0x65a110
// 006d5fac  8b7804               mov edi, dword ptr [eax + 4]
// 006d5faf  85ff                 test edi, edi
// 006d5fb1  7449                 je 0x6d5ffc
// 006d5fb3  8bc7                 mov eax, edi
// 006d5fb5  8b4008               mov eax, dword ptr [eax + 8]
// 006d5fb8  83781803             cmp dword ptr [eax + 0x18], 3
// 006d5fbc  8b3f                 mov edi, dword ptr [edi]
// 006d5fbe  7534                 jne 0x6d5ff4
// 006d5fc0  8db01cffffff         lea esi, [eax - 0xe4]
// 006d5fc6  85f6                 test esi, esi
// 006d5fc8  742a                 je 0x6d5ff4
// 006d5fca  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d5fcd  85c0                 test eax, eax
// 006d5fcf  7423                 je 0x6d5ff4
// 006d5fd1  50                   push eax
// 006d5fd2  ff158ced7700         call dword ptr [0x77ed8c]
// 006d5fd8  85c0                 test eax, eax
// 006d5fda  7418                 je 0x6d5ff4
// 006d5fdc  39742420             cmp dword ptr [esp + 0x20], esi
// 006d5fe0  7412                 je 0x6d5ff4
// 006d5fe2  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d5fe6  56                   push esi
// 006d5fe7  8d4c2410             lea ecx, [esp + 0x10]
// 006d5feb  51                   push ecx
// 006d5fec  52                   push edx
// 006d5fed  8bcb                 mov ecx, ebx
// 006d5fef  e80cfeffff           call 0x6d5e00
// 006d5ff4  85ff                 test edi, edi
// 006d5ff6  75bb                 jne 0x6d5fb3
// 006d5ff8  8b742428             mov esi, dword ptr [esp + 0x28]
// 006d5ffc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d6000  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d6004  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d6008  8906                 mov dword ptr [esi], eax
// 006d600a  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d600e  894e04               mov dword ptr [esi + 4], ecx
// 006d6011  895608               mov dword ptr [esi + 8], edx
// 006d6014  5f                   pop edi
// 006d6015  89460c               mov dword ptr [esi + 0xc], eax
// 006d6018  5e                   pop esi
// 006d6019  5b                   pop ebx
// 006d601a  83c410               add esp, 0x10
// 006d601d  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
