// from server: 100% by auto
// roc 2012-06 00666010  unit: seg_00660000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666010
//
// 00666010  83ec10               sub esp, 0x10
// 00666013  8b442414             mov eax, dword ptr [esp + 0x14]
// 00666017  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0066601d  53                   push ebx
// 0066601e  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 00666021  56                   push esi
// 00666022  8b7064               mov esi, dword ptr [eax + 0x64]
// 00666025  8b442428             mov eax, dword ptr [esp + 0x28]
// 00666029  57                   push edi
// 0066602a  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0066602d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00666031  85c0                 test eax, eax
// 00666033  7e7a                 jle 0x6660af
// 00666035  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00666039  55                   push ebp
// 0066603a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066603e  8bd1                 mov edx, ecx
// 00666040  2be9                 sub ebp, ecx
// 00666042  89542410             mov dword ptr [esp + 0x10], edx
// 00666046  896c2418             mov dword ptr [esp + 0x18], ebp
// 0066604a  89442414             mov dword ptr [esp + 0x14], eax
// 0066604e  8bff                 mov edi, edi
// 00666050  8b02                 mov eax, dword ptr [edx]
// 00666052  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 00666055  89442424             mov dword ptr [esp + 0x24], eax
// 00666059  895c2430             mov dword ptr [esp + 0x30], ebx
// 0066605d  85db                 test ebx, ebx
// 0066605f  763f                 jbe 0x6660a0
// 00666061  33d2                 xor edx, edx
// 00666063  33c0                 xor eax, eax
// 00666065  85f6                 test esi, esi
// 00666067  7e19                 jle 0x666082
// 00666069  8da42400000000       lea esp, [esp]
// 00666070  0fb619               movzx ebx, byte ptr [ecx]
// 00666073  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 00666076  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0066607a  40                   inc eax
// 0066607b  03d3                 add edx, ebx
// 0066607d  41                   inc ecx
// 0066607e  3bc6                 cmp eax, esi
// 00666080  7cee                 jl 0x666070
// 00666082  8b442424             mov eax, dword ptr [esp + 0x24]
// 00666086  8810                 mov byte ptr [eax], dl
// 00666088  40                   inc eax
// 00666089  836c243001           sub dword ptr [esp + 0x30], 1
// 0066608e  89442424             mov dword ptr [esp + 0x24], eax
// 00666092  75cd                 jne 0x666061
// 00666094  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00666098  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066609c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006660a0  83c204               add edx, 4
// 006660a3  836c241401           sub dword ptr [esp + 0x14], 1
// 006660a8  89542410             mov dword ptr [esp + 0x10], edx
// 006660ac  75a2                 jne 0x666050
// 006660ae  5d                   pop ebp
// 006660af  5f                   pop edi
// 006660b0  5e                   pop esi
// 006660b1  5b                   pop ebx
// 006660b2  83c410               add esp, 0x10
// 006660b5  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
