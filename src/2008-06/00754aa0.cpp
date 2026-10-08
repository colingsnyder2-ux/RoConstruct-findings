// from server: 100% by auto
// roc 2008-06 00754aa0  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754aa0
//
// 00754aa0  56                   push esi
// 00754aa1  8b742408             mov esi, dword ptr [esp + 8]
// 00754aa5  8b4618               mov eax, dword ptr [esi + 0x18]
// 00754aa8  57                   push edi
// 00754aa9  8bf9                 mov edi, ecx
// 00754aab  83f803               cmp eax, 3
// 00754aae  743b                 je 0x754aeb
// 00754ab0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00754ab3  85c9                 test ecx, ecx
// 00754ab5  0f849f000000         je 0x754b5a
// 00754abb  83f804               cmp eax, 4
// 00754abe  0f8496000000         je 0x754b5a
// 00754ac4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00754ac7  83f805               cmp eax, 5
// 00754aca  7429                 je 0x754af5
// 00754acc  83f802               cmp eax, 2
// 00754acf  750f                 jne 0x754ae0
// 00754ad1  8b01                 mov eax, dword ptr [ecx]
// 00754ad3  8b5724               mov edx, dword ptr [edi + 0x24]
// 00754ad6  8b4008               mov eax, dword ptr [eax + 8]
// 00754ad9  52                   push edx
// 00754ada  ffd0                 call eax
// 00754adc  85c0                 test eax, eax
// 00754ade  7536                 jne 0x754b16
// 00754ae0  8b7610               mov esi, dword ptr [esi + 0x10]
// 00754ae3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00754ae6  83f803               cmp eax, 3
// 00754ae9  75c5                 jne 0x754ab0
// 00754aeb  5f                   pop edi
// 00754aec  b804000000           mov eax, 4
// 00754af1  5e                   pop esi
// 00754af2  c20400               ret 4
// 00754af5  8bf1                 mov esi, ecx
// 00754af7  85f6                 test esi, esi
// 00754af9  740e                 je 0x754b09
// 00754afb  8d46ac               lea eax, [esi - 0x54]
// 00754afe  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 00754b04  5f                   pop edi
// 00754b05  5e                   pop esi
// 00754b06  c20400               ret 4
// 00754b09  33c0                 xor eax, eax
// 00754b0b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 00754b11  5f                   pop edi
// 00754b12  5e                   pop esi
// 00754b13  c20400               ret 4
// 00754b16  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00754b19  85c9                 test ecx, ecx
// 00754b1b  7405                 je 0x754b22
// 00754b1d  8d79e0               lea edi, [ecx - 0x20]
// 00754b20  eb02                 jmp 0x754b24
// 00754b22  33ff                 xor edi, edi
// 00754b24  50                   push eax
// 00754b25  56                   push esi
// 00754b26  8bcf                 mov ecx, edi
// 00754b28  e853bc0000           call 0x760780
// 00754b2d  85c0                 test eax, eax
// 00754b2f  7415                 je 0x754b46
// 00754b31  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00754b37  f7d8                 neg eax
// 00754b39  1bc0                 sbb eax, eax
// 00754b3b  83e0fe               and eax, 0xfffffffe
// 00754b3e  5f                   pop edi
// 00754b3f  83c002               add eax, 2
// 00754b42  5e                   pop esi
// 00754b43  c20400               ret 4
// 00754b46  33c0                 xor eax, eax
// 00754b48  398790000000         cmp dword ptr [edi + 0x90], eax
// 00754b4e  5f                   pop edi
// 00754b4f  0f94c0               sete al
// 00754b52  5e                   pop esi
// 00754b53  8d440001             lea eax, [eax + eax + 1]
// 00754b57  c20400               ret 4
// 00754b5a  5f                   pop edi
// 00754b5b  83c8ff               or eax, 0xffffffff
// 00754b5e  5e                   pop esi
// 00754b5f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
