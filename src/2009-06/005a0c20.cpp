// roc 2009-06 005a0c20  unit: seg_005a0000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0c20
//
// 005a0c20  83ec24               sub esp, 0x24
// 005a0c23  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a0c27  8b4864               mov ecx, dword ptr [eax + 0x64]
// 005a0c2a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 005a0c2d  56                   push esi
// 005a0c2e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 005a0c34  8b442438             mov eax, dword ptr [esp + 0x38]
// 005a0c38  8974240c             mov dword ptr [esp + 0xc], esi
// 005a0c3c  894c2404             mov dword ptr [esp + 4], ecx
// 005a0c40  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a0c44  85c0                 test eax, eax
// 005a0c46  0f8edf000000         jle 0x5a0d2b
// 005a0c4c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a0c50  53                   push ebx
// 005a0c51  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005a0c55  55                   push ebp
// 005a0c56  2bcb                 sub ecx, ebx
// 005a0c58  57                   push edi
// 005a0c59  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a0c5d  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a0c61  89442420             mov dword ptr [esp + 0x20], eax
// 005a0c65  8b442438             mov eax, dword ptr [esp + 0x38]
// 005a0c69  8b0b                 mov ecx, dword ptr [ebx]
// 005a0c6b  50                   push eax
// 005a0c6c  51                   push ecx
// 005a0c6d  e83e92feff           call 0x589eb0
// 005a0c72  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 005a0c75  33d2                 xor edx, edx
// 005a0c77  83c408               add esp, 8
// 005a0c7a  39542410             cmp dword ptr [esp + 0x10], edx
// 005a0c7e  896c2430             mov dword ptr [esp + 0x30], ebp
// 005a0c82  89542414             mov dword ptr [esp + 0x14], edx
// 005a0c86  0f8e83000000         jle 0x5a0d0f
// 005a0c8c  c1e506               shl ebp, 6
// 005a0c8f  8d4634               lea eax, [esi + 0x34]
// 005a0c92  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a0c96  89442444             mov dword ptr [esp + 0x44], eax
// 005a0c9a  eb08                 jmp 0x5a0ca4
// 005a0c9c  8d642400             lea esp, [esp]
// 005a0ca0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a0ca4  8b7618               mov esi, dword ptr [esi + 0x18]
// 005a0ca7  8b3496               mov esi, dword ptr [esi + edx*4]
// 005a0caa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a0cae  8b0419               mov eax, dword ptr [ecx + ebx]
// 005a0cb1  8b0b                 mov ecx, dword ptr [ebx]
// 005a0cb3  8974242c             mov dword ptr [esp + 0x2c], esi
// 005a0cb7  8b742444             mov esi, dword ptr [esp + 0x44]
// 005a0cbb  8b3e                 mov edi, dword ptr [esi]
// 005a0cbd  03fd                 add edi, ebp
// 005a0cbf  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005a0cc3  03c2                 add eax, edx
// 005a0cc5  33f6                 xor esi, esi
// 005a0cc7  85ed                 test ebp, ebp
// 005a0cc9  762c                 jbe 0x5a0cf7
// 005a0ccb  eb03                 jmp 0x5a0cd0
// 005a0ccd  8d4900               lea ecx, [ecx]
// 005a0cd0  0fb610               movzx edx, byte ptr [eax]
// 005a0cd3  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 005a0cd6  03442410             add eax, dword ptr [esp + 0x10]
// 005a0cda  03da                 add ebx, edx
// 005a0cdc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a0ce0  8a1413               mov dl, byte ptr [ebx + edx]
// 005a0ce3  0011                 add byte ptr [ecx], dl
// 005a0ce5  46                   inc esi
// 005a0ce6  41                   inc ecx
// 005a0ce7  83e60f               and esi, 0xf
// 005a0cea  83ed01               sub ebp, 1
// 005a0ced  75e1                 jne 0x5a0cd0
// 005a0cef  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a0cf3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a0cf7  8344244404           add dword ptr [esp + 0x44], 4
// 005a0cfc  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a0d00  42                   inc edx
// 005a0d01  3b542410             cmp edx, dword ptr [esp + 0x10]
// 005a0d05  89542414             mov dword ptr [esp + 0x14], edx
// 005a0d09  7c95                 jl 0x5a0ca0
// 005a0d0b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005a0d0f  45                   inc ebp
// 005a0d10  83e50f               and ebp, 0xf
// 005a0d13  83c304               add ebx, 4
// 005a0d16  836c242001           sub dword ptr [esp + 0x20], 1
// 005a0d1b  896e30               mov dword ptr [esi + 0x30], ebp
// 005a0d1e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a0d22  0f853dffffff         jne 0x5a0c65
// 005a0d28  5f                   pop edi
// 005a0d29  5d                   pop ebp
// 005a0d2a  5b                   pop ebx
// 005a0d2b  5e                   pop esi
// 005a0d2c  83c424               add esp, 0x24
// 005a0d2f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
