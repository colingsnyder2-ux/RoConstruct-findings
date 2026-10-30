// roc 2009-12 0079df30  unit: seg_00790000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079df30
//
// 0079df30  83ec08               sub esp, 8
// 0079df33  55                   push ebp
// 0079df34  56                   push esi
// 0079df35  8bf0                 mov esi, eax
// 0079df37  8b4e08               mov ecx, dword ptr [esi + 8]
// 0079df3a  57                   push edi
// 0079df3b  8d44240c             lea eax, [esp + 0xc]
// 0079df3f  50                   push eax
// 0079df40  6a03                 push 3
// 0079df42  51                   push ecx
// 0079df43  e858acfeff           call 0x788ba0
// 0079df48  33ed                 xor ebp, ebp
// 0079df4a  83c40c               add esp, 0xc
// 0079df4d  8bf8                 mov edi, eax
// 0079df4f  897c2410             mov dword ptr [esp + 0x10], edi
// 0079df53  396c240c             cmp dword ptr [esp + 0xc], ebp
// 0079df57  0f86a2000000         jbe 0x79dfff
// 0079df5d  8d4900               lea ecx, [ecx]
// 0079df60  803c2f25             cmp byte ptr [edi + ebp], 0x25
// 0079df64  741e                 je 0x79df84
// 0079df66  8d930c020000         lea edx, [ebx + 0x20c]
// 0079df6c  3913                 cmp dword ptr [ebx], edx
// 0079df6e  7209                 jb 0x79df79
// 0079df70  53                   push ebx
// 0079df71  e85ac0feff           call 0x789fd0
// 0079df76  83c404               add esp, 4
// 0079df79  8b03                 mov eax, dword ptr [ebx]
// 0079df7b  8a0c2f               mov cl, byte ptr [edi + ebp]
// 0079df7e  8808                 mov byte ptr [eax], cl
// 0079df80  ff03                 inc dword ptr [ebx]
// 0079df82  eb70                 jmp 0x79dff4
// 0079df84  0fb6542f01           movzx edx, byte ptr [edi + ebp + 1]
// 0079df89  45                   inc ebp
// 0079df8a  52                   push edx
// 0079df8b  ff15dcb89800         call dword ptr [0x98b8dc]
// 0079df91  83c404               add esp, 4
// 0079df94  85c0                 test eax, eax
// 0079df96  751e                 jne 0x79dfb6
// 0079df98  8d830c020000         lea eax, [ebx + 0x20c]
// 0079df9e  3903                 cmp dword ptr [ebx], eax
// 0079dfa0  7209                 jb 0x79dfab
// 0079dfa2  53                   push ebx
// 0079dfa3  e828c0feff           call 0x789fd0
// 0079dfa8  83c404               add esp, 4
// 0079dfab  8b0b                 mov ecx, dword ptr [ebx]
// 0079dfad  8a142f               mov dl, byte ptr [edi + ebp]
// 0079dfb0  8811                 mov byte ptr [ecx], dl
// 0079dfb2  ff03                 inc dword ptr [ebx]
// 0079dfb4  eb3e                 jmp 0x79dff4
// 0079dfb6  8a042f               mov al, byte ptr [edi + ebp]
// 0079dfb9  3c30                 cmp al, 0x30
// 0079dfbb  7517                 jne 0x79dfd4
// 0079dfbd  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079dfc1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079dfc5  2bc8                 sub ecx, eax
// 0079dfc7  51                   push ecx
// 0079dfc8  50                   push eax
// 0079dfc9  53                   push ebx
// 0079dfca  e841c0feff           call 0x78a010
// 0079dfcf  83c40c               add esp, 0xc
// 0079dfd2  eb20                 jmp 0x79dff4
// 0079dfd4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079dfd8  0fbef8               movsx edi, al
// 0079dfdb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079dfdf  83ef31               sub edi, 0x31
// 0079dfe2  e8d9faffff           call 0x79dac0
// 0079dfe7  53                   push ebx
// 0079dfe8  e8c3c0feff           call 0x78a0b0
// 0079dfed  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079dff1  83c404               add esp, 4
// 0079dff4  45                   inc ebp
// 0079dff5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0079dff9  0f8261ffffff         jb 0x79df60
// 0079dfff  5f                   pop edi
// 0079e000  5e                   pop esi
// 0079e001  5d                   pop ebp
// 0079e002  83c408               add esp, 8
// 0079e005  c3                   ret 
// copied from an identical function in another client (function _add_s)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c