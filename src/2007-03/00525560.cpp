// roc 2007-03 00525560  unit: seg_00520000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525560
//
// 00525560  83ec24               sub esp, 0x24
// 00525563  8b442428             mov eax, dword ptr [esp + 0x28]
// 00525567  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0052556a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0052556d  56                   push esi
// 0052556e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00525574  8b442438             mov eax, dword ptr [esp + 0x38]
// 00525578  85c0                 test eax, eax
// 0052557a  8974240c             mov dword ptr [esp + 0xc], esi
// 0052557e  894c2404             mov dword ptr [esp + 4], ecx
// 00525582  8954242c             mov dword ptr [esp + 0x2c], edx
// 00525586  0f8ee7000000         jle 0x525673
// 0052558c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00525590  53                   push ebx
// 00525591  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00525595  55                   push ebp
// 00525596  2bcb                 sub ecx, ebx
// 00525598  57                   push edi
// 00525599  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052559d  894c2428             mov dword ptr [esp + 0x28], ecx
// 005255a1  89442420             mov dword ptr [esp + 0x20], eax
// 005255a5  8b442438             mov eax, dword ptr [esp + 0x38]
// 005255a9  8b0b                 mov ecx, dword ptr [ebx]
// 005255ab  50                   push eax
// 005255ac  51                   push ecx
// 005255ad  e8fef0feff           call 0x5146b0
// 005255b2  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 005255b5  33d2                 xor edx, edx
// 005255b7  83c408               add esp, 8
// 005255ba  39542410             cmp dword ptr [esp + 0x10], edx
// 005255be  896c2430             mov dword ptr [esp + 0x30], ebp
// 005255c2  89542414             mov dword ptr [esp + 0x14], edx
// 005255c6  0f8e89000000         jle 0x525655
// 005255cc  c1e506               shl ebp, 6
// 005255cf  8d4634               lea eax, [esi + 0x34]
// 005255d2  896c2424             mov dword ptr [esp + 0x24], ebp
// 005255d6  89442444             mov dword ptr [esp + 0x44], eax
// 005255da  eb08                 jmp 0x5255e4
// 005255dc  8d642400             lea esp, [esp]
// 005255e0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005255e4  8b7618               mov esi, dword ptr [esi + 0x18]
// 005255e7  8b3496               mov esi, dword ptr [esi + edx*4]
// 005255ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005255ee  8b0419               mov eax, dword ptr [ecx + ebx]
// 005255f1  8b0b                 mov ecx, dword ptr [ebx]
// 005255f3  8974242c             mov dword ptr [esp + 0x2c], esi
// 005255f7  8b742444             mov esi, dword ptr [esp + 0x44]
// 005255fb  8b3e                 mov edi, dword ptr [esi]
// 005255fd  03fd                 add edi, ebp
// 005255ff  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00525603  03c2                 add eax, edx
// 00525605  33f6                 xor esi, esi
// 00525607  85ed                 test ebp, ebp
// 00525609  7630                 jbe 0x52563b
// 0052560b  eb03                 jmp 0x525610
// 0052560d  8d4900               lea ecx, [ecx]
// 00525610  0fb610               movzx edx, byte ptr [eax]
// 00525613  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 00525616  03442410             add eax, dword ptr [esp + 0x10]
// 0052561a  03da                 add ebx, edx
// 0052561c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00525620  8a1413               mov dl, byte ptr [ebx + edx]
// 00525623  0011                 add byte ptr [ecx], dl
// 00525625  83c601               add esi, 1
// 00525628  83c101               add ecx, 1
// 0052562b  83e60f               and esi, 0xf
// 0052562e  83ed01               sub ebp, 1
// 00525631  75dd                 jne 0x525610
// 00525633  8b542414             mov edx, dword ptr [esp + 0x14]
// 00525637  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052563b  8344244404           add dword ptr [esp + 0x44], 4
// 00525640  8b742418             mov esi, dword ptr [esp + 0x18]
// 00525644  83c201               add edx, 1
// 00525647  3b542410             cmp edx, dword ptr [esp + 0x10]
// 0052564b  89542414             mov dword ptr [esp + 0x14], edx
// 0052564f  7c8f                 jl 0x5255e0
// 00525651  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00525655  83c501               add ebp, 1
// 00525658  83e50f               and ebp, 0xf
// 0052565b  83c304               add ebx, 4
// 0052565e  836c242001           sub dword ptr [esp + 0x20], 1
// 00525663  896e30               mov dword ptr [esi + 0x30], ebp
// 00525666  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052566a  0f8535ffffff         jne 0x5255a5
// 00525670  5f                   pop edi
// 00525671  5d                   pop ebp
// 00525672  5b                   pop ebx
// 00525673  5e                   pop esi
// 00525674  83c424               add esp, 0x24
// 00525677  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
