// roc 2010-06 00584650  unit: seg_00580000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584650
//
// 00584650  83ec10               sub esp, 0x10
// 00584653  8b442414             mov eax, dword ptr [esp + 0x14]
// 00584657  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0058465d  53                   push ebx
// 0058465e  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 00584661  56                   push esi
// 00584662  8b7064               mov esi, dword ptr [eax + 0x64]
// 00584665  8b442428             mov eax, dword ptr [esp + 0x28]
// 00584669  57                   push edi
// 0058466a  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0058466d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00584671  85c0                 test eax, eax
// 00584673  7e7a                 jle 0x5846ef
// 00584675  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00584679  55                   push ebp
// 0058467a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0058467e  8bd1                 mov edx, ecx
// 00584680  2be9                 sub ebp, ecx
// 00584682  89542410             mov dword ptr [esp + 0x10], edx
// 00584686  896c2418             mov dword ptr [esp + 0x18], ebp
// 0058468a  89442414             mov dword ptr [esp + 0x14], eax
// 0058468e  8bff                 mov edi, edi
// 00584690  8b02                 mov eax, dword ptr [edx]
// 00584692  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 00584695  89442424             mov dword ptr [esp + 0x24], eax
// 00584699  895c2430             mov dword ptr [esp + 0x30], ebx
// 0058469d  85db                 test ebx, ebx
// 0058469f  763f                 jbe 0x5846e0
// 005846a1  33d2                 xor edx, edx
// 005846a3  33c0                 xor eax, eax
// 005846a5  85f6                 test esi, esi
// 005846a7  7e19                 jle 0x5846c2
// 005846a9  8da42400000000       lea esp, [esp]
// 005846b0  0fb619               movzx ebx, byte ptr [ecx]
// 005846b3  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 005846b6  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005846ba  40                   inc eax
// 005846bb  03d3                 add edx, ebx
// 005846bd  41                   inc ecx
// 005846be  3bc6                 cmp eax, esi
// 005846c0  7cee                 jl 0x5846b0
// 005846c2  8b442424             mov eax, dword ptr [esp + 0x24]
// 005846c6  8810                 mov byte ptr [eax], dl
// 005846c8  40                   inc eax
// 005846c9  836c243001           sub dword ptr [esp + 0x30], 1
// 005846ce  89442424             mov dword ptr [esp + 0x24], eax
// 005846d2  75cd                 jne 0x5846a1
// 005846d4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005846d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005846dc  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005846e0  83c204               add edx, 4
// 005846e3  836c241401           sub dword ptr [esp + 0x14], 1
// 005846e8  89542410             mov dword ptr [esp + 0x10], edx
// 005846ec  75a2                 jne 0x584690
// 005846ee  5d                   pop ebp
// 005846ef  5f                   pop edi
// 005846f0  5e                   pop esi
// 005846f1  5b                   pop ebx
// 005846f2  83c410               add esp, 0x10
// 005846f5  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
