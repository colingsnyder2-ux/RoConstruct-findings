// roc 2008-06 0066bbd0  unit: RBX::GroupDragTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066bbd0
//
// 0066bbd0  833f0b               cmp dword ptr [edi], 0xb
// 0066bbd3  7533                 jne 0x66bc08
// 0066bbd5  8b0e                 mov ecx, dword ptr [esi]
// 0066bbd7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0066bbda  8b4708               mov eax, dword ptr [edi + 8]
// 0066bbdd  8b0482               mov eax, dword ptr [edx + eax*4]
// 0066bbe0  8bc8                 mov ecx, eax
// 0066bbe2  83e13f               and ecx, 0x3f
// 0066bbe5  80f913               cmp cl, 0x13
// 0066bbe8  751e                 jne 0x66bc08
// 0066bbea  ff4e18               dec dword ptr [esi + 0x18]
// 0066bbed  33d2                 xor edx, edx
// 0066bbef  85db                 test ebx, ebx
// 0066bbf1  0f94c2               sete dl
// 0066bbf4  c1e817               shr eax, 0x17
// 0066bbf7  8bce                 mov ecx, esi
// 0066bbf9  52                   push edx
// 0066bbfa  50                   push eax
// 0066bbfb  6a1a                 push 0x1a
// 0066bbfd  33c0                 xor eax, eax
// 0066bbff  e81cf8ffff           call 0x66b420
// 0066bc04  83c40c               add esp, 0xc
// 0066bc07  c3                   ret 
// 0066bc08  57                   push edi
// 0066bc09  8bc6                 mov eax, esi
// 0066bc0b  e8a0faffff           call 0x66b6b0
// 0066bc10  83c404               add esp, 4
// 0066bc13  833f0c               cmp dword ptr [edi], 0xc
// 0066bc16  7515                 jne 0x66bc2d
// 0066bc18  8b4708               mov eax, dword ptr [edi + 8]
// 0066bc1b  a900010000           test eax, 0x100
// 0066bc20  750b                 jne 0x66bc2d
// 0066bc22  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0066bc26  3bc1                 cmp eax, ecx
// 0066bc28  7c03                 jl 0x66bc2d
// 0066bc2a  ff4e24               dec dword ptr [esi + 0x24]
// 0066bc2d  8b4708               mov eax, dword ptr [edi + 8]
// 0066bc30  53                   push ebx
// 0066bc31  68ff000000           push 0xff
// 0066bc36  6a1b                 push 0x1b
// 0066bc38  8bce                 mov ecx, esi
// 0066bc3a  e8e1f7ffff           call 0x66b420
// 0066bc3f  83c40c               add esp, 0xc
// 0066bc42  c3                   ret 
// library lua-5.1.4/lcode.c (function _jumponcond)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
