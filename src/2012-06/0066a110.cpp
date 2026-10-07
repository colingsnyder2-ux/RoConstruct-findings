// roc 2012-06 0066a110  unit: seg_00660000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a110
//
// 0066a110  83ec08               sub esp, 8
// 0066a113  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066a117  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0066a11d  53                   push ebx
// 0066a11e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 0066a121  55                   push ebp
// 0066a122  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0066a126  56                   push esi
// 0066a127  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066a12b  57                   push edi
// 0066a12c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0066a12f  03ff                 add edi, edi
// 0066a131  03ff                 add edi, edi
// 0066a133  03ff                 add edi, edi
// 0066a135  52                   push edx
// 0066a136  8d043f               lea eax, [edi + edi]
// 0066a139  55                   push ebp
// 0066a13a  897c2418             mov dword ptr [esp + 0x18], edi
// 0066a13e  e82dfdffff           call 0x669e70
// 0066a143  83c408               add esp, 8
// 0066a146  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0066a14a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0066a152  7e54                 jle 0x66a1a8
// 0066a154  8b542428             mov edx, dword ptr [esp + 0x28]
// 0066a158  2bd5                 sub edx, ebp
// 0066a15a  89542414             mov dword ptr [esp + 0x14], edx
// 0066a15e  8bff                 mov edi, edi
// 0066a160  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 0066a163  8b4500               mov eax, dword ptr [ebp]
// 0066a166  33f6                 xor esi, esi
// 0066a168  85ff                 test edi, edi
// 0066a16a  7627                 jbe 0x66a193
// 0066a16c  8d642400             lea esp, [esp]
// 0066a170  0fb65001             movzx edx, byte ptr [eax + 1]
// 0066a174  0fb618               movzx ebx, byte ptr [eax]
// 0066a177  03d6                 add edx, esi
// 0066a179  03da                 add ebx, edx
// 0066a17b  d1fb                 sar ebx, 1
// 0066a17d  8819                 mov byte ptr [ecx], bl
// 0066a17f  41                   inc ecx
// 0066a180  83f601               xor esi, 1
// 0066a183  83c002               add eax, 2
// 0066a186  83ef01               sub edi, 1
// 0066a189  75e5                 jne 0x66a170
// 0066a18b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066a18f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066a193  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066a197  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066a19b  40                   inc eax
// 0066a19c  83c504               add ebp, 4
// 0066a19f  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 0066a1a2  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066a1a6  7cb8                 jl 0x66a160
// 0066a1a8  5f                   pop edi
// 0066a1a9  5e                   pop esi
// 0066a1aa  5d                   pop ebp
// 0066a1ab  5b                   pop ebx
// 0066a1ac  83c408               add esp, 8
// 0066a1af  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
