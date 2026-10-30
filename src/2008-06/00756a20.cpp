// from server: 100% by auto
// roc 2008-06 00756a20  unit: CXTPDockingPaneAutoHidePanel  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756a20
//
// 00756a20  53                   push ebx
// 00756a21  55                   push ebp
// 00756a22  56                   push esi
// 00756a23  8bf1                 mov esi, ecx
// 00756a25  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00756a2b  8bae14010000         mov ebp, dword ptr [esi + 0x114]
// 00756a31  8b9e18010000         mov ebx, dword ptr [esi + 0x118]
// 00756a37  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 00756a3d  57                   push edi
// 00756a3e  8bbe1c010000         mov edi, dword ptr [esi + 0x11c]
// 00756a44  83f803               cmp eax, 3
// 00756a47  7771                 ja 0x756aba
// 00756a49  ff2485e86a7500       jmp dword ptr [eax*4 + 0x756ae8]
// 00756a50  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00756a56  8bc7                 mov eax, edi
// 00756a58  2bc5                 sub eax, ebp
// 00756a5a  42                   inc edx
// 00756a5b  0fafc2               imul eax, edx
// 00756a5e  99                   cdq 
// 00756a5f  f7be0c010000         idiv dword ptr [esi + 0x10c]
// 00756a65  8bf8                 mov edi, eax
// 00756a67  03fd                 add edi, ebp
// 00756a69  eb4f                 jmp 0x756aba
// 00756a6b  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00756a71  42                   inc edx
// 00756a72  8bc7                 mov eax, edi
// 00756a74  2bc5                 sub eax, ebp
// 00756a76  0fafc2               imul eax, edx
// 00756a79  99                   cdq 
// 00756a7a  f7be0c010000         idiv dword ptr [esi + 0x10c]
// 00756a80  8bef                 mov ebp, edi
// 00756a82  2be8                 sub ebp, eax
// 00756a84  eb34                 jmp 0x756aba
// 00756a86  8bc1                 mov eax, ecx
// 00756a88  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 00756a8e  2bc3                 sub eax, ebx
// 00756a90  41                   inc ecx
// 00756a91  0fafc1               imul eax, ecx
// 00756a94  99                   cdq 
// 00756a95  f7be0c010000         idiv dword ptr [esi + 0x10c]
// 00756a9b  8bc8                 mov ecx, eax
// 00756a9d  03cb                 add ecx, ebx
// 00756a9f  eb19                 jmp 0x756aba
// 00756aa1  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00756aa7  42                   inc edx
// 00756aa8  8bc1                 mov eax, ecx
// 00756aaa  2bc3                 sub eax, ebx
// 00756aac  0fafc2               imul eax, edx
// 00756aaf  99                   cdq 
// 00756ab0  f7be0c010000         idiv dword ptr [esi + 0x10c]
// 00756ab6  8bd9                 mov ebx, ecx
// 00756ab8  2bd8                 sub ebx, eax
// 00756aba  a1443e8000           mov eax, dword ptr [0x803e44]
// 00756abf  6850020000           push 0x250
// 00756ac4  2bcb                 sub ecx, ebx
// 00756ac6  51                   push ecx
// 00756ac7  2bfd                 sub edi, ebp
// 00756ac9  57                   push edi
// 00756aca  53                   push ebx
// 00756acb  55                   push ebp
// 00756acc  50                   push eax
// 00756acd  8bce                 mov ecx, esi
// 00756acf  e8729ff4ff           call 0x6a0a46
// 00756ad4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00756ad7  6a00                 push 0
// 00756ad9  6a00                 push 0
// 00756adb  51                   push ecx
// 00756adc  ff15182e8000         call dword ptr [0x802e18]
// 00756ae2  5f                   pop edi
// 00756ae3  5e                   pop esi
// 00756ae4  5d                   pop ebp
// 00756ae5  5b                   pop ebx
// 00756ae6  c3                   ret 
// 00756ae7  90                   nop 
// 00756ae8  50                   push eax
// 00756ae9  6a75                 push 0x75
// 00756aeb  006b6a               add byte ptr [ebx + 0x6a], ch
// 00756aee  7500                 jne 0x756af0
// 00756af0  866a75               xchg byte ptr [edx + 0x75], ch
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?DoSlideStep@CXTPDockingPaneAutoHideWnd@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
