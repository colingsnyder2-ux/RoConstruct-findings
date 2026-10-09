// roc 2009-12 00808ed0  unit: CXTPCommandBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808ed0
//
// 00808ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00808ed4  83ec0c               sub esp, 0xc
// 00808ed7  57                   push edi
// 00808ed8  6a00                 push 0
// 00808eda  6880000000           push 0x80
// 00808edf  6a03                 push 3
// 00808ee1  6a00                 push 0
// 00808ee3  6a00                 push 0
// 00808ee5  6800000080           push 0x80000000
// 00808eea  50                   push eax
// 00808eeb  ff1574b29800         call dword ptr [0x98b274]
// 00808ef1  8bf8                 mov edi, eax
// 00808ef3  83ffff               cmp edi, -1
// 00808ef6  0f849d000000         je 0x808f99
// 00808efc  6a00                 push 0
// 00808efe  8d4c2410             lea ecx, [esp + 0x10]
// 00808f02  51                   push ecx
// 00808f03  6a04                 push 4
// 00808f05  8d542414             lea edx, [esp + 0x14]
// 00808f09  52                   push edx
// 00808f0a  57                   push edi
// 00808f0b  c644241889           mov byte ptr [esp + 0x18], 0x89
// 00808f10  c644241950           mov byte ptr [esp + 0x19], 0x50
// 00808f15  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 00808f1a  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 00808f1f  ff1518b39800         call dword ptr [0x98b318]
// 00808f25  85c0                 test eax, eax
// 00808f27  7469                 je 0x808f92
// 00808f29  837c240c04           cmp dword ptr [esp + 0xc], 4
// 00808f2e  7562                 jne 0x808f92
// 00808f30  8b442408             mov eax, dword ptr [esp + 8]
// 00808f34  56                   push esi
// 00808f35  3b442408             cmp eax, dword ptr [esp + 8]
// 00808f39  7427                 je 0x808f62
// 00808f3b  0fb6f0               movzx esi, al
// 00808f3e  81ee89000000         sub esi, 0x89
// 00808f44  7532                 jne 0x808f78
// 00808f46  0fb6f4               movzx esi, ah
// 00808f49  83ee50               sub esi, 0x50
// 00808f4c  752a                 jne 0x808f78
// 00808f4e  0fb674240e           movzx esi, byte ptr [esp + 0xe]
// 00808f53  83ee4e               sub esi, 0x4e
// 00808f56  7520                 jne 0x808f78
// 00808f58  0fb674240f           movzx esi, byte ptr [esp + 0xf]
// 00808f5d  83ee47               sub esi, 0x47
// 00808f60  7516                 jne 0x808f78
// 00808f62  57                   push edi
// 00808f63  33f6                 xor esi, esi
// 00808f65  ff155cb29800         call dword ptr [0x98b25c]
// 00808f6b  33c0                 xor eax, eax
// 00808f6d  85f6                 test esi, esi
// 00808f6f  5e                   pop esi
// 00808f70  0f94c0               sete al
// 00808f73  5f                   pop edi
// 00808f74  83c40c               add esp, 0xc
// 00808f77  c3                   ret 
// 00808f78  c1fe1f               sar esi, 0x1f
// 00808f7b  57                   push edi
// 00808f7c  83ce01               or esi, 1
// 00808f7f  ff155cb29800         call dword ptr [0x98b25c]
// 00808f85  33c0                 xor eax, eax
// 00808f87  85f6                 test esi, esi
// 00808f89  5e                   pop esi
// 00808f8a  0f94c0               sete al
// 00808f8d  5f                   pop edi
// 00808f8e  83c40c               add esp, 0xc
// 00808f91  c3                   ret 
// 00808f92  57                   push edi
// 00808f93  ff155cb29800         call dword ptr [0x98b25c]
// 00808f99  33c0                 xor eax, eax
// 00808f9b  5f                   pop edi
// 00808f9c  83c40c               add esp, 0xc
// 00808f9f  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
