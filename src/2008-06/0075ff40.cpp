// from server: 100% by auto
// roc 2008-06 0075ff40  unit: CXTPDockingPaneTabbedContainer  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ff40
//
// 0075ff40  53                   push ebx
// 0075ff41  55                   push ebp
// 0075ff42  56                   push esi
// 0075ff43  57                   push edi
// 0075ff44  8bf9                 mov edi, ecx
// 0075ff46  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 0075ff4c  8d6f54               lea ebp, [edi + 0x54]
// 0075ff4f  8bcd                 mov ecx, ebp
// 0075ff51  e84ad5ffff           call 0x75d4a0
// 0075ff56  8bd8                 mov ebx, eax
// 0075ff58  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075ff5c  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075ff5f  0510dbffff           add eax, 0xffffdb10
// 0075ff64  83f803               cmp eax, 3
// 0075ff67  0f8789010000         ja 0x7600f6
// 0075ff6d  ff248500017600       jmp dword ptr [eax*4 + 0x760100]
// 0075ff74  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 0075ff7b  7471                 je 0x75ffee
// 0075ff7d  8bbf94000000         mov edi, dword ptr [edi + 0x94]
// 0075ff83  85ff                 test edi, edi
// 0075ff85  0f846b010000         je 0x7600f6
// 0075ff8b  8b2db0218000         mov ebp, dword ptr [0x8021b0]
// 0075ff91  8bc7                 mov eax, edi
// 0075ff93  8b7008               mov esi, dword ptr [eax + 8]
// 0075ff96  8b7f04               mov edi, dword ptr [edi + 4]
// 0075ff99  85f6                 test esi, esi
// 0075ff9b  7405                 je 0x75ffa2
// 0075ff9d  83c6e0               add esi, -0x20
// 0075ffa0  eb02                 jmp 0x75ffa4
// 0075ffa2  33f6                 xor esi, esi
// 0075ffa4  8bce                 mov ecx, esi
// 0075ffa6  e83576faff           call 0x7075e0
// 0075ffab  a801                 test al, 1
// 0075ffad  7534                 jne 0x75ffe3
// 0075ffaf  8d4e04               lea ecx, [esi + 4]
// 0075ffb2  51                   push ecx
// 0075ffb3  ffd5                 call ebp
// 0075ffb5  6a00                 push 0
// 0075ffb7  6a00                 push 0
// 0075ffb9  56                   push esi
// 0075ffba  6a02                 push 2
// 0075ffbc  8bcb                 mov ecx, ebx
// 0075ffbe  e80d4ff8ff           call 0x6e4ed0
// 0075ffc3  85c0                 test eax, eax
// 0075ffc5  7515                 jne 0x75ffdc
// 0075ffc7  8bce                 mov ecx, esi
// 0075ffc9  e8b272faff           call 0x707280
// 0075ffce  6a00                 push 0
// 0075ffd0  6a00                 push 0
// 0075ffd2  56                   push esi
// 0075ffd3  6a03                 push 3
// 0075ffd5  8bcb                 mov ecx, ebx
// 0075ffd7  e8f44ef8ff           call 0x6e4ed0
// 0075ffdc  8bce                 mov ecx, esi
// 0075ffde  e8010cf4ff           call 0x6a0be4
// 0075ffe3  85ff                 test edi, edi
// 0075ffe5  75aa                 jne 0x75ff91
// 0075ffe7  5f                   pop edi
// 0075ffe8  5e                   pop esi
// 0075ffe9  5d                   pop ebp
// 0075ffea  5b                   pop ebx
// 0075ffeb  c20400               ret 4
// 0075ffee  85f6                 test esi, esi
// 0075fff0  0f8400010000         je 0x7600f6
// 0075fff6  8d5604               lea edx, [esi + 4]
// 0075fff9  52                   push edx
// 0075fffa  ff15b0218000         call dword ptr [0x8021b0]
// 00760000  6a00                 push 0
// 00760002  6a00                 push 0
// 00760004  56                   push esi
// 00760005  6a02                 push 2
// 00760007  8bcb                 mov ecx, ebx
// 00760009  e8c24ef8ff           call 0x6e4ed0
// 0076000e  85c0                 test eax, eax
// 00760010  7515                 jne 0x760027
// 00760012  8bce                 mov ecx, esi
// 00760014  e86772faff           call 0x707280
// 00760019  6a00                 push 0
// 0076001b  6a00                 push 0
// 0076001d  56                   push esi
// 0076001e  6a03                 push 3
// 00760020  8bcb                 mov ecx, ebx
// 00760022  e8a94ef8ff           call 0x6e4ed0
// 00760027  8bce                 mov ecx, esi
// 00760029  e8b60bf4ff           call 0x6a0be4
// 0076002e  5f                   pop edi
// 0076002f  5e                   pop esi
// 00760030  5d                   pop ebp
// 00760031  5b                   pop ebx
// 00760032  c20400               ret 4
// 00760035  8b4500               mov eax, dword ptr [ebp]
// 00760038  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0076003b  8bcd                 mov ecx, ebp
// 0076003d  ffd2                 call edx
// 0076003f  85c0                 test eax, eax
// 00760041  7548                 jne 0x76008b
// 00760043  50                   push eax
// 00760044  50                   push eax
// 00760045  56                   push esi
// 00760046  6a12                 push 0x12
// 00760048  8bcb                 mov ecx, ebx
// 0076004a  e8814ef8ff           call 0x6e4ed0
// 0076004f  85c0                 test eax, eax
// 00760051  0f859f000000         jne 0x7600f6
// 00760057  8b4500               mov eax, dword ptr [ebp]
// 0076005a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0076005d  8bcd                 mov ecx, ebp
// 0076005f  ffd2                 call edx
// 00760061  8bc8                 mov ecx, eax
// 00760063  e8c009f4ff           call 0x6a0a28
// 00760068  8bcf                 mov ecx, edi
// 0076006a  e821e6ffff           call 0x75e690
// 0076006f  8bce                 mov ecx, esi
// 00760071  e82a72faff           call 0x7072a0
// 00760076  6a00                 push 0
// 00760078  6a00                 push 0
// 0076007a  56                   push esi
// 0076007b  6a13                 push 0x13
// 0076007d  8bcb                 mov ecx, ebx
// 0076007f  e84c4ef8ff           call 0x6e4ed0
// 00760084  5f                   pop edi
// 00760085  5e                   pop esi
// 00760086  5d                   pop ebp
// 00760087  5b                   pop ebx
// 00760088  c20400               ret 4
// 0076008b  83bbb800000000       cmp dword ptr [ebx + 0xb8], 0
// 00760092  7418                 je 0x7600ac
// 00760094  8bc5                 mov eax, ebp
// 00760096  50                   push eax
// 00760097  8bcd                 mov ecx, ebp
// 00760099  e802d4ffff           call 0x75d4a0
// 0076009e  8bc8                 mov ecx, eax
// 007600a0  e8db70f8ff           call 0x6e7180
// 007600a5  5f                   pop edi
// 007600a6  5e                   pop esi
// 007600a7  5d                   pop ebp
// 007600a8  5b                   pop ebx
// 007600a9  c20400               ret 4
// 007600ac  85f6                 test esi, esi
// 007600ae  7419                 je 0x7600c9
// 007600b0  8d4620               lea eax, [esi + 0x20]
// 007600b3  50                   push eax
// 007600b4  8bcd                 mov ecx, ebp
// 007600b6  e8e5d3ffff           call 0x75d4a0
// 007600bb  8bc8                 mov ecx, eax
// 007600bd  e8be70f8ff           call 0x6e7180
// 007600c2  5f                   pop edi
// 007600c3  5e                   pop esi
// 007600c4  5d                   pop ebp
// 007600c5  5b                   pop ebx
// 007600c6  c20400               ret 4
// 007600c9  33c0                 xor eax, eax
// 007600cb  50                   push eax
// 007600cc  8bcd                 mov ecx, ebp
// 007600ce  e8cdd3ffff           call 0x75d4a0
// 007600d3  8bc8                 mov ecx, eax
// 007600d5  e8a670f8ff           call 0x6e7180
// 007600da  5f                   pop edi
// 007600db  5e                   pop esi
// 007600dc  5d                   pop ebp
// 007600dd  5b                   pop ebx
// 007600de  c20400               ret 4
// 007600e1  8bcf                 mov ecx, edi
// 007600e3  e858f3ffff           call 0x75f440
// 007600e8  5f                   pop edi
// 007600e9  5e                   pop esi
// 007600ea  5d                   pop ebp
// 007600eb  5b                   pop ebx
// 007600ec  c20400               ret 4
// 007600ef  8bcf                 mov ecx, edi
// 007600f1  e8eadbffff           call 0x75dce0
// 007600f6  5f                   pop edi
// 007600f7  5e                   pop esi
// 007600f8  5d                   pop ebp
// 007600f9  5b                   pop ebx
// 007600fa  c20400               ret 4
// 007600fd  8d4900               lea ecx, [ecx]
// 00760100  3500760074           xor eax, 0x74007600
// 00760105  ff7500               push dword ptr [ebp]
// 00760108  e100                 loope 0x76010a
// 0076010a  7600                 jbe 0x76010c
// 0076010c  ef                   out dx, eax
// 0076010d  007600               add byte ptr [esi], dh
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
