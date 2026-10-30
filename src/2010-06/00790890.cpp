// from server: 100% by auto
// roc 2010-06 00790890  unit: RBX::GroupDragTool  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790890
//
// 00790890  55                   push ebp
// 00790891  57                   push edi
// 00790892  53                   push ebx
// 00790893  56                   push esi
// 00790894  8bf8                 mov edi, eax
// 00790896  e8c5f9ffff           call 0x790260
// 0079089b  57                   push edi
// 0079089c  56                   push esi
// 0079089d  8be8                 mov ebp, eax
// 0079089f  e8bcf9ffff           call 0x790260
// 007908a4  83c410               add esp, 0x10
// 007908a7  83caff               or edx, 0xffffffff
// 007908aa  833f0c               cmp dword ptr [edi], 0xc
// 007908ad  7516                 jne 0x7908c5
// 007908af  8b7f08               mov edi, dword ptr [edi + 8]
// 007908b2  f7c700010000         test edi, 0x100
// 007908b8  750b                 jne 0x7908c5
// 007908ba  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007908be  3bf9                 cmp edi, ecx
// 007908c0  7c03                 jl 0x7908c5
// 007908c2  015624               add dword ptr [esi + 0x24], edx
// 007908c5  833b0c               cmp dword ptr [ebx], 0xc
// 007908c8  7516                 jne 0x7908e0
// 007908ca  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007908cd  f7c100010000         test ecx, 0x100
// 007908d3  750b                 jne 0x7908e0
// 007908d5  0fb67e32             movzx edi, byte ptr [esi + 0x32]
// 007908d9  3bcf                 cmp ecx, edi
// 007908db  7c03                 jl 0x7908e0
// 007908dd  015624               add dword ptr [esi + 0x24], edx
// 007908e0  837c241000           cmp dword ptr [esp + 0x10], 0
// 007908e5  7515                 jne 0x7908fc
// 007908e7  837c240c17           cmp dword ptr [esp + 0xc], 0x17
// 007908ec  740e                 je 0x7908fc
// 007908ee  8bcd                 mov ecx, ebp
// 007908f0  8be8                 mov ebp, eax
// 007908f2  8bc1                 mov eax, ecx
// 007908f4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007908fc  8b542410             mov edx, dword ptr [esp + 0x10]
// 00790900  50                   push eax
// 00790901  8b442410             mov eax, dword ptr [esp + 0x10]
// 00790905  52                   push edx
// 00790906  50                   push eax
// 00790907  8bc5                 mov eax, ebp
// 00790909  8bce                 mov ecx, esi
// 0079090b  e850f4ffff           call 0x78fd60
// 00790910  83c40c               add esp, 0xc
// 00790913  5f                   pop edi
// 00790914  894308               mov dword ptr [ebx + 8], eax
// 00790917  c7030a000000         mov dword ptr [ebx], 0xa
// 0079091d  5d                   pop ebp
// 0079091e  c3                   ret 
// library lua-5.1.4/lcode.c (function _codecomp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
