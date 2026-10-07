// roc 2008-06 0053a960  unit: seg_00530000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a960
//
// 0053a960  83ec08               sub esp, 8
// 0053a963  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053a967  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0053a96d  53                   push ebx
// 0053a96e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 0053a971  55                   push ebp
// 0053a972  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0053a976  56                   push esi
// 0053a977  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0053a97b  57                   push edi
// 0053a97c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0053a97f  03ff                 add edi, edi
// 0053a981  03ff                 add edi, edi
// 0053a983  03ff                 add edi, edi
// 0053a985  52                   push edx
// 0053a986  8d043f               lea eax, [edi + edi]
// 0053a989  55                   push ebp
// 0053a98a  897c2418             mov dword ptr [esp + 0x18], edi
// 0053a98e  e82dfdffff           call 0x53a6c0
// 0053a993  83c408               add esp, 8
// 0053a996  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0053a99a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0053a9a2  7e54                 jle 0x53a9f8
// 0053a9a4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053a9a8  2bd5                 sub edx, ebp
// 0053a9aa  89542414             mov dword ptr [esp + 0x14], edx
// 0053a9ae  8bff                 mov edi, edi
// 0053a9b0  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 0053a9b3  8b4500               mov eax, dword ptr [ebp]
// 0053a9b6  33f6                 xor esi, esi
// 0053a9b8  85ff                 test edi, edi
// 0053a9ba  7627                 jbe 0x53a9e3
// 0053a9bc  8d642400             lea esp, [esp]
// 0053a9c0  0fb65001             movzx edx, byte ptr [eax + 1]
// 0053a9c4  0fb618               movzx ebx, byte ptr [eax]
// 0053a9c7  03d6                 add edx, esi
// 0053a9c9  03da                 add ebx, edx
// 0053a9cb  d1fb                 sar ebx, 1
// 0053a9cd  8819                 mov byte ptr [ecx], bl
// 0053a9cf  41                   inc ecx
// 0053a9d0  83f601               xor esi, 1
// 0053a9d3  83c002               add eax, 2
// 0053a9d6  83ef01               sub edi, 1
// 0053a9d9  75e5                 jne 0x53a9c0
// 0053a9db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053a9df  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053a9e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053a9e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053a9eb  40                   inc eax
// 0053a9ec  83c504               add ebp, 4
// 0053a9ef  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 0053a9f2  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a9f6  7cb8                 jl 0x53a9b0
// 0053a9f8  5f                   pop edi
// 0053a9f9  5e                   pop esi
// 0053a9fa  5d                   pop ebp
// 0053a9fb  5b                   pop ebx
// 0053a9fc  83c408               add esp, 8
// 0053a9ff  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
