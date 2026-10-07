// roc 2007-08 0052a890  unit: seg_00520000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a890
//
// 0052a890  83ec24               sub esp, 0x24
// 0052a893  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052a897  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0052a89a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0052a89d  56                   push esi
// 0052a89e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0052a8a4  8b442438             mov eax, dword ptr [esp + 0x38]
// 0052a8a8  85c0                 test eax, eax
// 0052a8aa  8974240c             mov dword ptr [esp + 0xc], esi
// 0052a8ae  894c2404             mov dword ptr [esp + 4], ecx
// 0052a8b2  8954242c             mov dword ptr [esp + 0x2c], edx
// 0052a8b6  0f8ee7000000         jle 0x52a9a3
// 0052a8bc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052a8c0  53                   push ebx
// 0052a8c1  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0052a8c5  55                   push ebp
// 0052a8c6  2bcb                 sub ecx, ebx
// 0052a8c8  57                   push edi
// 0052a8c9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052a8cd  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052a8d1  89442420             mov dword ptr [esp + 0x20], eax
// 0052a8d5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0052a8d9  8b0b                 mov ecx, dword ptr [ebx]
// 0052a8db  50                   push eax
// 0052a8dc  51                   push ecx
// 0052a8dd  e80e3affff           call 0x51e2f0
// 0052a8e2  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 0052a8e5  33d2                 xor edx, edx
// 0052a8e7  83c408               add esp, 8
// 0052a8ea  39542410             cmp dword ptr [esp + 0x10], edx
// 0052a8ee  896c2430             mov dword ptr [esp + 0x30], ebp
// 0052a8f2  89542414             mov dword ptr [esp + 0x14], edx
// 0052a8f6  0f8e89000000         jle 0x52a985
// 0052a8fc  c1e506               shl ebp, 6
// 0052a8ff  8d4634               lea eax, [esi + 0x34]
// 0052a902  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052a906  89442444             mov dword ptr [esp + 0x44], eax
// 0052a90a  eb08                 jmp 0x52a914
// 0052a90c  8d642400             lea esp, [esp]
// 0052a910  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0052a914  8b7618               mov esi, dword ptr [esi + 0x18]
// 0052a917  8b3496               mov esi, dword ptr [esi + edx*4]
// 0052a91a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052a91e  8b0419               mov eax, dword ptr [ecx + ebx]
// 0052a921  8b0b                 mov ecx, dword ptr [ebx]
// 0052a923  8974242c             mov dword ptr [esp + 0x2c], esi
// 0052a927  8b742444             mov esi, dword ptr [esp + 0x44]
// 0052a92b  8b3e                 mov edi, dword ptr [esi]
// 0052a92d  03fd                 add edi, ebp
// 0052a92f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0052a933  03c2                 add eax, edx
// 0052a935  33f6                 xor esi, esi
// 0052a937  85ed                 test ebp, ebp
// 0052a939  7630                 jbe 0x52a96b
// 0052a93b  eb03                 jmp 0x52a940
// 0052a93d  8d4900               lea ecx, [ecx]
// 0052a940  0fb610               movzx edx, byte ptr [eax]
// 0052a943  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 0052a946  03442410             add eax, dword ptr [esp + 0x10]
// 0052a94a  03da                 add ebx, edx
// 0052a94c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052a950  8a1413               mov dl, byte ptr [ebx + edx]
// 0052a953  0011                 add byte ptr [ecx], dl
// 0052a955  83c601               add esi, 1
// 0052a958  83c101               add ecx, 1
// 0052a95b  83e60f               and esi, 0xf
// 0052a95e  83ed01               sub ebp, 1
// 0052a961  75dd                 jne 0x52a940
// 0052a963  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052a967  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052a96b  8344244404           add dword ptr [esp + 0x44], 4
// 0052a970  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052a974  83c201               add edx, 1
// 0052a977  3b542410             cmp edx, dword ptr [esp + 0x10]
// 0052a97b  89542414             mov dword ptr [esp + 0x14], edx
// 0052a97f  7c8f                 jl 0x52a910
// 0052a981  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0052a985  83c501               add ebp, 1
// 0052a988  83e50f               and ebp, 0xf
// 0052a98b  83c304               add ebx, 4
// 0052a98e  836c242001           sub dword ptr [esp + 0x20], 1
// 0052a993  896e30               mov dword ptr [esi + 0x30], ebp
// 0052a996  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052a99a  0f8535ffffff         jne 0x52a8d5
// 0052a9a0  5f                   pop edi
// 0052a9a1  5d                   pop ebp
// 0052a9a2  5b                   pop ebx
// 0052a9a3  5e                   pop esi
// 0052a9a4  83c424               add esp, 0x24
// 0052a9a7  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
