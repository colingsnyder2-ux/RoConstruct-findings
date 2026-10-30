// from server: 100% by auto
// roc 2008-06 00524990  unit: seg_00520000  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524990
//
// 00524990  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00524994  53                   push ebx
// 00524995  55                   push ebp
// 00524996  56                   push esi
// 00524997  57                   push edi
// 00524998  85c9                 test ecx, ecx
// 0052499a  0f8407010000         je 0x524aa7
// 005249a0  8b742418             mov esi, dword ptr [esp + 0x18]
// 005249a4  85f6                 test esi, esi
// 005249a6  0f84fb000000         je 0x524aa7
// 005249ac  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005249b0  85db                 test ebx, ebx
// 005249b2  0f84ef000000         je 0x524aa7
// 005249b8  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005249bc  85ed                 test ebp, ebp
// 005249be  0f84e3000000         je 0x524aa7
// 005249c4  8b442424             mov eax, dword ptr [esp + 0x24]
// 005249c8  85c0                 test eax, eax
// 005249ca  0f84d7000000         je 0x524aa7
// 005249d0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005249d4  85ff                 test edi, edi
// 005249d6  0f84cb000000         je 0x524aa7
// 005249dc  8b16                 mov edx, dword ptr [esi]
// 005249de  8913                 mov dword ptr [ebx], edx
// 005249e0  8b5604               mov edx, dword ptr [esi + 4]
// 005249e3  895500               mov dword ptr [ebp], edx
// 005249e6  0fb65618             movzx edx, byte ptr [esi + 0x18]
// 005249ea  8910                 mov dword ptr [eax], edx
// 005249ec  807e1801             cmp byte ptr [esi + 0x18], 1
// 005249f0  7206                 jb 0x5249f8
// 005249f2  807e1810             cmp byte ptr [esi + 0x18], 0x10
// 005249f6  7612                 jbe 0x524a0a
// 005249f8  682cad8200           push 0x82ad2c
// 005249fd  51                   push ecx
// 005249fe  e8ad4f0000           call 0x5299b0
// 00524a03  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524a07  83c408               add esp, 8
// 00524a0a  0fb64619             movzx eax, byte ptr [esi + 0x19]
// 00524a0e  8907                 mov dword ptr [edi], eax
// 00524a10  807e1906             cmp byte ptr [esi + 0x19], 6
// 00524a14  7612                 jbe 0x524a28
// 00524a16  6818ad8200           push 0x82ad18
// 00524a1b  51                   push ecx
// 00524a1c  e88f4f0000           call 0x5299b0
// 00524a21  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524a25  83c408               add esp, 8
// 00524a28  8b442430             mov eax, dword ptr [esp + 0x30]
// 00524a2c  85c0                 test eax, eax
// 00524a2e  7406                 je 0x524a36
// 00524a30  0fb6561a             movzx edx, byte ptr [esi + 0x1a]
// 00524a34  8910                 mov dword ptr [eax], edx
// 00524a36  8b442434             mov eax, dword ptr [esp + 0x34]
// 00524a3a  85c0                 test eax, eax
// 00524a3c  7406                 je 0x524a44
// 00524a3e  0fb6561b             movzx edx, byte ptr [esi + 0x1b]
// 00524a42  8910                 mov dword ptr [eax], edx
// 00524a44  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00524a48  85c0                 test eax, eax
// 00524a4a  7406                 je 0x524a52
// 00524a4c  0fb6561c             movzx edx, byte ptr [esi + 0x1c]
// 00524a50  8910                 mov dword ptr [eax], edx
// 00524a52  813bffffff7f         cmp dword ptr [ebx], 0x7fffffff
// 00524a58  7612                 jbe 0x524a6c
// 00524a5a  6804ad8200           push 0x82ad04
// 00524a5f  51                   push ecx
// 00524a60  e84b4f0000           call 0x5299b0
// 00524a65  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524a69  83c408               add esp, 8
// 00524a6c  817d00ffffff7f       cmp dword ptr [ebp], 0x7fffffff
// 00524a73  7612                 jbe 0x524a87
// 00524a75  68ecac8200           push 0x82acec
// 00524a7a  51                   push ecx
// 00524a7b  e8304f0000           call 0x5299b0
// 00524a80  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524a84  83c408               add esp, 8
// 00524a87  813e7effff1f         cmp dword ptr [esi], 0x1fffff7e
// 00524a8d  760e                 jbe 0x524a9d
// 00524a8f  68b8ac8200           push 0x82acb8
// 00524a94  51                   push ecx
// 00524a95  e8b64f0000           call 0x529a50
// 00524a9a  83c408               add esp, 8
// 00524a9d  5f                   pop edi
// 00524a9e  5e                   pop esi
// 00524a9f  5d                   pop ebp
// 00524aa0  b801000000           mov eax, 1
// 00524aa5  5b                   pop ebx
// 00524aa6  c3                   ret 
// 00524aa7  5f                   pop edi
// 00524aa8  5e                   pop esi
// 00524aa9  5d                   pop ebp
// 00524aaa  33c0                 xor eax, eax
// 00524aac  5b                   pop ebx
// 00524aad  c3                   ret 
// library libpng-1.2.6/pngget.c (function _png_get_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngget.c
