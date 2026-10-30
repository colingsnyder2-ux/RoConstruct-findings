// from server: 100% by auto
// roc 2011-06 0055cc40  unit: seg_00550000  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055cc40
//
// 0055cc40  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0055cc44  53                   push ebx
// 0055cc45  55                   push ebp
// 0055cc46  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0055cc4a  8a4508               mov al, byte ptr [ebp + 8]
// 0055cc4d  8bda                 mov ebx, edx
// 0055cc4f  56                   push esi
// 0055cc50  8b7500               mov esi, dword ptr [ebp]
// 0055cc53  c1eb08               shr ebx, 8
// 0055cc56  57                   push edi
// 0055cc57  885c2414             mov byte ptr [esp + 0x14], bl
// 0055cc5b  84c0                 test al, al
// 0055cc5d  0f8511010000         jne 0x55cd74
// 0055cc63  8a4509               mov al, byte ptr [ebp + 9]
// 0055cc66  3c08                 cmp al, 8
// 0055cc68  7568                 jne 0x55ccd2
// 0055cc6a  f644242080           test byte ptr [esp + 0x20], 0x80
// 0055cc6f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055cc73  8d3c06               lea edi, [esi + eax]
// 0055cc76  8d0437               lea eax, [edi + esi]
// 0055cc79  742d                 je 0x55cca8
// 0055cc7b  83fe01               cmp esi, 1
// 0055cc7e  7612                 jbe 0x55cc92
// 0055cc80  8d4eff               lea ecx, [esi - 1]
// 0055cc83  48                   dec eax
// 0055cc84  8810                 mov byte ptr [eax], dl
// 0055cc86  8a5fff               mov bl, byte ptr [edi - 1]
// 0055cc89  4f                   dec edi
// 0055cc8a  48                   dec eax
// 0055cc8b  83e901               sub ecx, 1
// 0055cc8e  8818                 mov byte ptr [eax], bl
// 0055cc90  75f1                 jne 0x55cc83
// 0055cc92  5f                   pop edi
// 0055cc93  8850ff               mov byte ptr [eax - 1], dl
// 0055cc96  8d0c36               lea ecx, [esi + esi]
// 0055cc99  5e                   pop esi
// 0055cc9a  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0055cc9e  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 0055cca2  894d04               mov dword ptr [ebp + 4], ecx
// 0055cca5  5d                   pop ebp
// 0055cca6  5b                   pop ebx
// 0055cca7  c3                   ret 
// 0055cca8  85f6                 test esi, esi
// 0055ccaa  7613                 jbe 0x55ccbf
// 0055ccac  8bce                 mov ecx, esi
// 0055ccae  8bff                 mov edi, edi
// 0055ccb0  8a5fff               mov bl, byte ptr [edi - 1]
// 0055ccb3  4f                   dec edi
// 0055ccb4  48                   dec eax
// 0055ccb5  8818                 mov byte ptr [eax], bl
// 0055ccb7  48                   dec eax
// 0055ccb8  83e901               sub ecx, 1
// 0055ccbb  8810                 mov byte ptr [eax], dl
// 0055ccbd  75f1                 jne 0x55ccb0
// 0055ccbf  5f                   pop edi
// 0055ccc0  8d0c36               lea ecx, [esi + esi]
// 0055ccc3  5e                   pop esi
// 0055ccc4  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0055ccc8  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 0055cccc  894d04               mov dword ptr [ebp + 4], ecx
// 0055cccf  5d                   pop ebp
// 0055ccd0  5b                   pop ebx
// 0055ccd1  c3                   ret 
// 0055ccd2  3c10                 cmp al, 0x10
// 0055ccd4  0f8500020000         jne 0x55ceda
// 0055ccda  f644242080           test byte ptr [esp + 0x20], 0x80
// 0055ccdf  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055cce3  8d3c70               lea edi, [eax + esi*2]
// 0055cce6  8d0477               lea eax, [edi + esi*2]
// 0055cce9  7448                 je 0x55cd33
// 0055cceb  83fe01               cmp esi, 1
// 0055ccee  7625                 jbe 0x55cd15
// 0055ccf0  8d4eff               lea ecx, [esi - 1]
// 0055ccf3  894c2414             mov dword ptr [esp + 0x14], ecx
// 0055ccf7  8858ff               mov byte ptr [eax - 1], bl
// 0055ccfa  48                   dec eax
// 0055ccfb  48                   dec eax
// 0055ccfc  8810                 mov byte ptr [eax], dl
// 0055ccfe  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 0055cd02  4f                   dec edi
// 0055cd03  48                   dec eax
// 0055cd04  8808                 mov byte ptr [eax], cl
// 0055cd06  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 0055cd0a  4f                   dec edi
// 0055cd0b  48                   dec eax
// 0055cd0c  836c241401           sub dword ptr [esp + 0x14], 1
// 0055cd11  8808                 mov byte ptr [eax], cl
// 0055cd13  75e2                 jne 0x55ccf7
// 0055cd15  8858ff               mov byte ptr [eax - 1], bl
// 0055cd18  48                   dec eax
// 0055cd19  8850ff               mov byte ptr [eax - 1], dl
// 0055cd1c  5f                   pop edi
// 0055cd1d  8d14b500000000       lea edx, [esi*4]
// 0055cd24  5e                   pop esi
// 0055cd25  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0055cd29  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 0055cd2d  895504               mov dword ptr [ebp + 4], edx
// 0055cd30  5d                   pop ebp
// 0055cd31  5b                   pop ebx
// 0055cd32  c3                   ret 
// 0055cd33  85f6                 test esi, esi
// 0055cd35  7626                 jbe 0x55cd5d
// 0055cd37  89742414             mov dword ptr [esp + 0x14], esi
// 0055cd3b  eb03                 jmp 0x55cd40
// 0055cd3d  8d4900               lea ecx, [ecx]
// 0055cd40  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 0055cd44  4f                   dec edi
// 0055cd45  48                   dec eax
// 0055cd46  8808                 mov byte ptr [eax], cl
// 0055cd48  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 0055cd4c  4f                   dec edi
// 0055cd4d  48                   dec eax
// 0055cd4e  8808                 mov byte ptr [eax], cl
// 0055cd50  48                   dec eax
// 0055cd51  8818                 mov byte ptr [eax], bl
// 0055cd53  48                   dec eax
// 0055cd54  836c241401           sub dword ptr [esp + 0x14], 1
// 0055cd59  8810                 mov byte ptr [eax], dl
// 0055cd5b  75e3                 jne 0x55cd40
// 0055cd5d  5f                   pop edi
// 0055cd5e  8d14b500000000       lea edx, [esi*4]
// 0055cd65  5e                   pop esi
// 0055cd66  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0055cd6a  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 0055cd6e  895504               mov dword ptr [ebp + 4], edx
// 0055cd71  5d                   pop ebp
// 0055cd72  5b                   pop ebx
// 0055cd73  c3                   ret 
// 0055cd74  3c02                 cmp al, 2
// 0055cd76  0f855e010000         jne 0x55ceda
// 0055cd7c  8a4509               mov al, byte ptr [ebp + 9]
// 0055cd7f  3c08                 cmp al, 8
// 0055cd81  0f8581000000         jne 0x55ce08
// 0055cd87  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055cd8b  8d3c70               lea edi, [eax + esi*2]
// 0055cd8e  03fe                 add edi, esi
// 0055cd90  f644242080           test byte ptr [esp + 0x20], 0x80
// 0055cd95  8d0437               lea eax, [edi + esi]
// 0055cd98  742e                 je 0x55cdc8
// 0055cd9a  83fe01               cmp esi, 1
// 0055cd9d  7624                 jbe 0x55cdc3
// 0055cd9f  8d4eff               lea ecx, [esi - 1]
// 0055cda2  8850ff               mov byte ptr [eax - 1], dl
// 0055cda5  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0055cda9  48                   dec eax
// 0055cdaa  4f                   dec edi
// 0055cdab  48                   dec eax
// 0055cdac  8818                 mov byte ptr [eax], bl
// 0055cdae  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0055cdb2  4f                   dec edi
// 0055cdb3  48                   dec eax
// 0055cdb4  8818                 mov byte ptr [eax], bl
// 0055cdb6  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0055cdba  4f                   dec edi
// 0055cdbb  48                   dec eax
// 0055cdbc  83e901               sub ecx, 1
// 0055cdbf  8818                 mov byte ptr [eax], bl
// 0055cdc1  75df                 jne 0x55cda2
// 0055cdc3  8850ff               mov byte ptr [eax - 1], dl
// 0055cdc6  eb29                 jmp 0x55cdf1
// 0055cdc8  85f6                 test esi, esi
// 0055cdca  7625                 jbe 0x55cdf1
// 0055cdcc  8bce                 mov ecx, esi
// 0055cdce  8bff                 mov edi, edi
// 0055cdd0  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0055cdd4  4f                   dec edi
// 0055cdd5  8858ff               mov byte ptr [eax - 1], bl
// 0055cdd8  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0055cddc  48                   dec eax
// 0055cddd  4f                   dec edi
// 0055cdde  48                   dec eax
// 0055cddf  8818                 mov byte ptr [eax], bl
// 0055cde1  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0055cde5  4f                   dec edi
// 0055cde6  48                   dec eax
// 0055cde7  8818                 mov byte ptr [eax], bl
// 0055cde9  48                   dec eax
// 0055cdea  83e901               sub ecx, 1
// 0055cded  8810                 mov byte ptr [eax], dl
// 0055cdef  75df                 jne 0x55cdd0
// 0055cdf1  5f                   pop edi
// 0055cdf2  8d0cb500000000       lea ecx, [esi*4]
// 0055cdf9  5e                   pop esi
// 0055cdfa  c6450a04             mov byte ptr [ebp + 0xa], 4
// 0055cdfe  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 0055ce02  894d04               mov dword ptr [ebp + 4], ecx
// 0055ce05  5d                   pop ebp
// 0055ce06  5b                   pop ebx
// 0055ce07  c3                   ret 
// 0055ce08  3c10                 cmp al, 0x10
// 0055ce0a  0f85ca000000         jne 0x55ceda
// 0055ce10  f644242080           test byte ptr [esp + 0x20], 0x80
// 0055ce15  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055ce19  8d0476               lea eax, [esi + esi*2]
// 0055ce1c  8d0c41               lea ecx, [ecx + eax*2]
// 0055ce1f  8d0471               lea eax, [ecx + esi*2]
// 0055ce22  7459                 je 0x55ce7d
// 0055ce24  83fe01               cmp esi, 1
// 0055ce27  764c                 jbe 0x55ce75
// 0055ce29  8d7eff               lea edi, [esi - 1]
// 0055ce2c  8d642400             lea esp, [esp]
// 0055ce30  8858ff               mov byte ptr [eax - 1], bl
// 0055ce33  48                   dec eax
// 0055ce34  8850ff               mov byte ptr [eax - 1], dl
// 0055ce37  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce3b  48                   dec eax
// 0055ce3c  8858ff               mov byte ptr [eax - 1], bl
// 0055ce3f  49                   dec ecx
// 0055ce40  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce44  48                   dec eax
// 0055ce45  8858ff               mov byte ptr [eax - 1], bl
// 0055ce48  49                   dec ecx
// 0055ce49  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce4d  48                   dec eax
// 0055ce4e  49                   dec ecx
// 0055ce4f  8858ff               mov byte ptr [eax - 1], bl
// 0055ce52  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce56  48                   dec eax
// 0055ce57  49                   dec ecx
// 0055ce58  8858ff               mov byte ptr [eax - 1], bl
// 0055ce5b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce5f  48                   dec eax
// 0055ce60  49                   dec ecx
// 0055ce61  48                   dec eax
// 0055ce62  8818                 mov byte ptr [eax], bl
// 0055ce64  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce68  49                   dec ecx
// 0055ce69  48                   dec eax
// 0055ce6a  83ef01               sub edi, 1
// 0055ce6d  8818                 mov byte ptr [eax], bl
// 0055ce6f  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 0055ce73  75bb                 jne 0x55ce30
// 0055ce75  48                   dec eax
// 0055ce76  8818                 mov byte ptr [eax], bl
// 0055ce78  8850ff               mov byte ptr [eax - 1], dl
// 0055ce7b  eb4b                 jmp 0x55cec8
// 0055ce7d  85f6                 test esi, esi
// 0055ce7f  7647                 jbe 0x55cec8
// 0055ce81  8bfe                 mov edi, esi
// 0055ce83  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce87  8858ff               mov byte ptr [eax - 1], bl
// 0055ce8a  49                   dec ecx
// 0055ce8b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce8f  48                   dec eax
// 0055ce90  8858ff               mov byte ptr [eax - 1], bl
// 0055ce93  49                   dec ecx
// 0055ce94  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ce98  48                   dec eax
// 0055ce99  8858ff               mov byte ptr [eax - 1], bl
// 0055ce9c  49                   dec ecx
// 0055ce9d  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055cea1  48                   dec eax
// 0055cea2  8858ff               mov byte ptr [eax - 1], bl
// 0055cea5  49                   dec ecx
// 0055cea6  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ceaa  48                   dec eax
// 0055ceab  49                   dec ecx
// 0055ceac  8858ff               mov byte ptr [eax - 1], bl
// 0055ceaf  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0055ceb3  48                   dec eax
// 0055ceb4  49                   dec ecx
// 0055ceb5  48                   dec eax
// 0055ceb6  8818                 mov byte ptr [eax], bl
// 0055ceb8  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 0055cebd  48                   dec eax
// 0055cebe  8818                 mov byte ptr [eax], bl
// 0055cec0  48                   dec eax
// 0055cec1  83ef01               sub edi, 1
// 0055cec4  8810                 mov byte ptr [eax], dl
// 0055cec6  75bb                 jne 0x55ce83
// 0055cec8  8d14f500000000       lea edx, [esi*8]
// 0055cecf  c6450b40             mov byte ptr [ebp + 0xb], 0x40
// 0055ced3  c6450a04             mov byte ptr [ebp + 0xa], 4
// 0055ced7  895504               mov dword ptr [ebp + 4], edx
// 0055ceda  5f                   pop edi
// 0055cedb  5e                   pop esi
// 0055cedc  5d                   pop ebp
// 0055cedd  5b                   pop ebx
// 0055cede  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_do_read_filler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
