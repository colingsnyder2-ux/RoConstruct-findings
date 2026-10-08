// roc 2009-12 00622af0  unit: seg_00620000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622af0
//
// 00622af0  83ec10               sub esp, 0x10
// 00622af3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00622af7  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00622afd  53                   push ebx
// 00622afe  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 00622b01  56                   push esi
// 00622b02  8b7064               mov esi, dword ptr [eax + 0x64]
// 00622b05  8b442428             mov eax, dword ptr [esp + 0x28]
// 00622b09  57                   push edi
// 00622b0a  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00622b0d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00622b11  85c0                 test eax, eax
// 00622b13  7e7a                 jle 0x622b8f
// 00622b15  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00622b19  55                   push ebp
// 00622b1a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00622b1e  8bd1                 mov edx, ecx
// 00622b20  2be9                 sub ebp, ecx
// 00622b22  89542410             mov dword ptr [esp + 0x10], edx
// 00622b26  896c2418             mov dword ptr [esp + 0x18], ebp
// 00622b2a  89442414             mov dword ptr [esp + 0x14], eax
// 00622b2e  8bff                 mov edi, edi
// 00622b30  8b02                 mov eax, dword ptr [edx]
// 00622b32  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 00622b35  89442424             mov dword ptr [esp + 0x24], eax
// 00622b39  895c2430             mov dword ptr [esp + 0x30], ebx
// 00622b3d  85db                 test ebx, ebx
// 00622b3f  763f                 jbe 0x622b80
// 00622b41  33d2                 xor edx, edx
// 00622b43  33c0                 xor eax, eax
// 00622b45  85f6                 test esi, esi
// 00622b47  7e19                 jle 0x622b62
// 00622b49  8da42400000000       lea esp, [esp]
// 00622b50  0fb619               movzx ebx, byte ptr [ecx]
// 00622b53  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 00622b56  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00622b5a  40                   inc eax
// 00622b5b  03d3                 add edx, ebx
// 00622b5d  41                   inc ecx
// 00622b5e  3bc6                 cmp eax, esi
// 00622b60  7cee                 jl 0x622b50
// 00622b62  8b442424             mov eax, dword ptr [esp + 0x24]
// 00622b66  8810                 mov byte ptr [eax], dl
// 00622b68  40                   inc eax
// 00622b69  836c243001           sub dword ptr [esp + 0x30], 1
// 00622b6e  89442424             mov dword ptr [esp + 0x24], eax
// 00622b72  75cd                 jne 0x622b41
// 00622b74  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00622b78  8b542410             mov edx, dword ptr [esp + 0x10]
// 00622b7c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00622b80  83c204               add edx, 4
// 00622b83  836c241401           sub dword ptr [esp + 0x14], 1
// 00622b88  89542410             mov dword ptr [esp + 0x10], edx
// 00622b8c  75a2                 jne 0x622b30
// 00622b8e  5d                   pop ebp
// 00622b8f  5f                   pop edi
// 00622b90  5e                   pop esi
// 00622b91  5b                   pop ebx
// 00622b92  83c410               add esp, 0x10
// 00622b95  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
