// roc 2010-06 00790510  unit: RBX::GroupDragTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790510
//
// 00790510  833f0b               cmp dword ptr [edi], 0xb
// 00790513  7533                 jne 0x790548
// 00790515  8b0e                 mov ecx, dword ptr [esi]
// 00790517  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0079051a  8b4708               mov eax, dword ptr [edi + 8]
// 0079051d  8b0482               mov eax, dword ptr [edx + eax*4]
// 00790520  8bc8                 mov ecx, eax
// 00790522  83e13f               and ecx, 0x3f
// 00790525  80f913               cmp cl, 0x13
// 00790528  751e                 jne 0x790548
// 0079052a  ff4e18               dec dword ptr [esi + 0x18]
// 0079052d  33d2                 xor edx, edx
// 0079052f  85db                 test ebx, ebx
// 00790531  0f94c2               sete dl
// 00790534  c1e817               shr eax, 0x17
// 00790537  8bce                 mov ecx, esi
// 00790539  52                   push edx
// 0079053a  50                   push eax
// 0079053b  6a1a                 push 0x1a
// 0079053d  33c0                 xor eax, eax
// 0079053f  e81cf8ffff           call 0x78fd60
// 00790544  83c40c               add esp, 0xc
// 00790547  c3                   ret 
// 00790548  57                   push edi
// 00790549  8bc6                 mov eax, esi
// 0079054b  e8a0faffff           call 0x78fff0
// 00790550  83c404               add esp, 4
// 00790553  833f0c               cmp dword ptr [edi], 0xc
// 00790556  7515                 jne 0x79056d
// 00790558  8b4708               mov eax, dword ptr [edi + 8]
// 0079055b  a900010000           test eax, 0x100
// 00790560  750b                 jne 0x79056d
// 00790562  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00790566  3bc1                 cmp eax, ecx
// 00790568  7c03                 jl 0x79056d
// 0079056a  ff4e24               dec dword ptr [esi + 0x24]
// 0079056d  8b4708               mov eax, dword ptr [edi + 8]
// 00790570  53                   push ebx
// 00790571  68ff000000           push 0xff
// 00790576  6a1b                 push 0x1b
// 00790578  8bce                 mov ecx, esi
// 0079057a  e8e1f7ffff           call 0x78fd60
// 0079057f  83c40c               add esp, 0xc
// 00790582  c3                   ret 
// library lua-5.1.4/lcode.c (function _jumponcond)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
