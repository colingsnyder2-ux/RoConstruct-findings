// from server: 100% by auto
// roc 2010-06 00581e20  unit: seg_00580000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581e20
//
// 00581e20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581e24  53                   push ebx
// 00581e25  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00581e29  55                   push ebp
// 00581e2a  33ed                 xor ebp, ebp
// 00581e2c  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 00581e32  57                   push edi
// 00581e33  8b38                 mov edi, dword ptr [eax]
// 00581e35  7e37                 jle 0x581e6e
// 00581e37  8b542418             mov edx, dword ptr [esp + 0x18]
// 00581e3b  2bd7                 sub edx, edi
// 00581e3d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00581e41  56                   push esi
// 00581e42  8b07                 mov eax, dword ptr [edi]
// 00581e44  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 00581e47  8b343a               mov esi, dword ptr [edx + edi]
// 00581e4a  03c8                 add ecx, eax
// 00581e4c  3bc1                 cmp eax, ecx
// 00581e4e  7311                 jae 0x581e61
// 00581e50  8a16                 mov dl, byte ptr [esi]
// 00581e52  8810                 mov byte ptr [eax], dl
// 00581e54  40                   inc eax
// 00581e55  8810                 mov byte ptr [eax], dl
// 00581e57  40                   inc eax
// 00581e58  46                   inc esi
// 00581e59  3bc1                 cmp eax, ecx
// 00581e5b  72f3                 jb 0x581e50
// 00581e5d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00581e61  45                   inc ebp
// 00581e62  83c704               add edi, 4
// 00581e65  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 00581e6b  7cd5                 jl 0x581e42
// 00581e6d  5e                   pop esi
// 00581e6e  5f                   pop edi
// 00581e6f  5d                   pop ebp
// 00581e70  5b                   pop ebx
// 00581e71  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
