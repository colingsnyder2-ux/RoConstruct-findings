// from server: 100% by auto
// roc 2011-06 0057aca0  unit: seg_00570000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057aca0
//
// 0057aca0  83ec38               sub esp, 0x38
// 0057aca3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0057aca7  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0057acaa  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0057acb0  55                   push ebp
// 0057acb1  8b6864               mov ebp, dword ptr [eax + 0x64]
// 0057acb4  56                   push esi
// 0057acb5  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0057acbb  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057acbf  8974240c             mov dword ptr [esp + 0xc], esi
// 0057acc3  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057acc7  894c2444             mov dword ptr [esp + 0x44], ecx
// 0057accb  89542430             mov dword ptr [esp + 0x30], edx
// 0057accf  85c0                 test eax, eax
// 0057acd1  0f8e63010000         jle 0x57ae3a
// 0057acd7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0057acdb  53                   push ebx
// 0057acdc  57                   push edi
// 0057acdd  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0057ace1  2bcf                 sub ecx, edi
// 0057ace3  897c2418             mov dword ptr [esp + 0x18], edi
// 0057ace7  894c2434             mov dword ptr [esp + 0x34], ecx
// 0057aceb  89442430             mov dword ptr [esp + 0x30], eax
// 0057acef  90                   nop 
// 0057acf0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0057acf4  8b0f                 mov ecx, dword ptr [edi]
// 0057acf6  50                   push eax
// 0057acf7  51                   push ecx
// 0057acf8  e843d1feff           call 0x567e40
// 0057acfd  33d2                 xor edx, edx
// 0057acff  83c408               add esp, 8
// 0057ad02  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057ad06  85ed                 test ebp, ebp
// 0057ad08  0f8e0e010000         jle 0x57ae1c
// 0057ad0e  8d4e44               lea ecx, [esi + 0x44]
// 0057ad11  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057ad15  eb0d                 jmp 0x57ad24
// 0057ad17  eb07                 jmp 0x57ad20
// 0057ad19  8da42400000000       lea esp, [esp]
// 0057ad20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057ad24  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057ad28  8b1c38               mov ebx, dword ptr [eax + edi]
// 0057ad2b  8b3f                 mov edi, dword ptr [edi]
// 0057ad2d  8b09                 mov ecx, dword ptr [ecx]
// 0057ad2f  03da                 add ebx, edx
// 0057ad31  807e5400             cmp byte ptr [esi + 0x54], 0
// 0057ad35  741d                 je 0x57ad54
// 0057ad37  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0057ad3b  48                   dec eax
// 0057ad3c  8bf0                 mov esi, eax
// 0057ad3e  0faff5               imul esi, ebp
// 0057ad41  03f8                 add edi, eax
// 0057ad43  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0057ad47  03de                 add ebx, esi
// 0057ad49  83ceff               or esi, 0xffffffff
// 0057ad4c  f7dd                 neg ebp
// 0057ad4e  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 0057ad52  eb05                 jmp 0x57ad59
// 0057ad54  be01000000           mov esi, 1
// 0057ad59  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057ad5d  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057ad61  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0057ad64  8b4010               mov eax, dword ptr [eax + 0x10]
// 0057ad67  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0057ad6b  8b0490               mov eax, dword ptr [eax + edx*4]
// 0057ad6e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057ad72  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0057ad76  89442440             mov dword ptr [esp + 0x40], eax
// 0057ad7a  33c0                 xor eax, eax
// 0057ad7c  89442458             mov dword ptr [esp + 0x58], eax
// 0057ad80  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057ad84  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057ad88  85ed                 test ebp, ebp
// 0057ad8a  766a                 jbe 0x57adf6
// 0057ad8c  8d642400             lea esp, [esp]
// 0057ad90  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 0057ad94  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0057ad98  8d440208             lea eax, [edx + eax + 8]
// 0057ad9c  0fb613               movzx edx, byte ptr [ebx]
// 0057ad9f  c1f804               sar eax, 4
// 0057ada2  03442438             add eax, dword ptr [esp + 0x38]
// 0057ada6  035c2420             add ebx, dword ptr [esp + 0x20]
// 0057adaa  0fb60402             movzx eax, byte ptr [edx + eax]
// 0057adae  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0057adb2  0fb61410             movzx edx, byte ptr [eax + edx]
// 0057adb6  0017                 add byte ptr [edi], dl
// 0057adb8  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 0057adbc  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0057adc0  2bc2                 sub eax, edx
// 0057adc2  89442444             mov dword ptr [esp + 0x44], eax
// 0057adc6  8d1400               lea edx, [eax + eax]
// 0057adc9  03c2                 add eax, edx
// 0057adcb  03e8                 add ebp, eax
// 0057adcd  668929               mov word ptr [ecx], bp
// 0057add0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0057add4  03c2                 add eax, edx
// 0057add6  03e8                 add ebp, eax
// 0057add8  896c2458             mov dword ptr [esp + 0x58], ebp
// 0057addc  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0057ade0  03c2                 add eax, edx
// 0057ade2  03fe                 add edi, esi
// 0057ade4  836c242401           sub dword ptr [esp + 0x24], 1
// 0057ade9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0057aded  8d0c71               lea ecx, [ecx + esi*2]
// 0057adf0  759e                 jne 0x57ad90
// 0057adf2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057adf6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057adfa  668b442458           mov ax, word ptr [esp + 0x58]
// 0057adff  8344241004           add dword ptr [esp + 0x10], 4
// 0057ae04  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057ae08  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057ae0c  42                   inc edx
// 0057ae0d  3bd5                 cmp edx, ebp
// 0057ae0f  668901               mov word ptr [ecx], ax
// 0057ae12  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057ae16  0f8c04ffffff         jl 0x57ad20
// 0057ae1c  807e5400             cmp byte ptr [esi + 0x54], 0
// 0057ae20  0f94c1               sete cl
// 0057ae23  83c704               add edi, 4
// 0057ae26  836c243001           sub dword ptr [esp + 0x30], 1
// 0057ae2b  884e54               mov byte ptr [esi + 0x54], cl
// 0057ae2e  897c2418             mov dword ptr [esp + 0x18], edi
// 0057ae32  0f85b8feffff         jne 0x57acf0
// 0057ae38  5f                   pop edi
// 0057ae39  5b                   pop ebx
// 0057ae3a  5e                   pop esi
// 0057ae3b  5d                   pop ebp
// 0057ae3c  83c438               add esp, 0x38
// 0057ae3f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
