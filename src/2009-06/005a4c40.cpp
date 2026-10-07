// roc 2009-06 005a4c40  unit: seg_005a0000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a4c40
//
// 005a4c40  83ec08               sub esp, 8
// 005a4c43  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a4c47  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 005a4c4d  53                   push ebx
// 005a4c4e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 005a4c51  55                   push ebp
// 005a4c52  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a4c56  56                   push esi
// 005a4c57  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005a4c5b  57                   push edi
// 005a4c5c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005a4c5f  03ff                 add edi, edi
// 005a4c61  03ff                 add edi, edi
// 005a4c63  03ff                 add edi, edi
// 005a4c65  52                   push edx
// 005a4c66  8d043f               lea eax, [edi + edi]
// 005a4c69  55                   push ebp
// 005a4c6a  897c2418             mov dword ptr [esp + 0x18], edi
// 005a4c6e  e82dfdffff           call 0x5a49a0
// 005a4c73  83c408               add esp, 8
// 005a4c76  837e0c00             cmp dword ptr [esi + 0xc], 0
// 005a4c7a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a4c82  7e54                 jle 0x5a4cd8
// 005a4c84  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a4c88  2bd5                 sub edx, ebp
// 005a4c8a  89542414             mov dword ptr [esp + 0x14], edx
// 005a4c8e  8bff                 mov edi, edi
// 005a4c90  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 005a4c93  8b4500               mov eax, dword ptr [ebp]
// 005a4c96  33f6                 xor esi, esi
// 005a4c98  85ff                 test edi, edi
// 005a4c9a  7627                 jbe 0x5a4cc3
// 005a4c9c  8d642400             lea esp, [esp]
// 005a4ca0  0fb65001             movzx edx, byte ptr [eax + 1]
// 005a4ca4  0fb618               movzx ebx, byte ptr [eax]
// 005a4ca7  03d6                 add edx, esi
// 005a4ca9  03da                 add ebx, edx
// 005a4cab  d1fb                 sar ebx, 1
// 005a4cad  8819                 mov byte ptr [ecx], bl
// 005a4caf  41                   inc ecx
// 005a4cb0  83f601               xor esi, 1
// 005a4cb3  83c002               add eax, 2
// 005a4cb6  83ef01               sub edi, 1
// 005a4cb9  75e5                 jne 0x5a4ca0
// 005a4cbb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a4cbf  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a4cc3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a4cc7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a4ccb  40                   inc eax
// 005a4ccc  83c504               add ebp, 4
// 005a4ccf  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005a4cd2  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a4cd6  7cb8                 jl 0x5a4c90
// 005a4cd8  5f                   pop edi
// 005a4cd9  5e                   pop esi
// 005a4cda  5d                   pop ebp
// 005a4cdb  5b                   pop ebx
// 005a4cdc  83c408               add esp, 8
// 005a4cdf  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
