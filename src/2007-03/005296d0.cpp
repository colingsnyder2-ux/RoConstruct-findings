// roc 2007-03 005296d0  unit: seg_00520000  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005296d0
//
// 005296d0  83ec08               sub esp, 8
// 005296d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005296d7  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 005296dd  53                   push ebx
// 005296de  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 005296e1  55                   push ebp
// 005296e2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005296e6  56                   push esi
// 005296e7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005296eb  57                   push edi
// 005296ec  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005296ef  03ff                 add edi, edi
// 005296f1  03ff                 add edi, edi
// 005296f3  03ff                 add edi, edi
// 005296f5  52                   push edx
// 005296f6  8d043f               lea eax, [edi + edi]
// 005296f9  55                   push ebp
// 005296fa  897c2418             mov dword ptr [esp + 0x18], edi
// 005296fe  e86dfdffff           call 0x529470
// 00529703  83c408               add esp, 8
// 00529706  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0052970a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00529712  7e58                 jle 0x52976c
// 00529714  8b542428             mov edx, dword ptr [esp + 0x28]
// 00529718  2bd5                 sub edx, ebp
// 0052971a  89542414             mov dword ptr [esp + 0x14], edx
// 0052971e  8bff                 mov edi, edi
// 00529720  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 00529723  8b4500               mov eax, dword ptr [ebp]
// 00529726  33f6                 xor esi, esi
// 00529728  85ff                 test edi, edi
// 0052972a  7629                 jbe 0x529755
// 0052972c  8d642400             lea esp, [esp]
// 00529730  0fb65001             movzx edx, byte ptr [eax + 1]
// 00529734  0fb618               movzx ebx, byte ptr [eax]
// 00529737  03d6                 add edx, esi
// 00529739  03da                 add ebx, edx
// 0052973b  d1fb                 sar ebx, 1
// 0052973d  8819                 mov byte ptr [ecx], bl
// 0052973f  83c101               add ecx, 1
// 00529742  83f601               xor esi, 1
// 00529745  83c002               add eax, 2
// 00529748  83ef01               sub edi, 1
// 0052974b  75e3                 jne 0x529730
// 0052974d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00529751  8b542414             mov edx, dword ptr [esp + 0x14]
// 00529755  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00529759  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052975d  83c001               add eax, 1
// 00529760  83c504               add ebp, 4
// 00529763  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00529766  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052976a  7cb4                 jl 0x529720
// 0052976c  5f                   pop edi
// 0052976d  5e                   pop esi
// 0052976e  5d                   pop ebp
// 0052976f  5b                   pop ebx
// 00529770  83c408               add esp, 8
// 00529773  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
