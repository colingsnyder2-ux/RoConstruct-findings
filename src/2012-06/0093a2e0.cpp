// roc 2012-06 0093a2e0  unit: seg_00930000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093a2e0
//
// 0093a2e0  83ec0c               sub esp, 0xc
// 0093a2e3  53                   push ebx
// 0093a2e4  55                   push ebp
// 0093a2e5  56                   push esi
// 0093a2e6  57                   push edi
// 0093a2e7  8bf8                 mov edi, eax
// 0093a2e9  8b7730               mov esi, dword ptr [edi + 0x30]
// 0093a2ec  b903000000           mov ecx, 3
// 0093a2f1  004e32               add byte ptr [esi + 0x32], cl
// 0093a2f4  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 0093a2f8  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0093a2fb  2bc1                 sub eax, ecx
// 0093a2fd  83e901               sub ecx, 1
// 0093a300  0fb78446ac000000     movzx eax, word ptr [esi + eax*2 + 0xac]
// 0093a308  8d1440               lea edx, [eax + eax*2]
// 0093a30b  8b06                 mov eax, dword ptr [esi]
// 0093a30d  8b4018               mov eax, dword ptr [eax + 0x18]
// 0093a310  895c9004             mov dword ptr [eax + edx*4 + 4], ebx
// 0093a314  75de                 jne 0x93a2f4
// 0093a316  817f1003010000       cmp dword ptr [edi + 0x10], 0x103
// 0093a31d  7424                 je 0x93a343
// 0093a31f  6803010000           push 0x103
// 0093a324  57                   push edi
// 0093a325  e8e6cdffff           call 0x937110
// 0093a32a  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0093a32d  50                   push eax
// 0093a32e  682cfbbf00           push 0xbffb2c
// 0093a333  51                   push ecx
// 0093a334  e8075ef1ff           call 0x850140
// 0093a339  50                   push eax
// 0093a33a  57                   push edi
// 0093a33b  e8d0ceffff           call 0x937210
// 0093a340  83c41c               add esp, 0x1c
// 0093a343  57                   push edi
// 0093a344  e877e0ffff           call 0x9383c0
// 0093a349  33db                 xor ebx, ebx
// 0093a34b  83c404               add esp, 4
// 0093a34e  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 0093a352  7417                 je 0x93a36b
// 0093a354  8b542420             mov edx, dword ptr [esp + 0x20]
// 0093a358  68feff0100           push 0x1fffe
// 0093a35d  52                   push edx
// 0093a35e  6a20                 push 0x20
// 0093a360  56                   push esi
// 0093a361  e81ad40200           call 0x967780
// 0093a366  83c410               add esp, 0x10
// 0093a369  eb09                 jmp 0x93a374
// 0093a36b  56                   push esi
// 0093a36c  e86fd50200           call 0x9678e0
// 0093a371  83c404               add esp, 4
// 0093a374  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0093a37c  885c241a             mov byte ptr [esp + 0x1a], bl
// 0093a380  8be8                 mov ebp, eax
// 0093a382  8a4632               mov al, byte ptr [esi + 0x32]
// 0093a385  88442418             mov byte ptr [esp + 0x18], al
// 0093a389  885c2419             mov byte ptr [esp + 0x19], bl
// 0093a38d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0093a390  8d542410             lea edx, [esp + 0x10]
// 0093a394  894c2410             mov dword ptr [esp + 0x10], ecx
// 0093a398  895614               mov dword ptr [esi + 0x14], edx
// 0093a39b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0093a39f  8bc7                 mov eax, edi
// 0093a3a1  e86ae2ffff           call 0x938610
// 0093a3a6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0093a3aa  50                   push eax
// 0093a3ab  56                   push esi
// 0093a3ac  e8cfce0200           call 0x967280
// 0093a3b1  83c408               add esp, 8
// 0093a3b4  8bc7                 mov eax, edi
// 0093a3b6  e8f5f9ffff           call 0x939db0
// 0093a3bb  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0093a3be  8b0f                 mov ecx, dword ptr [edi]
// 0093a3c0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093a3c3  894e14               mov dword ptr [esi + 0x14], ecx
// 0093a3c6  0fb65708             movzx edx, byte ptr [edi + 8]
// 0093a3ca  e881e2ffff           call 0x938650
// 0093a3cf  385f09               cmp byte ptr [edi + 9], bl
// 0093a3d2  7412                 je 0x93a3e6
// 0093a3d4  0fb65708             movzx edx, byte ptr [edi + 8]
// 0093a3d8  53                   push ebx
// 0093a3d9  53                   push ebx
// 0093a3da  52                   push edx
// 0093a3db  6a23                 push 0x23
// 0093a3dd  56                   push esi
// 0093a3de  e86dd30200           call 0x967750
// 0093a3e3  83c414               add esp, 0x14
// 0093a3e6  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 0093a3ea  894624               mov dword ptr [esi + 0x24], eax
// 0093a3ed  8b4f04               mov ecx, dword ptr [edi + 4]
// 0093a3f0  51                   push ecx
// 0093a3f1  56                   push esi
// 0093a3f2  e8b9d50200           call 0x9679b0
// 0093a3f7  55                   push ebp
// 0093a3f8  56                   push esi
// 0093a3f9  e8b2d50200           call 0x9679b0
// 0093a3fe  83c410               add esp, 0x10
// 0093a401  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 0093a405  7417                 je 0x93a41e
// 0093a407  8b542420             mov edx, dword ptr [esp + 0x20]
// 0093a40b  68feff0100           push 0x1fffe
// 0093a410  52                   push edx
// 0093a411  6a1f                 push 0x1f
// 0093a413  56                   push esi
// 0093a414  e867d30200           call 0x967780
// 0093a419  83c410               add esp, 0x10
// 0093a41c  eb16                 jmp 0x93a434
// 0093a41e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0093a422  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0093a426  50                   push eax
// 0093a427  53                   push ebx
// 0093a428  51                   push ecx
// 0093a429  6a21                 push 0x21
// 0093a42b  56                   push esi
// 0093a42c  e81fd30200           call 0x967750
// 0093a431  83c414               add esp, 0x14
// 0093a434  8b542424             mov edx, dword ptr [esp + 0x24]
// 0093a438  52                   push edx
// 0093a439  56                   push esi
// 0093a43a  8bf8                 mov edi, eax
// 0093a43c  e84fd20200           call 0x967690
// 0093a441  83c408               add esp, 8
// 0093a444  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 0093a448  7416                 je 0x93a460
// 0093a44a  45                   inc ebp
// 0093a44b  8bc7                 mov eax, edi
// 0093a44d  55                   push ebp
// 0093a44e  50                   push eax
// 0093a44f  56                   push esi
// 0093a450  e81be50200           call 0x968970
// 0093a455  83c40c               add esp, 0xc
// 0093a458  5f                   pop edi
// 0093a459  5e                   pop esi
// 0093a45a  5d                   pop ebp
// 0093a45b  5b                   pop ebx
// 0093a45c  83c40c               add esp, 0xc
// 0093a45f  c3                   ret 
// 0093a460  56                   push esi
// 0093a461  e87ad40200           call 0x9678e0
// 0093a466  83c404               add esp, 4
// 0093a469  45                   inc ebp
// 0093a46a  55                   push ebp
// 0093a46b  50                   push eax
// 0093a46c  56                   push esi
// 0093a46d  e8fee40200           call 0x968970
// 0093a472  83c40c               add esp, 0xc
// 0093a475  5f                   pop edi
// 0093a476  5e                   pop esi
// 0093a477  5d                   pop ebp
// 0093a478  5b                   pop ebx
// 0093a479  83c40c               add esp, 0xc
// 0093a47c  c3                   ret 
// library lua-5.1.4/lparser.c (function _forbody)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
