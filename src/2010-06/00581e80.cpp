// roc 2010-06 00581e80  unit: seg_00580000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581e80
//
// 00581e80  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581e84  53                   push ebx
// 00581e85  8b18                 mov ebx, dword ptr [eax]
// 00581e87  55                   push ebp
// 00581e88  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00581e8c  56                   push esi
// 00581e8d  33f6                 xor esi, esi
// 00581e8f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00581e95  7e4e                 jle 0x581ee5
// 00581e97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581e9b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00581e9f  57                   push edi
// 00581ea0  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00581ea3  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00581ea6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00581eaa  8b3a                 mov edi, dword ptr [edx]
// 00581eac  03c8                 add ecx, eax
// 00581eae  3bc1                 cmp eax, ecx
// 00581eb0  730d                 jae 0x581ebf
// 00581eb2  8a17                 mov dl, byte ptr [edi]
// 00581eb4  8810                 mov byte ptr [eax], dl
// 00581eb6  40                   inc eax
// 00581eb7  8810                 mov byte ptr [eax], dl
// 00581eb9  40                   inc eax
// 00581eba  47                   inc edi
// 00581ebb  3bc1                 cmp eax, ecx
// 00581ebd  72f3                 jb 0x581eb2
// 00581ebf  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00581ec2  50                   push eax
// 00581ec3  6a01                 push 1
// 00581ec5  8d4e01               lea ecx, [esi + 1]
// 00581ec8  51                   push ecx
// 00581ec9  53                   push ebx
// 00581eca  56                   push esi
// 00581ecb  53                   push ebx
// 00581ecc  e89fb4feff           call 0x56d370
// 00581ed1  8344243804           add dword ptr [esp + 0x38], 4
// 00581ed6  83c602               add esi, 2
// 00581ed9  83c418               add esp, 0x18
// 00581edc  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 00581ee2  7cbc                 jl 0x581ea0
// 00581ee4  5f                   pop edi
// 00581ee5  5e                   pop esi
// 00581ee6  5d                   pop ebp
// 00581ee7  5b                   pop ebx
// 00581ee8  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
