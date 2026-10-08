// from server: 100% by auto
// roc 2008-06 0051bbc0  unit: G3D::_internal::DialogTemplate  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051bbc0
//
// 0051bbc0  55                   push ebp
// 0051bbc1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0051bbc5  f6456804             test byte ptr [ebp + 0x68], 4
// 0051bbc9  56                   push esi
// 0051bbca  750e                 jne 0x51bbda
// 0051bbcc  68bc8d8200           push 0x828dbc
// 0051bbd1  55                   push ebp
// 0051bbd2  e8d9dd0000           call 0x5299b0
// 0051bbd7  83c408               add esp, 8
// 0051bbda  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051bbde  85f6                 test esi, esi
// 0051bbe0  0f8422010000         je 0x51bd08
// 0051bbe6  b800020000           mov eax, 0x200
// 0051bbeb  854608               test dword ptr [esi + 8], eax
// 0051bbee  7412                 je 0x51bc02
// 0051bbf0  854568               test dword ptr [ebp + 0x68], eax
// 0051bbf3  750d                 jne 0x51bc02
// 0051bbf5  8d463c               lea eax, [esi + 0x3c]
// 0051bbf8  50                   push eax
// 0051bbf9  55                   push ebp
// 0051bbfa  e861cc0000           call 0x528860
// 0051bbff  83c408               add esp, 8
// 0051bc02  53                   push ebx
// 0051bc03  33db                 xor ebx, ebx
// 0051bc05  395e30               cmp dword ptr [esi + 0x30], ebx
// 0051bc08  57                   push edi
// 0051bc09  0f8e81000000         jle 0x51bc90
// 0051bc0f  33ff                 xor edi, edi
// 0051bc11  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0051bc14  8b040f               mov eax, dword ptr [edi + ecx]
// 0051bc17  85c0                 test eax, eax
// 0051bc19  7e1a                 jle 0x51bc35
// 0051bc1b  686c8d8200           push 0x828d6c
// 0051bc20  55                   push ebp
// 0051bc21  e82ade0000           call 0x529a50
// 0051bc26  8b5638               mov edx, dword ptr [esi + 0x38]
// 0051bc29  83c408               add esp, 8
// 0051bc2c  c70417fdffffff       mov dword ptr [edi + edx], 0xfffffffd
// 0051bc33  eb52                 jmp 0x51bc87
// 0051bc35  7c28                 jl 0x51bc5f
// 0051bc37  8bc1                 mov eax, ecx
// 0051bc39  8b0c38               mov ecx, dword ptr [eax + edi]
// 0051bc3c  8b543808             mov edx, dword ptr [eax + edi + 8]
// 0051bc40  03c7                 add eax, edi
// 0051bc42  8b4004               mov eax, dword ptr [eax + 4]
// 0051bc45  51                   push ecx
// 0051bc46  6a00                 push 0
// 0051bc48  52                   push edx
// 0051bc49  50                   push eax
// 0051bc4a  55                   push ebp
// 0051bc4b  e8d0b00000           call 0x526d20
// 0051bc50  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0051bc53  83c414               add esp, 0x14
// 0051bc56  c7040ffeffffff       mov dword ptr [edi + ecx], 0xfffffffe
// 0051bc5d  eb28                 jmp 0x51bc87
// 0051bc5f  83f8ff               cmp eax, -1
// 0051bc62  7523                 jne 0x51bc87
// 0051bc64  8bd1                 mov edx, ecx
// 0051bc66  8b4c3a08             mov ecx, dword ptr [edx + edi + 8]
// 0051bc6a  8d043a               lea eax, [edx + edi]
// 0051bc6d  8b5004               mov edx, dword ptr [eax + 4]
// 0051bc70  6a00                 push 0
// 0051bc72  51                   push ecx
// 0051bc73  52                   push edx
// 0051bc74  55                   push ebp
// 0051bc75  e8e6af0000           call 0x526c60
// 0051bc7a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0051bc7d  83c410               add esp, 0x10
// 0051bc80  c70407fdffffff       mov dword ptr [edi + eax], 0xfffffffd
// 0051bc87  43                   inc ebx
// 0051bc88  83c710               add edi, 0x10
// 0051bc8b  3b5e30               cmp ebx, dword ptr [esi + 0x30]
// 0051bc8e  7c81                 jl 0x51bc11
// 0051bc90  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051bc96  85c0                 test eax, eax
// 0051bc98  746c                 je 0x51bd06
// 0051bc9a  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0051bca0  8d0c80               lea ecx, [eax + eax*4]
// 0051bca3  8d148f               lea edx, [edi + ecx*4]
// 0051bca6  3bfa                 cmp edi, edx
// 0051bca8  735c                 jae 0x51bd06
// 0051bcaa  bb00000100           mov ebx, 0x10000
// 0051bcaf  90                   nop 
// 0051bcb0  57                   push edi
// 0051bcb1  55                   push ebp
// 0051bcb2  e819250000           call 0x51e1d0
// 0051bcb7  83c408               add esp, 8
// 0051bcba  83f801               cmp eax, 1
// 0051bcbd  742e                 je 0x51bced
// 0051bcbf  8a4f10               mov cl, byte ptr [edi + 0x10]
// 0051bcc2  84c9                 test cl, cl
// 0051bcc4  7427                 je 0x51bced
// 0051bcc6  f6c108               test cl, 8
// 0051bcc9  7422                 je 0x51bced
// 0051bccb  f6470320             test byte ptr [edi + 3], 0x20
// 0051bccf  750a                 jne 0x51bcdb
// 0051bcd1  83f803               cmp eax, 3
// 0051bcd4  7405                 je 0x51bcdb
// 0051bcd6  855d6c               test dword ptr [ebp + 0x6c], ebx
// 0051bcd9  7412                 je 0x51bced
// 0051bcdb  8b470c               mov eax, dword ptr [edi + 0xc]
// 0051bcde  8b4f08               mov ecx, dword ptr [edi + 8]
// 0051bce1  50                   push eax
// 0051bce2  51                   push ecx
// 0051bce3  57                   push edi
// 0051bce4  55                   push ebp
// 0051bce5  e8c6b80000           call 0x5275b0
// 0051bcea  83c410               add esp, 0x10
// 0051bced  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051bcf3  8d1480               lea edx, [eax + eax*4]
// 0051bcf6  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0051bcfc  83c714               add edi, 0x14
// 0051bcff  8d0c90               lea ecx, [eax + edx*4]
// 0051bd02  3bf9                 cmp edi, ecx
// 0051bd04  72aa                 jb 0x51bcb0
// 0051bd06  5f                   pop edi
// 0051bd07  5b                   pop ebx
// 0051bd08  834d6808             or dword ptr [ebp + 0x68], 8
// 0051bd0c  55                   push ebp
// 0051bd0d  e81ebe0000           call 0x527b30
// 0051bd12  83c404               add esp, 4
// 0051bd15  5e                   pop esi
// 0051bd16  5d                   pop ebp
// 0051bd17  c3                   ret 
// library libpng-1.2.5/pngwrite.c (function _png_write_end)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwrite.c
