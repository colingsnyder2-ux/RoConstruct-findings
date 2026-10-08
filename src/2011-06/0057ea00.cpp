// from server: 100% by auto
// roc 2011-06 0057ea00  unit: seg_00570000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ea00
//
// 0057ea00  83ec08               sub esp, 8
// 0057ea03  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057ea07  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0057ea0d  53                   push ebx
// 0057ea0e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 0057ea11  55                   push ebp
// 0057ea12  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0057ea16  56                   push esi
// 0057ea17  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057ea1b  57                   push edi
// 0057ea1c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0057ea1f  03ff                 add edi, edi
// 0057ea21  03ff                 add edi, edi
// 0057ea23  03ff                 add edi, edi
// 0057ea25  52                   push edx
// 0057ea26  8d043f               lea eax, [edi + edi]
// 0057ea29  55                   push ebp
// 0057ea2a  897c2418             mov dword ptr [esp + 0x18], edi
// 0057ea2e  e82dfdffff           call 0x57e760
// 0057ea33  83c408               add esp, 8
// 0057ea36  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0057ea3a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057ea42  7e54                 jle 0x57ea98
// 0057ea44  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057ea48  2bd5                 sub edx, ebp
// 0057ea4a  89542414             mov dword ptr [esp + 0x14], edx
// 0057ea4e  8bff                 mov edi, edi
// 0057ea50  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 0057ea53  8b4500               mov eax, dword ptr [ebp]
// 0057ea56  33f6                 xor esi, esi
// 0057ea58  85ff                 test edi, edi
// 0057ea5a  7627                 jbe 0x57ea83
// 0057ea5c  8d642400             lea esp, [esp]
// 0057ea60  0fb65001             movzx edx, byte ptr [eax + 1]
// 0057ea64  0fb618               movzx ebx, byte ptr [eax]
// 0057ea67  03d6                 add edx, esi
// 0057ea69  03da                 add ebx, edx
// 0057ea6b  d1fb                 sar ebx, 1
// 0057ea6d  8819                 mov byte ptr [ecx], bl
// 0057ea6f  41                   inc ecx
// 0057ea70  83f601               xor esi, 1
// 0057ea73  83c002               add eax, 2
// 0057ea76  83ef01               sub edi, 1
// 0057ea79  75e5                 jne 0x57ea60
// 0057ea7b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057ea7f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057ea83  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057ea87  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057ea8b  40                   inc eax
// 0057ea8c  83c504               add ebp, 4
// 0057ea8f  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 0057ea92  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057ea96  7cb8                 jl 0x57ea50
// 0057ea98  5f                   pop edi
// 0057ea99  5e                   pop esi
// 0057ea9a  5d                   pop ebp
// 0057ea9b  5b                   pop ebx
// 0057ea9c  83c408               add esp, 8
// 0057ea9f  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
