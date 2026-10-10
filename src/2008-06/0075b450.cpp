// roc 2008-06 0075b450  unit: CXTPDockingPaneMiniWnd  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b450
//
// 0075b450  8b442408             mov eax, dword ptr [esp + 8]
// 0075b454  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075b458  55                   push ebp
// 0075b459  56                   push esi
// 0075b45a  8bf1                 mov esi, ecx
// 0075b45c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075b460  898614010000         mov dword ptr [esi + 0x114], eax
// 0075b466  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0075b46a  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0075b470  57                   push edi
// 0075b471  89961c010000         mov dword ptr [esi + 0x11c], edx
// 0075b477  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 0075b47d  8dbef8000000         lea edi, [esi + 0xf8]
// 0075b483  898620010000         mov dword ptr [esi + 0x120], eax
// 0075b489  8b4258               mov eax, dword ptr [edx + 0x58]
// 0075b48c  8bcf                 mov ecx, edi
// 0075b48e  ffd0                 call eax
// 0075b490  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0075b494  837d1800             cmp dword ptr [ebp + 0x18], 0
// 0075b498  7540                 jne 0x75b4da
// 0075b49a  53                   push ebx
// 0075b49b  8bcf                 mov ecx, edi
// 0075b49d  e8fe1f0000           call 0x75d4a0
// 0075b4a2  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0075b4a8  8b10                 mov edx, dword ptr [eax]
// 0075b4aa  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0075b4b0  51                   push ecx
// 0075b4b1  6a01                 push 1
// 0075b4b3  8bc8                 mov ecx, eax
// 0075b4b5  ffd2                 call edx
// 0075b4b7  85c0                 test eax, eax
// 0075b4b9  7405                 je 0x75b4c0
// 0075b4bb  8d58ac               lea ebx, [eax - 0x54]
// 0075b4be  eb02                 jmp 0x75b4c2
// 0075b4c0  33db                 xor ebx, ebx
// 0075b4c2  56                   push esi
// 0075b4c3  83c5e0               add ebp, -0x20
// 0075b4c6  55                   push ebp
// 0075b4c7  8bcb                 mov ecx, ebx
// 0075b4c9  e812500000           call 0x7604e0
// 0075b4ce  85db                 test ebx, ebx
// 0075b4d0  7405                 je 0x75b4d7
// 0075b4d2  8d6b54               lea ebp, [ebx + 0x54]
// 0075b4d5  eb02                 jmp 0x75b4d9
// 0075b4d7  33ed                 xor ebp, ebp
// 0075b4d9  5b                   pop ebx
// 0075b4da  8bcf                 mov ecx, edi
// 0075b4dc  e8bf1f0000           call 0x75d4a0
// 0075b4e1  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0075b4e7  8b10                 mov edx, dword ptr [eax]
// 0075b4e9  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0075b4ef  51                   push ecx
// 0075b4f0  6a02                 push 2
// 0075b4f2  8bc8                 mov ecx, eax
// 0075b4f4  ffd2                 call edx
// 0075b4f6  85c0                 test eax, eax
// 0075b4f8  7405                 je 0x75b4ff
// 0075b4fa  8d48e0               lea ecx, [eax - 0x20]
// 0075b4fd  eb02                 jmp 0x75b501
// 0075b4ff  33c9                 xor ecx, ecx
// 0075b501  56                   push esi
// 0075b502  6a01                 push 1
// 0075b504  55                   push ebp
// 0075b505  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0075b50b  e8b06d0000           call 0x7622c0
// 0075b510  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0075b516  6a00                 push 0
// 0075b518  6a00                 push 0
// 0075b51a  897830               mov dword ptr [eax + 0x30], edi
// 0075b51d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075b520  6863030000           push 0x363
// 0075b525  51                   push ecx
// 0075b526  c7865401000001000000 mov dword ptr [esi + 0x154], 1
// 0075b530  ff150c2e8000         call dword ptr [0x802e0c]
// 0075b536  8b17                 mov edx, dword ptr [edi]
// 0075b538  8b4228               mov eax, dword ptr [edx + 0x28]
// 0075b53b  838ee40000000c       or dword ptr [esi + 0xe4], 0xc
// 0075b542  8bcf                 mov ecx, edi
// 0075b544  ffd0                 call eax
// 0075b546  5f                   pop edi
// 0075b547  5e                   pop esi
// 0075b548  5d                   pop ebp
// 0075b549  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Init@CXTPDockingPaneMiniWnd@@IAEXPAVCXTPDockingPaneBase@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
