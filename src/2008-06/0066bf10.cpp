// from server: 100% by auto
// roc 2008-06 0066bf10  unit: RBX::GroupDragTool  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066bf10
//
// 0066bf10  55                   push ebp
// 0066bf11  57                   push edi
// 0066bf12  53                   push ebx
// 0066bf13  56                   push esi
// 0066bf14  8bf8                 mov edi, eax
// 0066bf16  e805faffff           call 0x66b920
// 0066bf1b  57                   push edi
// 0066bf1c  56                   push esi
// 0066bf1d  8be8                 mov ebp, eax
// 0066bf1f  e8fcf9ffff           call 0x66b920
// 0066bf24  83c410               add esp, 0x10
// 0066bf27  83caff               or edx, 0xffffffff
// 0066bf2a  833f0c               cmp dword ptr [edi], 0xc
// 0066bf2d  7516                 jne 0x66bf45
// 0066bf2f  8b7f08               mov edi, dword ptr [edi + 8]
// 0066bf32  f7c700010000         test edi, 0x100
// 0066bf38  750b                 jne 0x66bf45
// 0066bf3a  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0066bf3e  3bf9                 cmp edi, ecx
// 0066bf40  7c03                 jl 0x66bf45
// 0066bf42  015624               add dword ptr [esi + 0x24], edx
// 0066bf45  833b0c               cmp dword ptr [ebx], 0xc
// 0066bf48  7516                 jne 0x66bf60
// 0066bf4a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0066bf4d  f7c100010000         test ecx, 0x100
// 0066bf53  750b                 jne 0x66bf60
// 0066bf55  0fb67e32             movzx edi, byte ptr [esi + 0x32]
// 0066bf59  3bcf                 cmp ecx, edi
// 0066bf5b  7c03                 jl 0x66bf60
// 0066bf5d  015624               add dword ptr [esi + 0x24], edx
// 0066bf60  837c241000           cmp dword ptr [esp + 0x10], 0
// 0066bf65  7515                 jne 0x66bf7c
// 0066bf67  837c240c17           cmp dword ptr [esp + 0xc], 0x17
// 0066bf6c  740e                 je 0x66bf7c
// 0066bf6e  8bcd                 mov ecx, ebp
// 0066bf70  8be8                 mov ebp, eax
// 0066bf72  8bc1                 mov eax, ecx
// 0066bf74  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0066bf7c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066bf80  50                   push eax
// 0066bf81  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066bf85  52                   push edx
// 0066bf86  50                   push eax
// 0066bf87  8bc5                 mov eax, ebp
// 0066bf89  8bce                 mov ecx, esi
// 0066bf8b  e890f4ffff           call 0x66b420
// 0066bf90  83c40c               add esp, 0xc
// 0066bf93  5f                   pop edi
// 0066bf94  894308               mov dword ptr [ebx + 8], eax
// 0066bf97  c7030a000000         mov dword ptr [ebx], 0xa
// 0066bf9d  5d                   pop ebp
// 0066bf9e  c3                   ret 
// library lua-5.1.4/lcode.c (function _codecomp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
