// roc 2009-06 005a0ac0  unit: seg_005a0000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0ac0
//
// 005a0ac0  83ec10               sub esp, 0x10
// 005a0ac3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a0ac7  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 005a0acd  53                   push ebx
// 005a0ace  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 005a0ad1  56                   push esi
// 005a0ad2  8b7064               mov esi, dword ptr [eax + 0x64]
// 005a0ad5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a0ad9  57                   push edi
// 005a0ada  8b7918               mov edi, dword ptr [ecx + 0x18]
// 005a0add  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a0ae1  85c0                 test eax, eax
// 005a0ae3  7e7a                 jle 0x5a0b5f
// 005a0ae5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a0ae9  55                   push ebp
// 005a0aea  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a0aee  8bd1                 mov edx, ecx
// 005a0af0  2be9                 sub ebp, ecx
// 005a0af2  89542410             mov dword ptr [esp + 0x10], edx
// 005a0af6  896c2418             mov dword ptr [esp + 0x18], ebp
// 005a0afa  89442414             mov dword ptr [esp + 0x14], eax
// 005a0afe  8bff                 mov edi, edi
// 005a0b00  8b02                 mov eax, dword ptr [edx]
// 005a0b02  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 005a0b05  89442424             mov dword ptr [esp + 0x24], eax
// 005a0b09  895c2430             mov dword ptr [esp + 0x30], ebx
// 005a0b0d  85db                 test ebx, ebx
// 005a0b0f  763f                 jbe 0x5a0b50
// 005a0b11  33d2                 xor edx, edx
// 005a0b13  33c0                 xor eax, eax
// 005a0b15  85f6                 test esi, esi
// 005a0b17  7e19                 jle 0x5a0b32
// 005a0b19  8da42400000000       lea esp, [esp]
// 005a0b20  0fb619               movzx ebx, byte ptr [ecx]
// 005a0b23  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 005a0b26  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005a0b2a  40                   inc eax
// 005a0b2b  03d3                 add edx, ebx
// 005a0b2d  41                   inc ecx
// 005a0b2e  3bc6                 cmp eax, esi
// 005a0b30  7cee                 jl 0x5a0b20
// 005a0b32  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a0b36  8810                 mov byte ptr [eax], dl
// 005a0b38  40                   inc eax
// 005a0b39  836c243001           sub dword ptr [esp + 0x30], 1
// 005a0b3e  89442424             mov dword ptr [esp + 0x24], eax
// 005a0b42  75cd                 jne 0x5a0b11
// 005a0b44  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a0b48  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a0b4c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a0b50  83c204               add edx, 4
// 005a0b53  836c241401           sub dword ptr [esp + 0x14], 1
// 005a0b58  89542410             mov dword ptr [esp + 0x10], edx
// 005a0b5c  75a2                 jne 0x5a0b00
// 005a0b5e  5d                   pop ebp
// 005a0b5f  5f                   pop edi
// 005a0b60  5e                   pop esi
// 005a0b61  5b                   pop ebx
// 005a0b62  83c410               add esp, 0x10
// 005a0b65  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
