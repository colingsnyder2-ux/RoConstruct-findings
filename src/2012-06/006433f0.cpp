// roc 2012-06 006433f0  unit: seg_00640000  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006433f0
//
// 006433f0  83ec1c               sub esp, 0x1c
// 006433f3  8b442420             mov eax, dword ptr [esp + 0x20]
// 006433f7  53                   push ebx
// 006433f8  55                   push ebp
// 006433f9  56                   push esi
// 006433fa  8b7018               mov esi, dword ptr [eax + 0x18]
// 006433fd  8b6e04               mov ebp, dword ptr [esi + 4]
// 00643400  8b1e                 mov ebx, dword ptr [esi]
// 00643402  89742414             mov dword ptr [esp + 0x14], esi
// 00643406  85ed                 test ebp, ebp
// 00643408  7519                 jne 0x643423
// 0064340a  50                   push eax
// 0064340b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0064340e  ffd0                 call eax
// 00643410  83c404               add esp, 4
// 00643413  84c0                 test al, al
// 00643415  7507                 jne 0x64341e
// 00643417  5e                   pop esi
// 00643418  5d                   pop ebp
// 00643419  5b                   pop ebx
// 0064341a  83c41c               add esp, 0x1c
// 0064341d  c3                   ret 
// 0064341e  8b1e                 mov ebx, dword ptr [esi]
// 00643420  8b6e04               mov ebp, dword ptr [esi + 4]
// 00643423  57                   push edi
// 00643424  0fb63b               movzx edi, byte ptr [ebx]
// 00643427  4d                   dec ebp
// 00643428  c1e708               shl edi, 8
// 0064342b  43                   inc ebx
// 0064342c  85ed                 test ebp, ebp
// 0064342e  751a                 jne 0x64344a
// 00643430  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00643434  8b560c               mov edx, dword ptr [esi + 0xc]
// 00643437  51                   push ecx
// 00643438  ffd2                 call edx
// 0064343a  83c404               add esp, 4
// 0064343d  84c0                 test al, al
// 0064343f  0f84ab000000         je 0x6434f0
// 00643445  8b1e                 mov ebx, dword ptr [esi]
// 00643447  8b6e04               mov ebp, dword ptr [esi + 4]
// 0064344a  0fb603               movzx eax, byte ptr [ebx]
// 0064344d  03f8                 add edi, eax
// 0064344f  83ef02               sub edi, 2
// 00643452  4d                   dec ebp
// 00643453  43                   inc ebx
// 00643454  83ff0e               cmp edi, 0xe
// 00643457  7c0b                 jl 0x643464
// 00643459  b80e000000           mov eax, 0xe
// 0064345e  89442410             mov dword ptr [esp + 0x10], eax
// 00643462  eb10                 jmp 0x643474
// 00643464  33c9                 xor ecx, ecx
// 00643466  85ff                 test edi, edi
// 00643468  0f9ec1               setle cl
// 0064346b  49                   dec ecx
// 0064346c  23cf                 and ecx, edi
// 0064346e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00643472  8bc1                 mov eax, ecx
// 00643474  33c9                 xor ecx, ecx
// 00643476  894c2414             mov dword ptr [esp + 0x14], ecx
// 0064347a  85c0                 test eax, eax
// 0064347c  7635                 jbe 0x6434b3
// 0064347e  8bff                 mov edi, edi
// 00643480  85ed                 test ebp, ebp
// 00643482  751e                 jne 0x6434a2
// 00643484  8b542430             mov edx, dword ptr [esp + 0x30]
// 00643488  8b460c               mov eax, dword ptr [esi + 0xc]
// 0064348b  52                   push edx
// 0064348c  ffd0                 call eax
// 0064348e  83c404               add esp, 4
// 00643491  84c0                 test al, al
// 00643493  745b                 je 0x6434f0
// 00643495  8b1e                 mov ebx, dword ptr [esi]
// 00643497  8b6e04               mov ebp, dword ptr [esi + 4]
// 0064349a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064349e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006434a2  8a13                 mov dl, byte ptr [ebx]
// 006434a4  88540c1c             mov byte ptr [esp + ecx + 0x1c], dl
// 006434a8  41                   inc ecx
// 006434a9  4d                   dec ebp
// 006434aa  43                   inc ebx
// 006434ab  894c2414             mov dword ptr [esp + 0x14], ecx
// 006434af  3bc8                 cmp ecx, eax
// 006434b1  72cd                 jb 0x643480
// 006434b3  8b542430             mov edx, dword ptr [esp + 0x30]
// 006434b7  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 006434bd  2bf8                 sub edi, eax
// 006434bf  81e9e0000000         sub ecx, 0xe0
// 006434c5  897c2414             mov dword ptr [esp + 0x14], edi
// 006434c9  7442                 je 0x64350d
// 006434cb  83e90e               sub ecx, 0xe
// 006434ce  742a                 je 0x6434fa
// 006434d0  8b02                 mov eax, dword ptr [edx]
// 006434d2  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 006434d9  8b0a                 mov ecx, dword ptr [edx]
// 006434db  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 006434e1  894118               mov dword ptr [ecx + 0x18], eax
// 006434e4  8b0a                 mov ecx, dword ptr [edx]
// 006434e6  52                   push edx
// 006434e7  8b11                 mov edx, dword ptr [ecx]
// 006434e9  ffd2                 call edx
// 006434eb  83c404               add esp, 4
// 006434ee  eb32                 jmp 0x643522
// 006434f0  5f                   pop edi
// 006434f1  5e                   pop esi
// 006434f2  5d                   pop ebp
// 006434f3  32c0                 xor al, al
// 006434f5  5b                   pop ebx
// 006434f6  83c41c               add esp, 0x1c
// 006434f9  c3                   ret 
// 006434fa  8bc8                 mov ecx, eax
// 006434fc  57                   push edi
// 006434fd  8d442420             lea eax, [esp + 0x20]
// 00643501  8bf2                 mov esi, edx
// 00643503  e838feffff           call 0x643340
// 00643508  83c404               add esp, 4
// 0064350b  eb11                 jmp 0x64351e
// 0064350d  8bcf                 mov ecx, edi
// 0064350f  8d7c241c             lea edi, [esp + 0x1c]
// 00643513  8bf2                 mov esi, edx
// 00643515  e8c6fbffff           call 0x6430e0
// 0064351a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0064351e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00643522  891e                 mov dword ptr [esi], ebx
// 00643524  896e04               mov dword ptr [esi + 4], ebp
// 00643527  85ff                 test edi, edi
// 00643529  7e11                 jle 0x64353c
// 0064352b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0064352f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00643532  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00643535  57                   push edi
// 00643536  50                   push eax
// 00643537  ffd2                 call edx
// 00643539  83c408               add esp, 8
// 0064353c  5f                   pop edi
// 0064353d  5e                   pop esi
// 0064353e  5d                   pop ebp
// 0064353f  b001                 mov al, 1
// 00643541  5b                   pop ebx
// 00643542  83c41c               add esp, 0x1c
// 00643545  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
