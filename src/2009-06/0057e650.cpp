// from server: 100% by auto
// roc 2009-06 0057e650  unit: G3D::_internal::DialogTemplate  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e650
//
// 0057e650  83ec1c               sub esp, 0x1c
// 0057e653  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057e657  53                   push ebx
// 0057e658  55                   push ebp
// 0057e659  56                   push esi
// 0057e65a  8b7018               mov esi, dword ptr [eax + 0x18]
// 0057e65d  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e660  8b1e                 mov ebx, dword ptr [esi]
// 0057e662  89742414             mov dword ptr [esp + 0x14], esi
// 0057e666  85ed                 test ebp, ebp
// 0057e668  7519                 jne 0x57e683
// 0057e66a  50                   push eax
// 0057e66b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057e66e  ffd0                 call eax
// 0057e670  83c404               add esp, 4
// 0057e673  84c0                 test al, al
// 0057e675  7507                 jne 0x57e67e
// 0057e677  5e                   pop esi
// 0057e678  5d                   pop ebp
// 0057e679  5b                   pop ebx
// 0057e67a  83c41c               add esp, 0x1c
// 0057e67d  c3                   ret 
// 0057e67e  8b1e                 mov ebx, dword ptr [esi]
// 0057e680  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e683  57                   push edi
// 0057e684  0fb63b               movzx edi, byte ptr [ebx]
// 0057e687  4d                   dec ebp
// 0057e688  c1e708               shl edi, 8
// 0057e68b  43                   inc ebx
// 0057e68c  85ed                 test ebp, ebp
// 0057e68e  751a                 jne 0x57e6aa
// 0057e690  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057e694  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057e697  51                   push ecx
// 0057e698  ffd2                 call edx
// 0057e69a  83c404               add esp, 4
// 0057e69d  84c0                 test al, al
// 0057e69f  0f84ab000000         je 0x57e750
// 0057e6a5  8b1e                 mov ebx, dword ptr [esi]
// 0057e6a7  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e6aa  0fb603               movzx eax, byte ptr [ebx]
// 0057e6ad  03f8                 add edi, eax
// 0057e6af  83ef02               sub edi, 2
// 0057e6b2  4d                   dec ebp
// 0057e6b3  43                   inc ebx
// 0057e6b4  83ff0e               cmp edi, 0xe
// 0057e6b7  7c0b                 jl 0x57e6c4
// 0057e6b9  b80e000000           mov eax, 0xe
// 0057e6be  89442410             mov dword ptr [esp + 0x10], eax
// 0057e6c2  eb10                 jmp 0x57e6d4
// 0057e6c4  33c9                 xor ecx, ecx
// 0057e6c6  85ff                 test edi, edi
// 0057e6c8  0f9ec1               setle cl
// 0057e6cb  49                   dec ecx
// 0057e6cc  23cf                 and ecx, edi
// 0057e6ce  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057e6d2  8bc1                 mov eax, ecx
// 0057e6d4  33c9                 xor ecx, ecx
// 0057e6d6  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057e6da  85c0                 test eax, eax
// 0057e6dc  7635                 jbe 0x57e713
// 0057e6de  8bff                 mov edi, edi
// 0057e6e0  85ed                 test ebp, ebp
// 0057e6e2  751e                 jne 0x57e702
// 0057e6e4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057e6e8  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057e6eb  52                   push edx
// 0057e6ec  ffd0                 call eax
// 0057e6ee  83c404               add esp, 4
// 0057e6f1  84c0                 test al, al
// 0057e6f3  745b                 je 0x57e750
// 0057e6f5  8b1e                 mov ebx, dword ptr [esi]
// 0057e6f7  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e6fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057e6fe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057e702  8a13                 mov dl, byte ptr [ebx]
// 0057e704  88540c1c             mov byte ptr [esp + ecx + 0x1c], dl
// 0057e708  41                   inc ecx
// 0057e709  4d                   dec ebp
// 0057e70a  43                   inc ebx
// 0057e70b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057e70f  3bc8                 cmp ecx, eax
// 0057e711  72cd                 jb 0x57e6e0
// 0057e713  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057e717  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 0057e71d  2bf8                 sub edi, eax
// 0057e71f  81e9e0000000         sub ecx, 0xe0
// 0057e725  897c2414             mov dword ptr [esp + 0x14], edi
// 0057e729  7442                 je 0x57e76d
// 0057e72b  83e90e               sub ecx, 0xe
// 0057e72e  742a                 je 0x57e75a
// 0057e730  8b02                 mov eax, dword ptr [edx]
// 0057e732  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 0057e739  8b0a                 mov ecx, dword ptr [edx]
// 0057e73b  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 0057e741  894118               mov dword ptr [ecx + 0x18], eax
// 0057e744  8b0a                 mov ecx, dword ptr [edx]
// 0057e746  52                   push edx
// 0057e747  8b11                 mov edx, dword ptr [ecx]
// 0057e749  ffd2                 call edx
// 0057e74b  83c404               add esp, 4
// 0057e74e  eb32                 jmp 0x57e782
// 0057e750  5f                   pop edi
// 0057e751  5e                   pop esi
// 0057e752  5d                   pop ebp
// 0057e753  32c0                 xor al, al
// 0057e755  5b                   pop ebx
// 0057e756  83c41c               add esp, 0x1c
// 0057e759  c3                   ret 
// 0057e75a  8bc8                 mov ecx, eax
// 0057e75c  57                   push edi
// 0057e75d  8d442420             lea eax, [esp + 0x20]
// 0057e761  8bf2                 mov esi, edx
// 0057e763  e838feffff           call 0x57e5a0
// 0057e768  83c404               add esp, 4
// 0057e76b  eb11                 jmp 0x57e77e
// 0057e76d  8bcf                 mov ecx, edi
// 0057e76f  8d7c241c             lea edi, [esp + 0x1c]
// 0057e773  8bf2                 mov esi, edx
// 0057e775  e8c6fbffff           call 0x57e340
// 0057e77a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057e77e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057e782  891e                 mov dword ptr [esi], ebx
// 0057e784  896e04               mov dword ptr [esi + 4], ebp
// 0057e787  85ff                 test edi, edi
// 0057e789  7e11                 jle 0x57e79c
// 0057e78b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057e78f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0057e792  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0057e795  57                   push edi
// 0057e796  50                   push eax
// 0057e797  ffd2                 call edx
// 0057e799  83c408               add esp, 8
// 0057e79c  5f                   pop edi
// 0057e79d  5e                   pop esi
// 0057e79e  5d                   pop ebp
// 0057e79f  b001                 mov al, 1
// 0057e7a1  5b                   pop ebx
// 0057e7a2  83c41c               add esp, 0x1c
// 0057e7a5  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
