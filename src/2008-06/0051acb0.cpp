// roc 2008-06 0051acb0  unit: G3D::_internal::DialogTemplate  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051acb0
//
// 0051acb0  83ec1c               sub esp, 0x1c
// 0051acb3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051acb7  53                   push ebx
// 0051acb8  55                   push ebp
// 0051acb9  56                   push esi
// 0051acba  8b7018               mov esi, dword ptr [eax + 0x18]
// 0051acbd  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051acc0  8b1e                 mov ebx, dword ptr [esi]
// 0051acc2  89742414             mov dword ptr [esp + 0x14], esi
// 0051acc6  85ed                 test ebp, ebp
// 0051acc8  7519                 jne 0x51ace3
// 0051acca  50                   push eax
// 0051accb  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051acce  ffd0                 call eax
// 0051acd0  83c404               add esp, 4
// 0051acd3  84c0                 test al, al
// 0051acd5  7507                 jne 0x51acde
// 0051acd7  5e                   pop esi
// 0051acd8  5d                   pop ebp
// 0051acd9  5b                   pop ebx
// 0051acda  83c41c               add esp, 0x1c
// 0051acdd  c3                   ret 
// 0051acde  8b1e                 mov ebx, dword ptr [esi]
// 0051ace0  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051ace3  57                   push edi
// 0051ace4  0fb63b               movzx edi, byte ptr [ebx]
// 0051ace7  4d                   dec ebp
// 0051ace8  c1e708               shl edi, 8
// 0051aceb  43                   inc ebx
// 0051acec  85ed                 test ebp, ebp
// 0051acee  751a                 jne 0x51ad0a
// 0051acf0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0051acf4  8b560c               mov edx, dword ptr [esi + 0xc]
// 0051acf7  51                   push ecx
// 0051acf8  ffd2                 call edx
// 0051acfa  83c404               add esp, 4
// 0051acfd  84c0                 test al, al
// 0051acff  0f84ab000000         je 0x51adb0
// 0051ad05  8b1e                 mov ebx, dword ptr [esi]
// 0051ad07  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051ad0a  0fb603               movzx eax, byte ptr [ebx]
// 0051ad0d  03f8                 add edi, eax
// 0051ad0f  83ef02               sub edi, 2
// 0051ad12  4d                   dec ebp
// 0051ad13  43                   inc ebx
// 0051ad14  83ff0e               cmp edi, 0xe
// 0051ad17  7c0b                 jl 0x51ad24
// 0051ad19  b80e000000           mov eax, 0xe
// 0051ad1e  89442410             mov dword ptr [esp + 0x10], eax
// 0051ad22  eb10                 jmp 0x51ad34
// 0051ad24  33c9                 xor ecx, ecx
// 0051ad26  85ff                 test edi, edi
// 0051ad28  0f9ec1               setle cl
// 0051ad2b  49                   dec ecx
// 0051ad2c  23cf                 and ecx, edi
// 0051ad2e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0051ad32  8bc1                 mov eax, ecx
// 0051ad34  33c9                 xor ecx, ecx
// 0051ad36  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051ad3a  85c0                 test eax, eax
// 0051ad3c  7635                 jbe 0x51ad73
// 0051ad3e  8bff                 mov edi, edi
// 0051ad40  85ed                 test ebp, ebp
// 0051ad42  751e                 jne 0x51ad62
// 0051ad44  8b542430             mov edx, dword ptr [esp + 0x30]
// 0051ad48  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051ad4b  52                   push edx
// 0051ad4c  ffd0                 call eax
// 0051ad4e  83c404               add esp, 4
// 0051ad51  84c0                 test al, al
// 0051ad53  745b                 je 0x51adb0
// 0051ad55  8b1e                 mov ebx, dword ptr [esi]
// 0051ad57  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051ad5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051ad5e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051ad62  8a13                 mov dl, byte ptr [ebx]
// 0051ad64  88540c1c             mov byte ptr [esp + ecx + 0x1c], dl
// 0051ad68  41                   inc ecx
// 0051ad69  4d                   dec ebp
// 0051ad6a  43                   inc ebx
// 0051ad6b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051ad6f  3bc8                 cmp ecx, eax
// 0051ad71  72cd                 jb 0x51ad40
// 0051ad73  8b542430             mov edx, dword ptr [esp + 0x30]
// 0051ad77  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 0051ad7d  2bf8                 sub edi, eax
// 0051ad7f  81e9e0000000         sub ecx, 0xe0
// 0051ad85  897c2414             mov dword ptr [esp + 0x14], edi
// 0051ad89  7442                 je 0x51adcd
// 0051ad8b  83e90e               sub ecx, 0xe
// 0051ad8e  742a                 je 0x51adba
// 0051ad90  8b02                 mov eax, dword ptr [edx]
// 0051ad92  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 0051ad99  8b0a                 mov ecx, dword ptr [edx]
// 0051ad9b  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 0051ada1  894118               mov dword ptr [ecx + 0x18], eax
// 0051ada4  8b0a                 mov ecx, dword ptr [edx]
// 0051ada6  52                   push edx
// 0051ada7  8b11                 mov edx, dword ptr [ecx]
// 0051ada9  ffd2                 call edx
// 0051adab  83c404               add esp, 4
// 0051adae  eb32                 jmp 0x51ade2
// 0051adb0  5f                   pop edi
// 0051adb1  5e                   pop esi
// 0051adb2  5d                   pop ebp
// 0051adb3  32c0                 xor al, al
// 0051adb5  5b                   pop ebx
// 0051adb6  83c41c               add esp, 0x1c
// 0051adb9  c3                   ret 
// 0051adba  8bc8                 mov ecx, eax
// 0051adbc  57                   push edi
// 0051adbd  8d442420             lea eax, [esp + 0x20]
// 0051adc1  8bf2                 mov esi, edx
// 0051adc3  e838feffff           call 0x51ac00
// 0051adc8  83c404               add esp, 4
// 0051adcb  eb11                 jmp 0x51adde
// 0051adcd  8bcf                 mov ecx, edi
// 0051adcf  8d7c241c             lea edi, [esp + 0x1c]
// 0051add3  8bf2                 mov esi, edx
// 0051add5  e8c6fbffff           call 0x51a9a0
// 0051adda  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051adde  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051ade2  891e                 mov dword ptr [esi], ebx
// 0051ade4  896e04               mov dword ptr [esi + 4], ebp
// 0051ade7  85ff                 test edi, edi
// 0051ade9  7e11                 jle 0x51adfc
// 0051adeb  8b442430             mov eax, dword ptr [esp + 0x30]
// 0051adef  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0051adf2  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0051adf5  57                   push edi
// 0051adf6  50                   push eax
// 0051adf7  ffd2                 call edx
// 0051adf9  83c408               add esp, 8
// 0051adfc  5f                   pop edi
// 0051adfd  5e                   pop esi
// 0051adfe  5d                   pop ebp
// 0051adff  b001                 mov al, 1
// 0051ae01  5b                   pop ebx
// 0051ae02  83c41c               add esp, 0x1c
// 0051ae05  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
