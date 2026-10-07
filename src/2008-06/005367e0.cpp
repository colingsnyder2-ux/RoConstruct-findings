// roc 2008-06 005367e0  unit: seg_00530000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005367e0
//
// 005367e0  83ec10               sub esp, 0x10
// 005367e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005367e7  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 005367ed  53                   push ebx
// 005367ee  8b585c               mov ebx, dword ptr [eax + 0x5c]
// 005367f1  56                   push esi
// 005367f2  8b7064               mov esi, dword ptr [eax + 0x64]
// 005367f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005367f9  57                   push edi
// 005367fa  8b7918               mov edi, dword ptr [ecx + 0x18]
// 005367fd  895c2418             mov dword ptr [esp + 0x18], ebx
// 00536801  85c0                 test eax, eax
// 00536803  7e7a                 jle 0x53687f
// 00536805  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00536809  55                   push ebp
// 0053680a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0053680e  8bd1                 mov edx, ecx
// 00536810  2be9                 sub ebp, ecx
// 00536812  89542410             mov dword ptr [esp + 0x10], edx
// 00536816  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053681a  89442414             mov dword ptr [esp + 0x14], eax
// 0053681e  8bff                 mov edi, edi
// 00536820  8b02                 mov eax, dword ptr [edx]
// 00536822  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 00536825  89442424             mov dword ptr [esp + 0x24], eax
// 00536829  895c2430             mov dword ptr [esp + 0x30], ebx
// 0053682d  85db                 test ebx, ebx
// 0053682f  763f                 jbe 0x536870
// 00536831  33d2                 xor edx, edx
// 00536833  33c0                 xor eax, eax
// 00536835  85f6                 test esi, esi
// 00536837  7e19                 jle 0x536852
// 00536839  8da42400000000       lea esp, [esp]
// 00536840  0fb619               movzx ebx, byte ptr [ecx]
// 00536843  8b2c87               mov ebp, dword ptr [edi + eax*4]
// 00536846  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0053684a  40                   inc eax
// 0053684b  03d3                 add edx, ebx
// 0053684d  41                   inc ecx
// 0053684e  3bc6                 cmp eax, esi
// 00536850  7cee                 jl 0x536840
// 00536852  8b442424             mov eax, dword ptr [esp + 0x24]
// 00536856  8810                 mov byte ptr [eax], dl
// 00536858  40                   inc eax
// 00536859  836c243001           sub dword ptr [esp + 0x30], 1
// 0053685e  89442424             mov dword ptr [esp + 0x24], eax
// 00536862  75cd                 jne 0x536831
// 00536864  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00536868  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053686c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00536870  83c204               add edx, 4
// 00536873  836c241401           sub dword ptr [esp + 0x14], 1
// 00536878  89542410             mov dword ptr [esp + 0x10], edx
// 0053687c  75a2                 jne 0x536820
// 0053687e  5d                   pop ebp
// 0053687f  5f                   pop edi
// 00536880  5e                   pop esi
// 00536881  5b                   pop ebx
// 00536882  83c410               add esp, 0x10
// 00536885  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
