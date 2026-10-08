// roc 2009-06 00731d50  unit: CXTPCommandBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731d50
//
// 00731d50  8b442404             mov eax, dword ptr [esp + 4]
// 00731d54  83ec0c               sub esp, 0xc
// 00731d57  57                   push edi
// 00731d58  6a00                 push 0
// 00731d5a  6880000000           push 0x80
// 00731d5f  6a03                 push 3
// 00731d61  6a00                 push 0
// 00731d63  6a00                 push 0
// 00731d65  6800000080           push 0x80000000
// 00731d6a  50                   push eax
// 00731d6b  ff1538e28900         call dword ptr [0x89e238]
// 00731d71  8bf8                 mov edi, eax
// 00731d73  83ffff               cmp edi, -1
// 00731d76  0f849d000000         je 0x731e19
// 00731d7c  6a00                 push 0
// 00731d7e  8d4c2410             lea ecx, [esp + 0x10]
// 00731d82  51                   push ecx
// 00731d83  6a04                 push 4
// 00731d85  8d542414             lea edx, [esp + 0x14]
// 00731d89  52                   push edx
// 00731d8a  57                   push edi
// 00731d8b  c644241889           mov byte ptr [esp + 0x18], 0x89
// 00731d90  c644241950           mov byte ptr [esp + 0x19], 0x50
// 00731d95  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 00731d9a  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 00731d9f  ff1554e38900         call dword ptr [0x89e354]
// 00731da5  85c0                 test eax, eax
// 00731da7  7469                 je 0x731e12
// 00731da9  837c240c04           cmp dword ptr [esp + 0xc], 4
// 00731dae  7562                 jne 0x731e12
// 00731db0  8b442408             mov eax, dword ptr [esp + 8]
// 00731db4  56                   push esi
// 00731db5  3b442408             cmp eax, dword ptr [esp + 8]
// 00731db9  7427                 je 0x731de2
// 00731dbb  0fb6f0               movzx esi, al
// 00731dbe  81ee89000000         sub esi, 0x89
// 00731dc4  7532                 jne 0x731df8
// 00731dc6  0fb6f4               movzx esi, ah
// 00731dc9  83ee50               sub esi, 0x50
// 00731dcc  752a                 jne 0x731df8
// 00731dce  0fb674240e           movzx esi, byte ptr [esp + 0xe]
// 00731dd3  83ee4e               sub esi, 0x4e
// 00731dd6  7520                 jne 0x731df8
// 00731dd8  0fb674240f           movzx esi, byte ptr [esp + 0xf]
// 00731ddd  83ee47               sub esi, 0x47
// 00731de0  7516                 jne 0x731df8
// 00731de2  57                   push edi
// 00731de3  33f6                 xor esi, esi
// 00731de5  ff1588e38900         call dword ptr [0x89e388]
// 00731deb  33c0                 xor eax, eax
// 00731ded  85f6                 test esi, esi
// 00731def  5e                   pop esi
// 00731df0  0f94c0               sete al
// 00731df3  5f                   pop edi
// 00731df4  83c40c               add esp, 0xc
// 00731df7  c3                   ret 
// 00731df8  c1fe1f               sar esi, 0x1f
// 00731dfb  57                   push edi
// 00731dfc  83ce01               or esi, 1
// 00731dff  ff1588e38900         call dword ptr [0x89e388]
// 00731e05  33c0                 xor eax, eax
// 00731e07  85f6                 test esi, esi
// 00731e09  5e                   pop esi
// 00731e0a  0f94c0               sete al
// 00731e0d  5f                   pop edi
// 00731e0e  83c40c               add esp, 0xc
// 00731e11  c3                   ret 
// 00731e12  57                   push edi
// 00731e13  ff1588e38900         call dword ptr [0x89e388]
// 00731e19  33c0                 xor eax, eax
// 00731e1b  5f                   pop edi
// 00731e1c  83c40c               add esp, 0xc
// 00731e1f  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
