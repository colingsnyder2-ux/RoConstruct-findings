// roc 2007-08 0052a7d0  unit: seg_00520000  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a7d0
//
// 0052a7d0  83ec10               sub esp, 0x10
// 0052a7d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052a7d7  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 0052a7dd  8b4018               mov eax, dword ptr [eax + 0x18]
// 0052a7e0  8b5004               mov edx, dword ptr [eax + 4]
// 0052a7e3  56                   push esi
// 0052a7e4  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 0052a7e7  57                   push edi
// 0052a7e8  8b38                 mov edi, dword ptr [eax]
// 0052a7ea  8b4008               mov eax, dword ptr [eax + 8]
// 0052a7ed  8944240c             mov dword ptr [esp + 0xc], eax
// 0052a7f1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052a7f5  85c0                 test eax, eax
// 0052a7f7  89542408             mov dword ptr [esp + 8], edx
// 0052a7fb  89742410             mov dword ptr [esp + 0x10], esi
// 0052a7ff  0f8e7d000000         jle 0x52a882
// 0052a805  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052a809  53                   push ebx
// 0052a80a  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052a80e  2bd9                 sub ebx, ecx
// 0052a810  55                   push ebp
// 0052a811  894c2424             mov dword ptr [esp + 0x24], ecx
// 0052a815  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052a819  89442430             mov dword ptr [esp + 0x30], eax
// 0052a81d  8d4900               lea ecx, [ecx]
// 0052a820  85f6                 test esi, esi
// 0052a822  8b040b               mov eax, dword ptr [ebx + ecx]
// 0052a825  8b11                 mov edx, dword ptr [ecx]
// 0052a827  7649                 jbe 0x52a872
// 0052a829  8da42400000000       lea esp, [esp]
// 0052a830  0fb608               movzx ecx, byte ptr [eax]
// 0052a833  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0052a837  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052a83b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052a83f  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 0052a843  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052a847  83c001               add eax, 1
// 0052a84a  03cb                 add ecx, ebx
// 0052a84c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0052a850  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052a854  83c001               add eax, 1
// 0052a857  03cb                 add ecx, ebx
// 0052a859  880a                 mov byte ptr [edx], cl
// 0052a85b  83c001               add eax, 1
// 0052a85e  83c201               add edx, 1
// 0052a861  83ee01               sub esi, 1
// 0052a864  75ca                 jne 0x52a830
// 0052a866  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052a86a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052a86e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052a872  83c104               add ecx, 4
// 0052a875  836c243001           sub dword ptr [esp + 0x30], 1
// 0052a87a  894c2424             mov dword ptr [esp + 0x24], ecx
// 0052a87e  75a0                 jne 0x52a820
// 0052a880  5d                   pop ebp
// 0052a881  5b                   pop ebx
// 0052a882  5f                   pop edi
// 0052a883  5e                   pop esi
// 0052a884  83c410               add esp, 0x10
// 0052a887  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
