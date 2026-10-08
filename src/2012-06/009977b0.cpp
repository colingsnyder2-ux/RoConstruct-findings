// roc 2012-06 009977b0  unit: CXTPCommandBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009977b0
//
// 009977b0  8b442404             mov eax, dword ptr [esp + 4]
// 009977b4  83ec0c               sub esp, 0xc
// 009977b7  57                   push edi
// 009977b8  6a00                 push 0
// 009977ba  6880000000           push 0x80
// 009977bf  6a03                 push 3
// 009977c1  6a00                 push 0
// 009977c3  6a00                 push 0
// 009977c5  6800000080           push 0x80000000
// 009977ca  50                   push eax
// 009977cb  ff15bc22b200         call dword ptr [0xb222bc]
// 009977d1  8bf8                 mov edi, eax
// 009977d3  83ffff               cmp edi, -1
// 009977d6  0f849d000000         je 0x997879
// 009977dc  6a00                 push 0
// 009977de  8d4c2410             lea ecx, [esp + 0x10]
// 009977e2  51                   push ecx
// 009977e3  6a04                 push 4
// 009977e5  8d542414             lea edx, [esp + 0x14]
// 009977e9  52                   push edx
// 009977ea  57                   push edi
// 009977eb  c644241889           mov byte ptr [esp + 0x18], 0x89
// 009977f0  c644241950           mov byte ptr [esp + 0x19], 0x50
// 009977f5  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 009977fa  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 009977ff  ff154c23b200         call dword ptr [0xb2234c]
// 00997805  85c0                 test eax, eax
// 00997807  7469                 je 0x997872
// 00997809  837c240c04           cmp dword ptr [esp + 0xc], 4
// 0099780e  7562                 jne 0x997872
// 00997810  8b442408             mov eax, dword ptr [esp + 8]
// 00997814  56                   push esi
// 00997815  3b442408             cmp eax, dword ptr [esp + 8]
// 00997819  7427                 je 0x997842
// 0099781b  0fb6f0               movzx esi, al
// 0099781e  81ee89000000         sub esi, 0x89
// 00997824  7532                 jne 0x997858
// 00997826  0fb6f4               movzx esi, ah
// 00997829  83ee50               sub esi, 0x50
// 0099782c  752a                 jne 0x997858
// 0099782e  0fb674240e           movzx esi, byte ptr [esp + 0xe]
// 00997833  83ee4e               sub esi, 0x4e
// 00997836  7520                 jne 0x997858
// 00997838  0fb674240f           movzx esi, byte ptr [esp + 0xf]
// 0099783d  83ee47               sub esi, 0x47
// 00997840  7516                 jne 0x997858
// 00997842  57                   push edi
// 00997843  33f6                 xor esi, esi
// 00997845  ff15e821b200         call dword ptr [0xb221e8]
// 0099784b  33c0                 xor eax, eax
// 0099784d  85f6                 test esi, esi
// 0099784f  5e                   pop esi
// 00997850  0f94c0               sete al
// 00997853  5f                   pop edi
// 00997854  83c40c               add esp, 0xc
// 00997857  c3                   ret 
// 00997858  c1fe1f               sar esi, 0x1f
// 0099785b  57                   push edi
// 0099785c  83ce01               or esi, 1
// 0099785f  ff15e821b200         call dword ptr [0xb221e8]
// 00997865  33c0                 xor eax, eax
// 00997867  85f6                 test esi, esi
// 00997869  5e                   pop esi
// 0099786a  0f94c0               sete al
// 0099786d  5f                   pop edi
// 0099786e  83c40c               add esp, 0xc
// 00997871  c3                   ret 
// 00997872  57                   push edi
// 00997873  ff15e821b200         call dword ptr [0xb221e8]
// 00997879  33c0                 xor eax, eax
// 0099787b  5f                   pop edi
// 0099787c  83c40c               add esp, 0xc
// 0099787f  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
