// roc 2011-06 00578130  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578130
//
// 00578130  8b442410             mov eax, dword ptr [esp + 0x10]
// 00578134  53                   push ebx
// 00578135  8b18                 mov ebx, dword ptr [eax]
// 00578137  55                   push ebp
// 00578138  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0057813c  56                   push esi
// 0057813d  33f6                 xor esi, esi
// 0057813f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00578145  7e4e                 jle 0x578195
// 00578147  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057814b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057814f  57                   push edi
// 00578150  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00578153  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00578156  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057815a  8b3a                 mov edi, dword ptr [edx]
// 0057815c  03c8                 add ecx, eax
// 0057815e  3bc1                 cmp eax, ecx
// 00578160  730d                 jae 0x57816f
// 00578162  8a17                 mov dl, byte ptr [edi]
// 00578164  8810                 mov byte ptr [eax], dl
// 00578166  40                   inc eax
// 00578167  8810                 mov byte ptr [eax], dl
// 00578169  40                   inc eax
// 0057816a  47                   inc edi
// 0057816b  3bc1                 cmp eax, ecx
// 0057816d  72f3                 jb 0x578162
// 0057816f  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00578172  50                   push eax
// 00578173  6a01                 push 1
// 00578175  8d4e01               lea ecx, [esi + 1]
// 00578178  51                   push ecx
// 00578179  53                   push ebx
// 0057817a  56                   push esi
// 0057817b  53                   push ebx
// 0057817c  e84ffcfeff           call 0x567dd0
// 00578181  8344243804           add dword ptr [esp + 0x38], 4
// 00578186  83c602               add esi, 2
// 00578189  83c418               add esp, 0x18
// 0057818c  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 00578192  7cbc                 jl 0x578150
// 00578194  5f                   pop edi
// 00578195  5e                   pop esi
// 00578196  5d                   pop ebp
// 00578197  5b                   pop ebx
// 00578198  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
