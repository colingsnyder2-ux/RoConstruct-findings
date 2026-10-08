// roc 2009-12 005f9dd0  unit: G3D::LineSegment  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9dd0
//
// 005f9dd0  51                   push ecx
// 005f9dd1  80794800             cmp byte ptr [ecx + 0x48], 0
// 005f9dd5  890c24               mov dword ptr [esp], ecx
// 005f9dd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f9ddc  0f84dc000000         je 0x5f9ebe
// 005f9de2  56                   push esi
// 005f9de3  57                   push edi
// 005f9de4  6856fd9900           push 0x99fd56
// 005f9de9  ff1500b79800         call dword ptr [0x98b700]
// 005f9def  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005f9df3  8b4714               mov eax, dword ptr [edi + 0x14]
// 005f9df6  33f6                 xor esi, esi
// 005f9df8  85c0                 test eax, eax
// 005f9dfa  0f86b8000000         jbe 0x5f9eb8
// 005f9e00  53                   push ebx
// 005f9e01  55                   push ebp
// 005f9e02  8d5f04               lea ebx, [edi + 4]
// 005f9e05  8d6e01               lea ebp, [esi + 1]
// 005f9e08  3bf0                 cmp esi, eax
// 005f9e0a  7606                 jbe 0x5f9e12
// 005f9e0c  ff1560b79800         call dword ptr [0x98b760]
// 005f9e12  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005f9e16  7204                 jb 0x5f9e1c
// 005f9e18  8b03                 mov eax, dword ptr [ebx]
// 005f9e1a  eb02                 jmp 0x5f9e1e
// 005f9e1c  8bc3                 mov eax, ebx
// 005f9e1e  803c300a             cmp byte ptr [eax + esi], 0xa
// 005f9e22  7514                 jne 0x5f9e38
// 005f9e24  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f9e28  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f9e2c  83c054               add eax, 0x54
// 005f9e2f  50                   push eax
// 005f9e30  ff15fcb69800         call dword ptr [0x98b6fc]
// 005f9e36  eb71                 jmp 0x5f9ea9
// 005f9e38  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005f9e3b  7606                 jbe 0x5f9e43
// 005f9e3d  ff1560b79800         call dword ptr [0x98b760]
// 005f9e43  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005f9e46  83f910               cmp ecx, 0x10
// 005f9e49  7204                 jb 0x5f9e4f
// 005f9e4b  8b03                 mov eax, dword ptr [ebx]
// 005f9e4d  eb02                 jmp 0x5f9e51
// 005f9e4f  8bc3                 mov eax, ebx
// 005f9e51  803c300d             cmp byte ptr [eax + esi], 0xd
// 005f9e55  752c                 jne 0x5f9e83
// 005f9e57  3b6f14               cmp ebp, dword ptr [edi + 0x14]
// 005f9e5a  7327                 jae 0x5f9e83
// 005f9e5c  83f910               cmp ecx, 0x10
// 005f9e5f  7204                 jb 0x5f9e65
// 005f9e61  8b03                 mov eax, dword ptr [ebx]
// 005f9e63  eb02                 jmp 0x5f9e67
// 005f9e65  8bc3                 mov eax, ebx
// 005f9e67  803c280a             cmp byte ptr [eax + ebp], 0xa
// 005f9e6b  7516                 jne 0x5f9e83
// 005f9e6d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f9e71  83c154               add ecx, 0x54
// 005f9e74  51                   push ecx
// 005f9e75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f9e79  ff15fcb69800         call dword ptr [0x98b6fc]
// 005f9e7f  46                   inc esi
// 005f9e80  45                   inc ebp
// 005f9e81  eb26                 jmp 0x5f9ea9
// 005f9e83  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005f9e86  7606                 jbe 0x5f9e8e
// 005f9e88  ff1560b79800         call dword ptr [0x98b760]
// 005f9e8e  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005f9e92  7204                 jb 0x5f9e98
// 005f9e94  8b03                 mov eax, dword ptr [ebx]
// 005f9e96  eb02                 jmp 0x5f9e9a
// 005f9e98  8bc3                 mov eax, ebx
// 005f9e9a  0fb61430             movzx edx, byte ptr [eax + esi]
// 005f9e9e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f9ea2  52                   push edx
// 005f9ea3  ff154cb59800         call dword ptr [0x98b54c]
// 005f9ea9  8b4714               mov eax, dword ptr [edi + 0x14]
// 005f9eac  46                   inc esi
// 005f9ead  45                   inc ebp
// 005f9eae  3bf0                 cmp esi, eax
// 005f9eb0  0f825cffffff         jb 0x5f9e12
// 005f9eb6  5d                   pop ebp
// 005f9eb7  5b                   pop ebx
// 005f9eb8  5f                   pop edi
// 005f9eb9  5e                   pop esi
// 005f9eba  59                   pop ecx
// 005f9ebb  c20800               ret 8
// 005f9ebe  8b442408             mov eax, dword ptr [esp + 8]
// 005f9ec2  50                   push eax
// 005f9ec3  ff159cb69800         call dword ptr [0x98b69c]
// 005f9ec9  59                   pop ecx
// 005f9eca  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?convertNewlines@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
