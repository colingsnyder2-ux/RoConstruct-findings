// from server: 100% by auto
// roc 2011-06 0057aa60  unit: seg_00570000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057aa60
//
// 0057aa60  83ec24               sub esp, 0x24
// 0057aa63  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057aa67  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0057aa6a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0057aa6d  56                   push esi
// 0057aa6e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0057aa74  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057aa78  8974240c             mov dword ptr [esp + 0xc], esi
// 0057aa7c  894c2404             mov dword ptr [esp + 4], ecx
// 0057aa80  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057aa84  85c0                 test eax, eax
// 0057aa86  0f8edf000000         jle 0x57ab6b
// 0057aa8c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057aa90  53                   push ebx
// 0057aa91  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0057aa95  55                   push ebp
// 0057aa96  2bcb                 sub ecx, ebx
// 0057aa98  57                   push edi
// 0057aa99  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057aa9d  894c2428             mov dword ptr [esp + 0x28], ecx
// 0057aaa1  89442420             mov dword ptr [esp + 0x20], eax
// 0057aaa5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057aaa9  8b0b                 mov ecx, dword ptr [ebx]
// 0057aaab  50                   push eax
// 0057aaac  51                   push ecx
// 0057aaad  e88ed3feff           call 0x567e40
// 0057aab2  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 0057aab5  33d2                 xor edx, edx
// 0057aab7  83c408               add esp, 8
// 0057aaba  39542410             cmp dword ptr [esp + 0x10], edx
// 0057aabe  896c2430             mov dword ptr [esp + 0x30], ebp
// 0057aac2  89542414             mov dword ptr [esp + 0x14], edx
// 0057aac6  0f8e83000000         jle 0x57ab4f
// 0057aacc  c1e506               shl ebp, 6
// 0057aacf  8d4634               lea eax, [esi + 0x34]
// 0057aad2  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057aad6  89442444             mov dword ptr [esp + 0x44], eax
// 0057aada  eb08                 jmp 0x57aae4
// 0057aadc  8d642400             lea esp, [esp]
// 0057aae0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0057aae4  8b7618               mov esi, dword ptr [esi + 0x18]
// 0057aae7  8b3496               mov esi, dword ptr [esi + edx*4]
// 0057aaea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057aaee  8b0419               mov eax, dword ptr [ecx + ebx]
// 0057aaf1  8b0b                 mov ecx, dword ptr [ebx]
// 0057aaf3  8974242c             mov dword ptr [esp + 0x2c], esi
// 0057aaf7  8b742444             mov esi, dword ptr [esp + 0x44]
// 0057aafb  8b3e                 mov edi, dword ptr [esi]
// 0057aafd  03fd                 add edi, ebp
// 0057aaff  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0057ab03  03c2                 add eax, edx
// 0057ab05  33f6                 xor esi, esi
// 0057ab07  85ed                 test ebp, ebp
// 0057ab09  762c                 jbe 0x57ab37
// 0057ab0b  eb03                 jmp 0x57ab10
// 0057ab0d  8d4900               lea ecx, [ecx]
// 0057ab10  0fb610               movzx edx, byte ptr [eax]
// 0057ab13  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 0057ab16  03442410             add eax, dword ptr [esp + 0x10]
// 0057ab1a  03da                 add ebx, edx
// 0057ab1c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057ab20  8a1413               mov dl, byte ptr [ebx + edx]
// 0057ab23  0011                 add byte ptr [ecx], dl
// 0057ab25  46                   inc esi
// 0057ab26  41                   inc ecx
// 0057ab27  83e60f               and esi, 0xf
// 0057ab2a  83ed01               sub ebp, 1
// 0057ab2d  75e1                 jne 0x57ab10
// 0057ab2f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057ab33  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057ab37  8344244404           add dword ptr [esp + 0x44], 4
// 0057ab3c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057ab40  42                   inc edx
// 0057ab41  3b542410             cmp edx, dword ptr [esp + 0x10]
// 0057ab45  89542414             mov dword ptr [esp + 0x14], edx
// 0057ab49  7c95                 jl 0x57aae0
// 0057ab4b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0057ab4f  45                   inc ebp
// 0057ab50  83e50f               and ebp, 0xf
// 0057ab53  83c304               add ebx, 4
// 0057ab56  836c242001           sub dword ptr [esp + 0x20], 1
// 0057ab5b  896e30               mov dword ptr [esi + 0x30], ebp
// 0057ab5e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057ab62  0f853dffffff         jne 0x57aaa5
// 0057ab68  5f                   pop edi
// 0057ab69  5d                   pop ebp
// 0057ab6a  5b                   pop ebx
// 0057ab6b  5e                   pop esi
// 0057ab6c  83c424               add esp, 0x24
// 0057ab6f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
