// from server: 100% by auto
// roc 2010-06 005847b0  unit: seg_00580000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005847b0
//
// 005847b0  83ec24               sub esp, 0x24
// 005847b3  8b442428             mov eax, dword ptr [esp + 0x28]
// 005847b7  8b4864               mov ecx, dword ptr [eax + 0x64]
// 005847ba  8b505c               mov edx, dword ptr [eax + 0x5c]
// 005847bd  56                   push esi
// 005847be  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 005847c4  8b442438             mov eax, dword ptr [esp + 0x38]
// 005847c8  8974240c             mov dword ptr [esp + 0xc], esi
// 005847cc  894c2404             mov dword ptr [esp + 4], ecx
// 005847d0  8954242c             mov dword ptr [esp + 0x2c], edx
// 005847d4  85c0                 test eax, eax
// 005847d6  0f8edf000000         jle 0x5848bb
// 005847dc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005847e0  53                   push ebx
// 005847e1  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005847e5  55                   push ebp
// 005847e6  2bcb                 sub ecx, ebx
// 005847e8  57                   push edi
// 005847e9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005847ed  894c2428             mov dword ptr [esp + 0x28], ecx
// 005847f1  89442420             mov dword ptr [esp + 0x20], eax
// 005847f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 005847f9  8b0b                 mov ecx, dword ptr [ebx]
// 005847fb  50                   push eax
// 005847fc  51                   push ecx
// 005847fd  e8de8bfeff           call 0x56d3e0
// 00584802  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00584805  33d2                 xor edx, edx
// 00584807  83c408               add esp, 8
// 0058480a  39542410             cmp dword ptr [esp + 0x10], edx
// 0058480e  896c2430             mov dword ptr [esp + 0x30], ebp
// 00584812  89542414             mov dword ptr [esp + 0x14], edx
// 00584816  0f8e83000000         jle 0x58489f
// 0058481c  c1e506               shl ebp, 6
// 0058481f  8d4634               lea eax, [esi + 0x34]
// 00584822  896c2424             mov dword ptr [esp + 0x24], ebp
// 00584826  89442444             mov dword ptr [esp + 0x44], eax
// 0058482a  eb08                 jmp 0x584834
// 0058482c  8d642400             lea esp, [esp]
// 00584830  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00584834  8b7618               mov esi, dword ptr [esi + 0x18]
// 00584837  8b3496               mov esi, dword ptr [esi + edx*4]
// 0058483a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058483e  8b0419               mov eax, dword ptr [ecx + ebx]
// 00584841  8b0b                 mov ecx, dword ptr [ebx]
// 00584843  8974242c             mov dword ptr [esp + 0x2c], esi
// 00584847  8b742444             mov esi, dword ptr [esp + 0x44]
// 0058484b  8b3e                 mov edi, dword ptr [esi]
// 0058484d  03fd                 add edi, ebp
// 0058484f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00584853  03c2                 add eax, edx
// 00584855  33f6                 xor esi, esi
// 00584857  85ed                 test ebp, ebp
// 00584859  762c                 jbe 0x584887
// 0058485b  eb03                 jmp 0x584860
// 0058485d  8d4900               lea ecx, [ecx]
// 00584860  0fb610               movzx edx, byte ptr [eax]
// 00584863  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 00584866  03442410             add eax, dword ptr [esp + 0x10]
// 0058486a  03da                 add ebx, edx
// 0058486c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00584870  8a1413               mov dl, byte ptr [ebx + edx]
// 00584873  0011                 add byte ptr [ecx], dl
// 00584875  46                   inc esi
// 00584876  41                   inc ecx
// 00584877  83e60f               and esi, 0xf
// 0058487a  83ed01               sub ebp, 1
// 0058487d  75e1                 jne 0x584860
// 0058487f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00584883  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00584887  8344244404           add dword ptr [esp + 0x44], 4
// 0058488c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00584890  42                   inc edx
// 00584891  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00584895  89542414             mov dword ptr [esp + 0x14], edx
// 00584899  7c95                 jl 0x584830
// 0058489b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0058489f  45                   inc ebp
// 005848a0  83e50f               and ebp, 0xf
// 005848a3  83c304               add ebx, 4
// 005848a6  836c242001           sub dword ptr [esp + 0x20], 1
// 005848ab  896e30               mov dword ptr [esi + 0x30], ebp
// 005848ae  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005848b2  0f853dffffff         jne 0x5847f5
// 005848b8  5f                   pop edi
// 005848b9  5d                   pop ebp
// 005848ba  5b                   pop ebx
// 005848bb  5e                   pop esi
// 005848bc  83c424               add esp, 0x24
// 005848bf  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
