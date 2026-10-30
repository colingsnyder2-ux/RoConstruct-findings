// roc 2010-06 007bd070  unit: CXTPCommandBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd070
//
// 007bd070  8b442404             mov eax, dword ptr [esp + 4]
// 007bd074  83ec0c               sub esp, 0xc
// 007bd077  57                   push edi
// 007bd078  6a00                 push 0
// 007bd07a  6880000000           push 0x80
// 007bd07f  6a03                 push 3
// 007bd081  6a00                 push 0
// 007bd083  6a00                 push 0
// 007bd085  6800000080           push 0x80000000
// 007bd08a  50                   push eax
// 007bd08b  ff15f4a29e00         call dword ptr [0x9ea2f4]
// 007bd091  8bf8                 mov edi, eax
// 007bd093  83ffff               cmp edi, -1
// 007bd096  0f849d000000         je 0x7bd139
// 007bd09c  6a00                 push 0
// 007bd09e  8d4c2410             lea ecx, [esp + 0x10]
// 007bd0a2  51                   push ecx
// 007bd0a3  6a04                 push 4
// 007bd0a5  8d542414             lea edx, [esp + 0x14]
// 007bd0a9  52                   push edx
// 007bd0aa  57                   push edi
// 007bd0ab  c644241889           mov byte ptr [esp + 0x18], 0x89
// 007bd0b0  c644241950           mov byte ptr [esp + 0x19], 0x50
// 007bd0b5  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 007bd0ba  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 007bd0bf  ff1574a29e00         call dword ptr [0x9ea274]
// 007bd0c5  85c0                 test eax, eax
// 007bd0c7  7469                 je 0x7bd132
// 007bd0c9  837c240c04           cmp dword ptr [esp + 0xc], 4
// 007bd0ce  7562                 jne 0x7bd132
// 007bd0d0  8b442408             mov eax, dword ptr [esp + 8]
// 007bd0d4  56                   push esi
// 007bd0d5  3b442408             cmp eax, dword ptr [esp + 8]
// 007bd0d9  7427                 je 0x7bd102
// 007bd0db  0fb6f0               movzx esi, al
// 007bd0de  81ee89000000         sub esi, 0x89
// 007bd0e4  7532                 jne 0x7bd118
// 007bd0e6  0fb6f4               movzx esi, ah
// 007bd0e9  83ee50               sub esi, 0x50
// 007bd0ec  752a                 jne 0x7bd118
// 007bd0ee  0fb674240e           movzx esi, byte ptr [esp + 0xe]
// 007bd0f3  83ee4e               sub esi, 0x4e
// 007bd0f6  7520                 jne 0x7bd118
// 007bd0f8  0fb674240f           movzx esi, byte ptr [esp + 0xf]
// 007bd0fd  83ee47               sub esi, 0x47
// 007bd100  7516                 jne 0x7bd118
// 007bd102  57                   push edi
// 007bd103  33f6                 xor esi, esi
// 007bd105  ff15cca39e00         call dword ptr [0x9ea3cc]
// 007bd10b  33c0                 xor eax, eax
// 007bd10d  85f6                 test esi, esi
// 007bd10f  5e                   pop esi
// 007bd110  0f94c0               sete al
// 007bd113  5f                   pop edi
// 007bd114  83c40c               add esp, 0xc
// 007bd117  c3                   ret 
// 007bd118  c1fe1f               sar esi, 0x1f
// 007bd11b  57                   push edi
// 007bd11c  83ce01               or esi, 1
// 007bd11f  ff15cca39e00         call dword ptr [0x9ea3cc]
// 007bd125  33c0                 xor eax, eax
// 007bd127  85f6                 test esi, esi
// 007bd129  5e                   pop esi
// 007bd12a  0f94c0               sete al
// 007bd12d  5f                   pop edi
// 007bd12e  83c40c               add esp, 0xc
// 007bd131  c3                   ret 
// 007bd132  57                   push edi
// 007bd133  ff15cca39e00         call dword ptr [0x9ea3cc]
// 007bd139  33c0                 xor eax, eax
// 007bd13b  5f                   pop edi
// 007bd13c  83c40c               add esp, 0xc
// 007bd13f  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
