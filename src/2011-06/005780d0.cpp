// roc 2011-06 005780d0  unit: seg_00570000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005780d0
//
// 005780d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005780d4  53                   push ebx
// 005780d5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005780d9  55                   push ebp
// 005780da  33ed                 xor ebp, ebp
// 005780dc  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 005780e2  57                   push edi
// 005780e3  8b38                 mov edi, dword ptr [eax]
// 005780e5  7e37                 jle 0x57811e
// 005780e7  8b542418             mov edx, dword ptr [esp + 0x18]
// 005780eb  2bd7                 sub edx, edi
// 005780ed  8954241c             mov dword ptr [esp + 0x1c], edx
// 005780f1  56                   push esi
// 005780f2  8b07                 mov eax, dword ptr [edi]
// 005780f4  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 005780f7  8b343a               mov esi, dword ptr [edx + edi]
// 005780fa  03c8                 add ecx, eax
// 005780fc  3bc1                 cmp eax, ecx
// 005780fe  7311                 jae 0x578111
// 00578100  8a16                 mov dl, byte ptr [esi]
// 00578102  8810                 mov byte ptr [eax], dl
// 00578104  40                   inc eax
// 00578105  8810                 mov byte ptr [eax], dl
// 00578107  40                   inc eax
// 00578108  46                   inc esi
// 00578109  3bc1                 cmp eax, ecx
// 0057810b  72f3                 jb 0x578100
// 0057810d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578111  45                   inc ebp
// 00578112  83c704               add edi, 4
// 00578115  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 0057811b  7cd5                 jl 0x5780f2
// 0057811d  5e                   pop esi
// 0057811e  5f                   pop edi
// 0057811f  5d                   pop ebp
// 00578120  5b                   pop ebx
// 00578121  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
