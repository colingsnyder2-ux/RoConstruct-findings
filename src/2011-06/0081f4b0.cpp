// roc 2011-06 0081f4b0  unit: CXTPCommandBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f4b0
//
// 0081f4b0  8b442404             mov eax, dword ptr [esp + 4]
// 0081f4b4  83ec0c               sub esp, 0xc
// 0081f4b7  57                   push edi
// 0081f4b8  6a00                 push 0
// 0081f4ba  6880000000           push 0x80
// 0081f4bf  6a03                 push 3
// 0081f4c1  6a00                 push 0
// 0081f4c3  6a00                 push 0
// 0081f4c5  6800000080           push 0x80000000
// 0081f4ca  50                   push eax
// 0081f4cb  ff15c801a400         call dword ptr [0xa401c8]
// 0081f4d1  8bf8                 mov edi, eax
// 0081f4d3  83ffff               cmp edi, -1
// 0081f4d6  0f849d000000         je 0x81f579
// 0081f4dc  6a00                 push 0
// 0081f4de  8d4c2410             lea ecx, [esp + 0x10]
// 0081f4e2  51                   push ecx
// 0081f4e3  6a04                 push 4
// 0081f4e5  8d542414             lea edx, [esp + 0x14]
// 0081f4e9  52                   push edx
// 0081f4ea  57                   push edi
// 0081f4eb  c644241889           mov byte ptr [esp + 0x18], 0x89
// 0081f4f0  c644241950           mov byte ptr [esp + 0x19], 0x50
// 0081f4f5  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 0081f4fa  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 0081f4ff  ff155402a400         call dword ptr [0xa40254]
// 0081f505  85c0                 test eax, eax
// 0081f507  7469                 je 0x81f572
// 0081f509  837c240c04           cmp dword ptr [esp + 0xc], 4
// 0081f50e  7562                 jne 0x81f572
// 0081f510  8b442408             mov eax, dword ptr [esp + 8]
// 0081f514  56                   push esi
// 0081f515  3b442408             cmp eax, dword ptr [esp + 8]
// 0081f519  7427                 je 0x81f542
// 0081f51b  0fb6f0               movzx esi, al
// 0081f51e  81ee89000000         sub esi, 0x89
// 0081f524  7532                 jne 0x81f558
// 0081f526  0fb6f4               movzx esi, ah
// 0081f529  83ee50               sub esi, 0x50
// 0081f52c  752a                 jne 0x81f558
// 0081f52e  0fb674240e           movzx esi, byte ptr [esp + 0xe]
// 0081f533  83ee4e               sub esi, 0x4e
// 0081f536  7520                 jne 0x81f558
// 0081f538  0fb674240f           movzx esi, byte ptr [esp + 0xf]
// 0081f53d  83ee47               sub esi, 0x47
// 0081f540  7516                 jne 0x81f558
// 0081f542  57                   push edi
// 0081f543  33f6                 xor esi, esi
// 0081f545  ff157c03a400         call dword ptr [0xa4037c]
// 0081f54b  33c0                 xor eax, eax
// 0081f54d  85f6                 test esi, esi
// 0081f54f  5e                   pop esi
// 0081f550  0f94c0               sete al
// 0081f553  5f                   pop edi
// 0081f554  83c40c               add esp, 0xc
// 0081f557  c3                   ret 
// 0081f558  c1fe1f               sar esi, 0x1f
// 0081f55b  57                   push edi
// 0081f55c  83ce01               or esi, 1
// 0081f55f  ff157c03a400         call dword ptr [0xa4037c]
// 0081f565  33c0                 xor eax, eax
// 0081f567  85f6                 test esi, esi
// 0081f569  5e                   pop esi
// 0081f56a  0f94c0               sete al
// 0081f56d  5f                   pop edi
// 0081f56e  83c40c               add esp, 0xc
// 0081f571  c3                   ret 
// 0081f572  57                   push edi
// 0081f573  ff157c03a400         call dword ptr [0xa4037c]
// 0081f579  33c0                 xor eax, eax
// 0081f57b  5f                   pop edi
// 0081f57c  83c40c               add esp, 0xc
// 0081f57f  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
