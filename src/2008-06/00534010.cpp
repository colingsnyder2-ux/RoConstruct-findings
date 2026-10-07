// roc 2008-06 00534010  unit: seg_00530000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534010
//
// 00534010  8b442410             mov eax, dword ptr [esp + 0x10]
// 00534014  53                   push ebx
// 00534015  8b18                 mov ebx, dword ptr [eax]
// 00534017  55                   push ebp
// 00534018  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0053401c  56                   push esi
// 0053401d  33f6                 xor esi, esi
// 0053401f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00534025  7e4e                 jle 0x534075
// 00534027  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053402b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053402f  57                   push edi
// 00534030  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00534033  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00534036  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053403a  8b3a                 mov edi, dword ptr [edx]
// 0053403c  03c8                 add ecx, eax
// 0053403e  3bc1                 cmp eax, ecx
// 00534040  730d                 jae 0x53404f
// 00534042  8a17                 mov dl, byte ptr [edi]
// 00534044  8810                 mov byte ptr [eax], dl
// 00534046  40                   inc eax
// 00534047  8810                 mov byte ptr [eax], dl
// 00534049  40                   inc eax
// 0053404a  47                   inc edi
// 0053404b  3bc1                 cmp eax, ecx
// 0053404d  72f3                 jb 0x534042
// 0053404f  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00534052  50                   push eax
// 00534053  6a01                 push 1
// 00534055  8d4e01               lea ecx, [esi + 1]
// 00534058  51                   push ecx
// 00534059  53                   push ebx
// 0053405a  56                   push esi
// 0053405b  53                   push ebx
// 0053405c  e8cf1affff           call 0x525b30
// 00534061  8344243804           add dword ptr [esp + 0x38], 4
// 00534066  83c602               add esi, 2
// 00534069  83c418               add esp, 0x18
// 0053406c  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 00534072  7cbc                 jl 0x534030
// 00534074  5f                   pop edi
// 00534075  5e                   pop esi
// 00534076  5d                   pop ebp
// 00534077  5b                   pop ebx
// 00534078  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
