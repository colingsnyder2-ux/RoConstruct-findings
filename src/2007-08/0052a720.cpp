// from server: 100% by auto
// roc 2007-08 0052a720  unit: seg_00520000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a720
//
// 0052a720  83ec10               sub esp, 0x10
// 0052a723  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052a727  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0052a72d  53                   push ebx
// 0052a72e  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 0052a731  56                   push esi
// 0052a732  8b7064               mov esi, dword ptr [eax + 0x64]
// 0052a735  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052a739  85c0                 test eax, eax
// 0052a73b  57                   push edi
// 0052a73c  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0052a73f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052a743  0f8e7c000000         jle 0x52a7c5
// 0052a749  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052a74d  55                   push ebp
// 0052a74e  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052a752  8bd1                 mov edx, ecx
// 0052a754  2be9                 sub ebp, ecx
// 0052a756  89542410             mov dword ptr [esp + 0x10], edx
// 0052a75a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052a75e  89442414             mov dword ptr [esp + 0x14], eax
// 0052a762  85db                 test ebx, ebx
// 0052a764  8b02                 mov eax, dword ptr [edx]
// 0052a766  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 0052a769  89442424             mov dword ptr [esp + 0x24], eax
// 0052a76d  895c2430             mov dword ptr [esp + 0x30], ebx
// 0052a771  7643                 jbe 0x52a7b6
// 0052a773  33d2                 xor edx, edx
// 0052a775  33c0                 xor eax, eax
// 0052a777  85f6                 test esi, esi
// 0052a779  7e1b                 jle 0x52a796
// 0052a77b  eb03                 jmp 0x52a780
// 0052a77d  8d4900               lea ecx, [ecx]
// 0052a780  0fb619               movzx ebx, byte ptr [ecx]
// 0052a783  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 0052a786  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052a78a  83c001               add eax, 1
// 0052a78d  03d3                 add edx, ebx
// 0052a78f  83c101               add ecx, 1
// 0052a792  3bc6                 cmp eax, esi
// 0052a794  7cea                 jl 0x52a780
// 0052a796  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052a79a  8810                 mov byte ptr [eax], dl
// 0052a79c  83c001               add eax, 1
// 0052a79f  836c243001           sub dword ptr [esp + 0x30], 1
// 0052a7a4  89442424             mov dword ptr [esp + 0x24], eax
// 0052a7a8  75c9                 jne 0x52a773
// 0052a7aa  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052a7ae  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052a7b2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052a7b6  83c204               add edx, 4
// 0052a7b9  836c241401           sub dword ptr [esp + 0x14], 1
// 0052a7be  89542410             mov dword ptr [esp + 0x10], edx
// 0052a7c2  759e                 jne 0x52a762
// 0052a7c4  5d                   pop ebp
// 0052a7c5  5f                   pop edi
// 0052a7c6  5e                   pop esi
// 0052a7c7  5b                   pop ebx
// 0052a7c8  83c410               add esp, 0x10
// 0052a7cb  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
