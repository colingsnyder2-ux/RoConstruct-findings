// roc 2009-12 00620320  unit: seg_00620000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620320
//
// 00620320  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620324  53                   push ebx
// 00620325  8b18                 mov ebx, dword ptr [eax]
// 00620327  55                   push ebp
// 00620328  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0062032c  56                   push esi
// 0062032d  33f6                 xor esi, esi
// 0062032f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00620335  7e4e                 jle 0x620385
// 00620337  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062033b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062033f  57                   push edi
// 00620340  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00620343  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00620346  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062034a  8b3a                 mov edi, dword ptr [edx]
// 0062034c  03c8                 add ecx, eax
// 0062034e  3bc1                 cmp eax, ecx
// 00620350  730d                 jae 0x62035f
// 00620352  8a17                 mov dl, byte ptr [edi]
// 00620354  8810                 mov byte ptr [eax], dl
// 00620356  40                   inc eax
// 00620357  8810                 mov byte ptr [eax], dl
// 00620359  40                   inc eax
// 0062035a  47                   inc edi
// 0062035b  3bc1                 cmp eax, ecx
// 0062035d  72f3                 jb 0x620352
// 0062035f  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00620362  50                   push eax
// 00620363  6a01                 push 1
// 00620365  8d4e01               lea ecx, [esi + 1]
// 00620368  51                   push ecx
// 00620369  53                   push ebx
// 0062036a  56                   push esi
// 0062036b  53                   push ebx
// 0062036c  e81fb9feff           call 0x60bc90
// 00620371  8344243804           add dword ptr [esp + 0x38], 4
// 00620376  83c602               add esi, 2
// 00620379  83c418               add esp, 0x18
// 0062037c  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 00620382  7cbc                 jl 0x620340
// 00620384  5f                   pop edi
// 00620385  5e                   pop esi
// 00620386  5d                   pop ebp
// 00620387  5b                   pop ebx
// 00620388  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
