// from server: 100% by auto
// roc 2008-06 00536940  unit: seg_00530000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536940
//
// 00536940  83ec24               sub esp, 0x24
// 00536943  8b442428             mov eax, dword ptr [esp + 0x28]
// 00536947  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0053694a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0053694d  56                   push esi
// 0053694e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00536954  8b442438             mov eax, dword ptr [esp + 0x38]
// 00536958  8974240c             mov dword ptr [esp + 0xc], esi
// 0053695c  894c2404             mov dword ptr [esp + 4], ecx
// 00536960  8954242c             mov dword ptr [esp + 0x2c], edx
// 00536964  85c0                 test eax, eax
// 00536966  0f8edf000000         jle 0x536a4b
// 0053696c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00536970  53                   push ebx
// 00536971  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00536975  55                   push ebp
// 00536976  2bcb                 sub ecx, ebx
// 00536978  57                   push edi
// 00536979  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053697d  894c2428             mov dword ptr [esp + 0x28], ecx
// 00536981  89442420             mov dword ptr [esp + 0x20], eax
// 00536985  8b442438             mov eax, dword ptr [esp + 0x38]
// 00536989  8b0b                 mov ecx, dword ptr [ebx]
// 0053698b  50                   push eax
// 0053698c  51                   push ecx
// 0053698d  e80ef2feff           call 0x525ba0
// 00536992  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00536995  33d2                 xor edx, edx
// 00536997  83c408               add esp, 8
// 0053699a  39542410             cmp dword ptr [esp + 0x10], edx
// 0053699e  896c2430             mov dword ptr [esp + 0x30], ebp
// 005369a2  89542414             mov dword ptr [esp + 0x14], edx
// 005369a6  0f8e83000000         jle 0x536a2f
// 005369ac  c1e506               shl ebp, 6
// 005369af  8d4634               lea eax, [esi + 0x34]
// 005369b2  896c2424             mov dword ptr [esp + 0x24], ebp
// 005369b6  89442444             mov dword ptr [esp + 0x44], eax
// 005369ba  eb08                 jmp 0x5369c4
// 005369bc  8d642400             lea esp, [esp]
// 005369c0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005369c4  8b7618               mov esi, dword ptr [esi + 0x18]
// 005369c7  8b3496               mov esi, dword ptr [esi + edx*4]
// 005369ca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005369ce  8b0419               mov eax, dword ptr [ecx + ebx]
// 005369d1  8b0b                 mov ecx, dword ptr [ebx]
// 005369d3  8974242c             mov dword ptr [esp + 0x2c], esi
// 005369d7  8b742444             mov esi, dword ptr [esp + 0x44]
// 005369db  8b3e                 mov edi, dword ptr [esi]
// 005369dd  03fd                 add edi, ebp
// 005369df  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005369e3  03c2                 add eax, edx
// 005369e5  33f6                 xor esi, esi
// 005369e7  85ed                 test ebp, ebp
// 005369e9  762c                 jbe 0x536a17
// 005369eb  eb03                 jmp 0x5369f0
// 005369ed  8d4900               lea ecx, [ecx]
// 005369f0  0fb610               movzx edx, byte ptr [eax]
// 005369f3  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 005369f6  03442410             add eax, dword ptr [esp + 0x10]
// 005369fa  03da                 add ebx, edx
// 005369fc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00536a00  8a1413               mov dl, byte ptr [ebx + edx]
// 00536a03  0011                 add byte ptr [ecx], dl
// 00536a05  46                   inc esi
// 00536a06  41                   inc ecx
// 00536a07  83e60f               and esi, 0xf
// 00536a0a  83ed01               sub ebp, 1
// 00536a0d  75e1                 jne 0x5369f0
// 00536a0f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00536a13  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00536a17  8344244404           add dword ptr [esp + 0x44], 4
// 00536a1c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00536a20  42                   inc edx
// 00536a21  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00536a25  89542414             mov dword ptr [esp + 0x14], edx
// 00536a29  7c95                 jl 0x5369c0
// 00536a2b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00536a2f  45                   inc ebp
// 00536a30  83e50f               and ebp, 0xf
// 00536a33  83c304               add ebx, 4
// 00536a36  836c242001           sub dword ptr [esp + 0x20], 1
// 00536a3b  896e30               mov dword ptr [esi + 0x30], ebp
// 00536a3e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00536a42  0f853dffffff         jne 0x536985
// 00536a48  5f                   pop edi
// 00536a49  5d                   pop ebp
// 00536a4a  5b                   pop ebx
// 00536a4b  5e                   pop esi
// 00536a4c  83c424               add esp, 0x24
// 00536a4f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
