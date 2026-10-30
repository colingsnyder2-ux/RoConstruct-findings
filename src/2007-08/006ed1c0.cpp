// from server: 100% by auto
// roc 2007-08 006ed1c0  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ed1c0
//
// 006ed1c0  83ec10               sub esp, 0x10
// 006ed1c3  53                   push ebx
// 006ed1c4  8bd9                 mov ebx, ecx
// 006ed1c6  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 006ed1cc  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 006ed1d3  0f84c0000000         je 0x6ed299
// 006ed1d9  56                   push esi
// 006ed1da  8b742424             mov esi, dword ptr [esp + 0x24]
// 006ed1de  57                   push edi
// 006ed1df  56                   push esi
// 006ed1e0  8d4c2410             lea ecx, [esp + 0x10]
// 006ed1e4  51                   push ecx
// 006ed1e5  ff15e0ed7700         call dword ptr [0x77ede0]
// 006ed1eb  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 006ed1f1  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 006ed1f7  e816b20400           call 0x738412
// 006ed1fc  a900000021           test eax, 0x21000000
// 006ed201  751e                 jne 0x6ed221
// 006ed203  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 006ed209  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 006ed20f  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ed213  51                   push ecx
// 006ed214  8d542410             lea edx, [esp + 0x10]
// 006ed218  52                   push edx
// 006ed219  50                   push eax
// 006ed21a  8bcb                 mov ecx, ebx
// 006ed21c  e85ffeffff           call 0x6ed080
// 006ed221  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 006ed227  e8240ff8ff           call 0x66e150
// 006ed22c  8b7804               mov edi, dword ptr [eax + 4]
// 006ed22f  85ff                 test edi, edi
// 006ed231  7449                 je 0x6ed27c
// 006ed233  8bc7                 mov eax, edi
// 006ed235  8b4008               mov eax, dword ptr [eax + 8]
// 006ed238  83781803             cmp dword ptr [eax + 0x18], 3
// 006ed23c  8b3f                 mov edi, dword ptr [edi]
// 006ed23e  7534                 jne 0x6ed274
// 006ed240  8db01cffffff         lea esi, [eax - 0xe4]
// 006ed246  85f6                 test esi, esi
// 006ed248  742a                 je 0x6ed274
// 006ed24a  8b4620               mov eax, dword ptr [esi + 0x20]
// 006ed24d  85c0                 test eax, eax
// 006ed24f  7423                 je 0x6ed274
// 006ed251  50                   push eax
// 006ed252  ff15a0ed7700         call dword ptr [0x77eda0]
// 006ed258  85c0                 test eax, eax
// 006ed25a  7418                 je 0x6ed274
// 006ed25c  39742420             cmp dword ptr [esp + 0x20], esi
// 006ed260  7412                 je 0x6ed274
// 006ed262  8b542424             mov edx, dword ptr [esp + 0x24]
// 006ed266  56                   push esi
// 006ed267  8d4c2410             lea ecx, [esp + 0x10]
// 006ed26b  51                   push ecx
// 006ed26c  52                   push edx
// 006ed26d  8bcb                 mov ecx, ebx
// 006ed26f  e80cfeffff           call 0x6ed080
// 006ed274  85ff                 test edi, edi
// 006ed276  75bb                 jne 0x6ed233
// 006ed278  8b742428             mov esi, dword ptr [esp + 0x28]
// 006ed27c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ed280  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ed284  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ed288  8906                 mov dword ptr [esi], eax
// 006ed28a  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ed28e  894e04               mov dword ptr [esi + 4], ecx
// 006ed291  895608               mov dword ptr [esi + 8], edx
// 006ed294  5f                   pop edi
// 006ed295  89460c               mov dword ptr [esi + 0xc], eax
// 006ed298  5e                   pop esi
// 006ed299  5b                   pop ebx
// 006ed29a  83c410               add esp, 0x10
// 006ed29d  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
