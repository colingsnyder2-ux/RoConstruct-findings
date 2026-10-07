// roc 2007-08 005089a0  unit: G3D::GCamera  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005089a0
//
// 005089a0  51                   push ecx
// 005089a1  80794800             cmp byte ptr [ecx + 0x48], 0
// 005089a5  890c24               mov dword ptr [esp], ecx
// 005089a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005089ac  0f84e6000000         je 0x508a98
// 005089b2  56                   push esi
// 005089b3  57                   push edi
// 005089b4  6854597800           push 0x785954
// 005089b9  ff152ce67700         call dword ptr [0x77e62c]
// 005089bf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005089c3  8b4714               mov eax, dword ptr [edi + 0x14]
// 005089c6  33f6                 xor esi, esi
// 005089c8  85c0                 test eax, eax
// 005089ca  0f86c2000000         jbe 0x508a92
// 005089d0  3bf0                 cmp esi, eax
// 005089d2  53                   push ebx
// 005089d3  55                   push ebp
// 005089d4  8d5f04               lea ebx, [edi + 4]
// 005089d7  bd01000000           mov ebp, 1
// 005089dc  7606                 jbe 0x5089e4
// 005089de  ff15d8e67700         call dword ptr [0x77e6d8]
// 005089e4  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005089e8  7204                 jb 0x5089ee
// 005089ea  8b03                 mov eax, dword ptr [ebx]
// 005089ec  eb02                 jmp 0x5089f0
// 005089ee  8bc3                 mov eax, ebx
// 005089f0  803c300a             cmp byte ptr [eax + esi], 0xa
// 005089f4  7514                 jne 0x508a0a
// 005089f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005089fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005089fe  83c054               add eax, 0x54
// 00508a01  50                   push eax
// 00508a02  ff1564e67700         call dword ptr [0x77e664]
// 00508a08  eb75                 jmp 0x508a7f
// 00508a0a  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00508a0d  7606                 jbe 0x508a15
// 00508a0f  ff15d8e67700         call dword ptr [0x77e6d8]
// 00508a15  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00508a18  83f910               cmp ecx, 0x10
// 00508a1b  7204                 jb 0x508a21
// 00508a1d  8b03                 mov eax, dword ptr [ebx]
// 00508a1f  eb02                 jmp 0x508a23
// 00508a21  8bc3                 mov eax, ebx
// 00508a23  803c300d             cmp byte ptr [eax + esi], 0xd
// 00508a27  7530                 jne 0x508a59
// 00508a29  3b6f14               cmp ebp, dword ptr [edi + 0x14]
// 00508a2c  732b                 jae 0x508a59
// 00508a2e  83f910               cmp ecx, 0x10
// 00508a31  7204                 jb 0x508a37
// 00508a33  8b03                 mov eax, dword ptr [ebx]
// 00508a35  eb02                 jmp 0x508a39
// 00508a37  8bc3                 mov eax, ebx
// 00508a39  803c280a             cmp byte ptr [eax + ebp], 0xa
// 00508a3d  751a                 jne 0x508a59
// 00508a3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00508a43  83c154               add ecx, 0x54
// 00508a46  51                   push ecx
// 00508a47  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00508a4b  ff1564e67700         call dword ptr [0x77e664]
// 00508a51  83c601               add esi, 1
// 00508a54  83c501               add ebp, 1
// 00508a57  eb26                 jmp 0x508a7f
// 00508a59  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00508a5c  7606                 jbe 0x508a64
// 00508a5e  ff15d8e67700         call dword ptr [0x77e6d8]
// 00508a64  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00508a68  7204                 jb 0x508a6e
// 00508a6a  8b03                 mov eax, dword ptr [ebx]
// 00508a6c  eb02                 jmp 0x508a70
// 00508a6e  8bc3                 mov eax, ebx
// 00508a70  0fb61430             movzx edx, byte ptr [eax + esi]
// 00508a74  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00508a78  52                   push edx
// 00508a79  ff155ce57700         call dword ptr [0x77e55c]
// 00508a7f  8b4714               mov eax, dword ptr [edi + 0x14]
// 00508a82  83c601               add esi, 1
// 00508a85  83c501               add ebp, 1
// 00508a88  3bf0                 cmp esi, eax
// 00508a8a  0f8254ffffff         jb 0x5089e4
// 00508a90  5d                   pop ebp
// 00508a91  5b                   pop ebx
// 00508a92  5f                   pop edi
// 00508a93  5e                   pop esi
// 00508a94  59                   pop ecx
// 00508a95  c20800               ret 8
// 00508a98  8b442408             mov eax, dword ptr [esp + 8]
// 00508a9c  50                   push eax
// 00508a9d  ff1590e67700         call dword ptr [0x77e690]
// 00508aa3  59                   pop ecx
// 00508aa4  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?convertNewlines@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
