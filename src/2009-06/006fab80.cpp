// from server: 100% by auto
// roc 2009-06 006fab80  unit: RBX::GroupDragTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fab80
//
// 006fab80  833f0b               cmp dword ptr [edi], 0xb
// 006fab83  7533                 jne 0x6fabb8
// 006fab85  8b0e                 mov ecx, dword ptr [esi]
// 006fab87  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006fab8a  8b4708               mov eax, dword ptr [edi + 8]
// 006fab8d  8b0482               mov eax, dword ptr [edx + eax*4]
// 006fab90  8bc8                 mov ecx, eax
// 006fab92  83e13f               and ecx, 0x3f
// 006fab95  80f913               cmp cl, 0x13
// 006fab98  751e                 jne 0x6fabb8
// 006fab9a  ff4e18               dec dword ptr [esi + 0x18]
// 006fab9d  33d2                 xor edx, edx
// 006fab9f  85db                 test ebx, ebx
// 006faba1  0f94c2               sete dl
// 006faba4  c1e817               shr eax, 0x17
// 006faba7  8bce                 mov ecx, esi
// 006faba9  52                   push edx
// 006fabaa  50                   push eax
// 006fabab  6a1a                 push 0x1a
// 006fabad  33c0                 xor eax, eax
// 006fabaf  e81cf8ffff           call 0x6fa3d0
// 006fabb4  83c40c               add esp, 0xc
// 006fabb7  c3                   ret 
// 006fabb8  57                   push edi
// 006fabb9  8bc6                 mov eax, esi
// 006fabbb  e8a0faffff           call 0x6fa660
// 006fabc0  83c404               add esp, 4
// 006fabc3  833f0c               cmp dword ptr [edi], 0xc
// 006fabc6  7515                 jne 0x6fabdd
// 006fabc8  8b4708               mov eax, dword ptr [edi + 8]
// 006fabcb  a900010000           test eax, 0x100
// 006fabd0  750b                 jne 0x6fabdd
// 006fabd2  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006fabd6  3bc1                 cmp eax, ecx
// 006fabd8  7c03                 jl 0x6fabdd
// 006fabda  ff4e24               dec dword ptr [esi + 0x24]
// 006fabdd  8b4708               mov eax, dword ptr [edi + 8]
// 006fabe0  53                   push ebx
// 006fabe1  68ff000000           push 0xff
// 006fabe6  6a1b                 push 0x1b
// 006fabe8  8bce                 mov ecx, esi
// 006fabea  e8e1f7ffff           call 0x6fa3d0
// 006fabef  83c40c               add esp, 0xc
// 006fabf2  c3                   ret 
// library lua-5.1.4/lcode.c (function _jumponcond)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
