// roc 2009-06 006faf00  unit: RBX::GroupDragTool  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006faf00
//
// 006faf00  55                   push ebp
// 006faf01  57                   push edi
// 006faf02  53                   push ebx
// 006faf03  56                   push esi
// 006faf04  8bf8                 mov edi, eax
// 006faf06  e8c5f9ffff           call 0x6fa8d0
// 006faf0b  57                   push edi
// 006faf0c  56                   push esi
// 006faf0d  8be8                 mov ebp, eax
// 006faf0f  e8bcf9ffff           call 0x6fa8d0
// 006faf14  83c410               add esp, 0x10
// 006faf17  83caff               or edx, 0xffffffff
// 006faf1a  833f0c               cmp dword ptr [edi], 0xc
// 006faf1d  7516                 jne 0x6faf35
// 006faf1f  8b7f08               mov edi, dword ptr [edi + 8]
// 006faf22  f7c700010000         test edi, 0x100
// 006faf28  750b                 jne 0x6faf35
// 006faf2a  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006faf2e  3bf9                 cmp edi, ecx
// 006faf30  7c03                 jl 0x6faf35
// 006faf32  015624               add dword ptr [esi + 0x24], edx
// 006faf35  833b0c               cmp dword ptr [ebx], 0xc
// 006faf38  7516                 jne 0x6faf50
// 006faf3a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006faf3d  f7c100010000         test ecx, 0x100
// 006faf43  750b                 jne 0x6faf50
// 006faf45  0fb67e32             movzx edi, byte ptr [esi + 0x32]
// 006faf49  3bcf                 cmp ecx, edi
// 006faf4b  7c03                 jl 0x6faf50
// 006faf4d  015624               add dword ptr [esi + 0x24], edx
// 006faf50  837c241000           cmp dword ptr [esp + 0x10], 0
// 006faf55  7515                 jne 0x6faf6c
// 006faf57  837c240c17           cmp dword ptr [esp + 0xc], 0x17
// 006faf5c  740e                 je 0x6faf6c
// 006faf5e  8bcd                 mov ecx, ebp
// 006faf60  8be8                 mov ebp, eax
// 006faf62  8bc1                 mov eax, ecx
// 006faf64  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006faf6c  8b542410             mov edx, dword ptr [esp + 0x10]
// 006faf70  50                   push eax
// 006faf71  8b442410             mov eax, dword ptr [esp + 0x10]
// 006faf75  52                   push edx
// 006faf76  50                   push eax
// 006faf77  8bc5                 mov eax, ebp
// 006faf79  8bce                 mov ecx, esi
// 006faf7b  e850f4ffff           call 0x6fa3d0
// 006faf80  83c40c               add esp, 0xc
// 006faf83  5f                   pop edi
// 006faf84  894308               mov dword ptr [ebx + 8], eax
// 006faf87  c7030a000000         mov dword ptr [ebx], 0xa
// 006faf8d  5d                   pop ebp
// 006faf8e  c3                   ret 
// library lua-5.1.4/lcode.c (function _codecomp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
