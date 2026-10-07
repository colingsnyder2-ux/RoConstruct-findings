// roc 2012-06 00666170  unit: seg_00660000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666170
//
// 00666170  83ec24               sub esp, 0x24
// 00666173  8b442428             mov eax, dword ptr [esp + 0x28]
// 00666177  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0066617a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0066617d  56                   push esi
// 0066617e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00666184  8b442438             mov eax, dword ptr [esp + 0x38]
// 00666188  8974240c             mov dword ptr [esp + 0xc], esi
// 0066618c  894c2404             mov dword ptr [esp + 4], ecx
// 00666190  8954242c             mov dword ptr [esp + 0x2c], edx
// 00666194  85c0                 test eax, eax
// 00666196  0f8edf000000         jle 0x66627b
// 0066619c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006661a0  53                   push ebx
// 006661a1  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 006661a5  55                   push ebp
// 006661a6  2bcb                 sub ecx, ebx
// 006661a8  57                   push edi
// 006661a9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006661ad  894c2428             mov dword ptr [esp + 0x28], ecx
// 006661b1  89442420             mov dword ptr [esp + 0x20], eax
// 006661b5  8b442438             mov eax, dword ptr [esp + 0x38]
// 006661b9  8b0b                 mov ecx, dword ptr [ebx]
// 006661bb  50                   push eax
// 006661bc  51                   push ecx
// 006661bd  e88ed3feff           call 0x653550
// 006661c2  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006661c5  33d2                 xor edx, edx
// 006661c7  83c408               add esp, 8
// 006661ca  39542410             cmp dword ptr [esp + 0x10], edx
// 006661ce  896c2430             mov dword ptr [esp + 0x30], ebp
// 006661d2  89542414             mov dword ptr [esp + 0x14], edx
// 006661d6  0f8e83000000         jle 0x66625f
// 006661dc  c1e506               shl ebp, 6
// 006661df  8d4634               lea eax, [esi + 0x34]
// 006661e2  896c2424             mov dword ptr [esp + 0x24], ebp
// 006661e6  89442444             mov dword ptr [esp + 0x44], eax
// 006661ea  eb08                 jmp 0x6661f4
// 006661ec  8d642400             lea esp, [esp]
// 006661f0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006661f4  8b7618               mov esi, dword ptr [esi + 0x18]
// 006661f7  8b3496               mov esi, dword ptr [esi + edx*4]
// 006661fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006661fe  8b0419               mov eax, dword ptr [ecx + ebx]
// 00666201  8b0b                 mov ecx, dword ptr [ebx]
// 00666203  8974242c             mov dword ptr [esp + 0x2c], esi
// 00666207  8b742444             mov esi, dword ptr [esp + 0x44]
// 0066620b  8b3e                 mov edi, dword ptr [esi]
// 0066620d  03fd                 add edi, ebp
// 0066620f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00666213  03c2                 add eax, edx
// 00666215  33f6                 xor esi, esi
// 00666217  85ed                 test ebp, ebp
// 00666219  762c                 jbe 0x666247
// 0066621b  eb03                 jmp 0x666220
// 0066621d  8d4900               lea ecx, [ecx]
// 00666220  0fb610               movzx edx, byte ptr [eax]
// 00666223  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 00666226  03442410             add eax, dword ptr [esp + 0x10]
// 0066622a  03da                 add ebx, edx
// 0066622c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00666230  8a1413               mov dl, byte ptr [ebx + edx]
// 00666233  0011                 add byte ptr [ecx], dl
// 00666235  46                   inc esi
// 00666236  41                   inc ecx
// 00666237  83e60f               and esi, 0xf
// 0066623a  83ed01               sub ebp, 1
// 0066623d  75e1                 jne 0x666220
// 0066623f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00666243  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00666247  8344244404           add dword ptr [esp + 0x44], 4
// 0066624c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00666250  42                   inc edx
// 00666251  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00666255  89542414             mov dword ptr [esp + 0x14], edx
// 00666259  7c95                 jl 0x6661f0
// 0066625b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0066625f  45                   inc ebp
// 00666260  83e50f               and ebp, 0xf
// 00666263  83c304               add ebx, 4
// 00666266  836c242001           sub dword ptr [esp + 0x20], 1
// 0066626b  896e30               mov dword ptr [esi + 0x30], ebp
// 0066626e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00666272  0f853dffffff         jne 0x6661b5
// 00666278  5f                   pop edi
// 00666279  5d                   pop ebp
// 0066627a  5b                   pop ebx
// 0066627b  5e                   pop esi
// 0066627c  83c424               add esp, 0x24
// 0066627f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
