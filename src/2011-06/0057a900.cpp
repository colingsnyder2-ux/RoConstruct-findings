// from server: 100% by auto
// roc 2011-06 0057a900  unit: seg_00570000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a900
//
// 0057a900  83ec10               sub esp, 0x10
// 0057a903  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057a907  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0057a90d  53                   push ebx
// 0057a90e  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 0057a911  56                   push esi
// 0057a912  8b7064               mov esi, dword ptr [eax + 0x64]
// 0057a915  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057a919  57                   push edi
// 0057a91a  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0057a91d  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057a921  85c0                 test eax, eax
// 0057a923  7e7a                 jle 0x57a99f
// 0057a925  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057a929  55                   push ebp
// 0057a92a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057a92e  8bd1                 mov edx, ecx
// 0057a930  2be9                 sub ebp, ecx
// 0057a932  89542410             mov dword ptr [esp + 0x10], edx
// 0057a936  896c2418             mov dword ptr [esp + 0x18], ebp
// 0057a93a  89442414             mov dword ptr [esp + 0x14], eax
// 0057a93e  8bff                 mov edi, edi
// 0057a940  8b02                 mov eax, dword ptr [edx]
// 0057a942  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 0057a945  89442424             mov dword ptr [esp + 0x24], eax
// 0057a949  895c2430             mov dword ptr [esp + 0x30], ebx
// 0057a94d  85db                 test ebx, ebx
// 0057a94f  763f                 jbe 0x57a990
// 0057a951  33d2                 xor edx, edx
// 0057a953  33c0                 xor eax, eax
// 0057a955  85f6                 test esi, esi
// 0057a957  7e19                 jle 0x57a972
// 0057a959  8da42400000000       lea esp, [esp]
// 0057a960  0fb619               movzx ebx, byte ptr [ecx]
// 0057a963  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 0057a966  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0057a96a  40                   inc eax
// 0057a96b  03d3                 add edx, ebx
// 0057a96d  41                   inc ecx
// 0057a96e  3bc6                 cmp eax, esi
// 0057a970  7cee                 jl 0x57a960
// 0057a972  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057a976  8810                 mov byte ptr [eax], dl
// 0057a978  40                   inc eax
// 0057a979  836c243001           sub dword ptr [esp + 0x30], 1
// 0057a97e  89442424             mov dword ptr [esp + 0x24], eax
// 0057a982  75cd                 jne 0x57a951
// 0057a984  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057a988  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057a98c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057a990  83c204               add edx, 4
// 0057a993  836c241401           sub dword ptr [esp + 0x14], 1
// 0057a998  89542410             mov dword ptr [esp + 0x10], edx
// 0057a99c  75a2                 jne 0x57a940
// 0057a99e  5d                   pop ebp
// 0057a99f  5f                   pop edi
// 0057a9a0  5e                   pop esi
// 0057a9a1  5b                   pop ebx
// 0057a9a2  83c410               add esp, 0x10
// 0057a9a5  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
