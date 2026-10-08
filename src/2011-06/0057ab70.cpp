// from server: 100% by auto
// roc 2011-06 0057ab70  unit: seg_00570000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ab70
//
// 0057ab70  83ec28               sub esp, 0x28
// 0057ab73  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057ab77  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 0057ab7d  8b4218               mov eax, dword ptr [edx + 0x18]
// 0057ab80  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 0057ab83  56                   push esi
// 0057ab84  8b30                 mov esi, dword ptr [eax]
// 0057ab86  89742414             mov dword ptr [esp + 0x14], esi
// 0057ab8a  8b7004               mov esi, dword ptr [eax + 4]
// 0057ab8d  8b4008               mov eax, dword ptr [eax + 8]
// 0057ab90  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057ab94  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057ab98  89542424             mov dword ptr [esp + 0x24], edx
// 0057ab9c  89742418             mov dword ptr [esp + 0x18], esi
// 0057aba0  89442420             mov dword ptr [esp + 0x20], eax
// 0057aba4  85c9                 test ecx, ecx
// 0057aba6  0f8ee0000000         jle 0x57ac8c
// 0057abac  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057abb0  53                   push ebx
// 0057abb1  55                   push ebp
// 0057abb2  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0057abb6  2bc5                 sub eax, ebp
// 0057abb8  57                   push edi
// 0057abb9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057abbd  89442418             mov dword ptr [esp + 0x18], eax
// 0057abc1  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057abc5  eb0d                 jmp 0x57abd4
// 0057abc7  eb07                 jmp 0x57abd0
// 0057abc9  8da42400000000       lea esp, [esp]
// 0057abd0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057abd4  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 0057abd7  8b7500               mov esi, dword ptr [ebp]
// 0057abda  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 0057abdd  8b7a38               mov edi, dword ptr [edx + 0x38]
// 0057abe0  8b0428               mov eax, dword ptr [eax + ebp]
// 0057abe3  894c2434             mov dword ptr [esp + 0x34], ecx
// 0057abe7  c1e106               shl ecx, 6
// 0057abea  03d9                 add ebx, ecx
// 0057abec  8974243c             mov dword ptr [esp + 0x3c], esi
// 0057abf0  8b7234               mov esi, dword ptr [edx + 0x34]
// 0057abf3  03f1                 add esi, ecx
// 0057abf5  03f9                 add edi, ecx
// 0057abf7  895c2428             mov dword ptr [esp + 0x28], ebx
// 0057abfb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057abff  33c9                 xor ecx, ecx
// 0057ac01  895c2448             mov dword ptr [esp + 0x48], ebx
// 0057ac05  85db                 test ebx, ebx
// 0057ac07  7663                 jbe 0x57ac6c
// 0057ac09  8da42400000000       lea esp, [esp]
// 0057ac10  0fb610               movzx edx, byte ptr [eax]
// 0057ac13  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 0057ac16  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 0057ac19  03da                 add ebx, edx
// 0057ac1b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057ac1f  0fb61413             movzx edx, byte ptr [ebx + edx]
// 0057ac23  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057ac27  03eb                 add ebp, ebx
// 0057ac29  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0057ac2d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0057ac31  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057ac35  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 0057ac39  40                   inc eax
// 0057ac3a  03d3                 add edx, ebx
// 0057ac3c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057ac40  40                   inc eax
// 0057ac41  03eb                 add ebp, ebx
// 0057ac43  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0057ac47  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0057ac4b  03d3                 add edx, ebx
// 0057ac4d  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0057ac51  41                   inc ecx
// 0057ac52  8813                 mov byte ptr [ebx], dl
// 0057ac54  43                   inc ebx
// 0057ac55  40                   inc eax
// 0057ac56  83e10f               and ecx, 0xf
// 0057ac59  836c244801           sub dword ptr [esp + 0x48], 1
// 0057ac5e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0057ac62  75ac                 jne 0x57ac10
// 0057ac64  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057ac68  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057ac6c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057ac70  40                   inc eax
// 0057ac71  83e00f               and eax, 0xf
// 0057ac74  83c504               add ebp, 4
// 0057ac77  836c241401           sub dword ptr [esp + 0x14], 1
// 0057ac7c  894230               mov dword ptr [edx + 0x30], eax
// 0057ac7f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057ac83  0f8547ffffff         jne 0x57abd0
// 0057ac89  5f                   pop edi
// 0057ac8a  5d                   pop ebp
// 0057ac8b  5b                   pop ebx
// 0057ac8c  5e                   pop esi
// 0057ac8d  83c428               add esp, 0x28
// 0057ac90  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
