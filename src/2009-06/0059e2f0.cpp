// roc 2009-06 0059e2f0  unit: seg_00590000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e2f0
//
// 0059e2f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e2f4  53                   push ebx
// 0059e2f5  8b18                 mov ebx, dword ptr [eax]
// 0059e2f7  55                   push ebp
// 0059e2f8  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0059e2fc  56                   push esi
// 0059e2fd  33f6                 xor esi, esi
// 0059e2ff  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 0059e305  7e4e                 jle 0x59e355
// 0059e307  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059e30b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0059e30f  57                   push edi
// 0059e310  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 0059e313  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 0059e316  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059e31a  8b3a                 mov edi, dword ptr [edx]
// 0059e31c  03c8                 add ecx, eax
// 0059e31e  3bc1                 cmp eax, ecx
// 0059e320  730d                 jae 0x59e32f
// 0059e322  8a17                 mov dl, byte ptr [edi]
// 0059e324  8810                 mov byte ptr [eax], dl
// 0059e326  40                   inc eax
// 0059e327  8810                 mov byte ptr [eax], dl
// 0059e329  40                   inc eax
// 0059e32a  47                   inc edi
// 0059e32b  3bc1                 cmp eax, ecx
// 0059e32d  72f3                 jb 0x59e322
// 0059e32f  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0059e332  50                   push eax
// 0059e333  6a01                 push 1
// 0059e335  8d4e01               lea ecx, [esi + 1]
// 0059e338  51                   push ecx
// 0059e339  53                   push ebx
// 0059e33a  56                   push esi
// 0059e33b  53                   push ebx
// 0059e33c  e8ffbafeff           call 0x589e40
// 0059e341  8344243804           add dword ptr [esp + 0x38], 4
// 0059e346  83c602               add esi, 2
// 0059e349  83c418               add esp, 0x18
// 0059e34c  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 0059e352  7cbc                 jl 0x59e310
// 0059e354  5f                   pop edi
// 0059e355  5e                   pop esi
// 0059e356  5d                   pop ebp
// 0059e357  5b                   pop ebx
// 0059e358  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
