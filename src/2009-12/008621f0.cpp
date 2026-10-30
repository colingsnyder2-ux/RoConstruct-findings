// roc 2009-12 008621f0  unit: CXTPPropertyGridToolTip  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008621f0
//
// 008621f0  83ec18               sub esp, 0x18
// 008621f3  55                   push ebp
// 008621f4  56                   push esi
// 008621f5  8b3530cc9800         mov esi, dword ptr [0x98cc30]
// 008621fb  6a01                 push 1
// 008621fd  8be9                 mov ebp, ecx
// 008621ff  ffd6                 call esi
// 00862201  6685c0               test ax, ax
// 00862204  0f8cf1000000         jl 0x8622fb
// 0086220a  6a02                 push 2
// 0086220c  ffd6                 call esi
// 0086220e  6685c0               test ax, ax
// 00862211  0f8ce4000000         jl 0x8622fb
// 00862217  6a04                 push 4
// 00862219  ffd6                 call esi
// 0086221b  6685c0               test ax, ax
// 0086221e  0f8cd7000000         jl 0x8622fb
// 00862224  53                   push ebx
// 00862225  57                   push edi
// 00862226  8d442410             lea eax, [esp + 0x10]
// 0086222a  50                   push eax
// 0086222b  ff1538cc9800         call dword ptr [0x98cc38]
// 00862231  33ff                 xor edi, edi
// 00862233  397d5c               cmp dword ptr [ebp + 0x5c], edi
// 00862236  0f8ea6000000         jle 0x8622e2
// 0086223c  8b1d84cc9800         mov ebx, dword ptr [0x98cc84]
// 00862242  85ff                 test edi, edi
// 00862244  0f8cac000000         jl 0x8622f6
// 0086224a  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0086224d  0f8da3000000         jge 0x8622f6
// 00862253  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00862256  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00862259  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086225c  52                   push edx
// 0086225d  ffd3                 call ebx
// 0086225f  85c0                 test eax, eax
// 00862261  7475                 je 0x8622d8
// 00862263  8b4620               mov eax, dword ptr [esi + 0x20]
// 00862266  50                   push eax
// 00862267  e8be18f9ff           call 0x7f3b2a
// 0086226c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0086226f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00862273  8b5610               mov edx, dword ptr [esi + 0x10]
// 00862276  8954241c             mov dword ptr [esp + 0x1c], edx
// 0086227a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0086227d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00862281  8b5618               mov edx, dword ptr [esi + 0x18]
// 00862284  89542424             mov dword ptr [esp + 0x24], edx
// 00862288  f6460801             test byte ptr [esi + 8], 1
// 0086228c  8d4c2418             lea ecx, [esp + 0x18]
// 00862290  51                   push ecx
// 00862291  740c                 je 0x86229f
// 00862293  8b5020               mov edx, dword ptr [eax + 0x20]
// 00862296  52                   push edx
// 00862297  ff1570cc9800         call dword ptr [0x98cc70]
// 0086229d  eb07                 jmp 0x8622a6
// 0086229f  8bc8                 mov ecx, eax
// 008622a1  e8541bf9ff           call 0x7f3dfa
// 008622a6  8b542414             mov edx, dword ptr [esp + 0x14]
// 008622aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 008622ae  52                   push edx
// 008622af  50                   push eax
// 008622b0  8d4c2420             lea ecx, [esp + 0x20]
// 008622b4  51                   push ecx
// 008622b5  ff155cca9800         call dword ptr [0x98ca5c]
// 008622bb  85c0                 test eax, eax
// 008622bd  7419                 je 0x8622d8
// 008622bf  f6460801             test byte ptr [esi + 8], 1
// 008622c3  7527                 jne 0x8622ec
// 008622c5  8d542410             lea edx, [esp + 0x10]
// 008622c9  52                   push edx
// 008622ca  6a00                 push 0
// 008622cc  8bcd                 mov ecx, ebp
// 008622ce  e8edd9ffff           call 0x85fcc0
// 008622d3  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008622d6  7414                 je 0x8622ec
// 008622d8  47                   inc edi
// 008622d9  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 008622dc  0f8c60ffffff         jl 0x862242
// 008622e2  5f                   pop edi
// 008622e3  5b                   pop ebx
// 008622e4  5e                   pop esi
// 008622e5  33c0                 xor eax, eax
// 008622e7  5d                   pop ebp
// 008622e8  83c418               add esp, 0x18
// 008622eb  c3                   ret 
// 008622ec  5f                   pop edi
// 008622ed  5b                   pop ebx
// 008622ee  8bc6                 mov eax, esi
// 008622f0  5e                   pop esi
// 008622f1  5d                   pop ebp
// 008622f2  83c418               add esp, 0x18
// 008622f5  c3                   ret 
// 008622f6  e81118f9ff           call 0x7f3b0c
// 008622fb  5e                   pop esi
// 008622fc  33c0                 xor eax, eax
// 008622fe  5d                   pop ebp
// 008622ff  83c418               add esp, 0x18
// 00862302  c3                   ret 
// copied from an identical function in another client (function ?FindTool@CXTPToolTipContextToolTip@@IAEPAUTOOLITEM@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp