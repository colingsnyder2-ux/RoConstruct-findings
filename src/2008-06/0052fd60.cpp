// from server: 100% by auto
// roc 2008-06 0052fd60  unit: seg_00520000  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052fd60
//
// 0052fd60  53                   push ebx
// 0052fd61  55                   push ebp
// 0052fd62  56                   push esi
// 0052fd63  57                   push edi
// 0052fd64  8bf0                 mov esi, eax
// 0052fd66  68e0000000           push 0xe0
// 0052fd6b  e890f8ffff           call 0x52f600
// 0052fd70  83c404               add esp, 4
// 0052fd73  bb10000000           mov ebx, 0x10
// 0052fd78  e8f3f8ffff           call 0x52f670
// 0052fd7d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fd80  8b08                 mov ecx, dword ptr [eax]
// 0052fd82  c6014a               mov byte ptr [ecx], 0x4a
// 0052fd85  ff00                 inc dword ptr [eax]
// 0052fd87  83cfff               or edi, 0xffffffff
// 0052fd8a  017804               add dword ptr [eax + 4], edi
// 0052fd8d  8d6b08               lea ebp, [ebx + 8]
// 0052fd90  751c                 jne 0x52fdae
// 0052fd92  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052fd95  56                   push esi
// 0052fd96  ffd2                 call edx
// 0052fd98  83c404               add esp, 4
// 0052fd9b  84c0                 test al, al
// 0052fd9d  750f                 jne 0x52fdae
// 0052fd9f  8b06                 mov eax, dword ptr [esi]
// 0052fda1  896814               mov dword ptr [eax + 0x14], ebp
// 0052fda4  8b0e                 mov ecx, dword ptr [esi]
// 0052fda6  8b11                 mov edx, dword ptr [ecx]
// 0052fda8  56                   push esi
// 0052fda9  ffd2                 call edx
// 0052fdab  83c404               add esp, 4
// 0052fdae  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fdb1  8b08                 mov ecx, dword ptr [eax]
// 0052fdb3  c60146               mov byte ptr [ecx], 0x46
// 0052fdb6  ff00                 inc dword ptr [eax]
// 0052fdb8  017804               add dword ptr [eax + 4], edi
// 0052fdbb  751c                 jne 0x52fdd9
// 0052fdbd  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052fdc0  56                   push esi
// 0052fdc1  ffd2                 call edx
// 0052fdc3  83c404               add esp, 4
// 0052fdc6  84c0                 test al, al
// 0052fdc8  750f                 jne 0x52fdd9
// 0052fdca  8b06                 mov eax, dword ptr [esi]
// 0052fdcc  896814               mov dword ptr [eax + 0x14], ebp
// 0052fdcf  8b0e                 mov ecx, dword ptr [esi]
// 0052fdd1  8b11                 mov edx, dword ptr [ecx]
// 0052fdd3  56                   push esi
// 0052fdd4  ffd2                 call edx
// 0052fdd6  83c404               add esp, 4
// 0052fdd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fddc  8b08                 mov ecx, dword ptr [eax]
// 0052fdde  c60149               mov byte ptr [ecx], 0x49
// 0052fde1  ff00                 inc dword ptr [eax]
// 0052fde3  017804               add dword ptr [eax + 4], edi
// 0052fde6  751c                 jne 0x52fe04
// 0052fde8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052fdeb  56                   push esi
// 0052fdec  ffd2                 call edx
// 0052fdee  83c404               add esp, 4
// 0052fdf1  84c0                 test al, al
// 0052fdf3  750f                 jne 0x52fe04
// 0052fdf5  8b06                 mov eax, dword ptr [esi]
// 0052fdf7  896814               mov dword ptr [eax + 0x14], ebp
// 0052fdfa  8b0e                 mov ecx, dword ptr [esi]
// 0052fdfc  8b11                 mov edx, dword ptr [ecx]
// 0052fdfe  56                   push esi
// 0052fdff  ffd2                 call edx
// 0052fe01  83c404               add esp, 4
// 0052fe04  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fe07  8b08                 mov ecx, dword ptr [eax]
// 0052fe09  c60146               mov byte ptr [ecx], 0x46
// 0052fe0c  ff00                 inc dword ptr [eax]
// 0052fe0e  017804               add dword ptr [eax + 4], edi
// 0052fe11  751c                 jne 0x52fe2f
// 0052fe13  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052fe16  56                   push esi
// 0052fe17  ffd2                 call edx
// 0052fe19  83c404               add esp, 4
// 0052fe1c  84c0                 test al, al
// 0052fe1e  750f                 jne 0x52fe2f
// 0052fe20  8b06                 mov eax, dword ptr [esi]
// 0052fe22  896814               mov dword ptr [eax + 0x14], ebp
// 0052fe25  8b0e                 mov ecx, dword ptr [esi]
// 0052fe27  8b11                 mov edx, dword ptr [ecx]
// 0052fe29  56                   push esi
// 0052fe2a  ffd2                 call edx
// 0052fe2c  83c404               add esp, 4
// 0052fe2f  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fe32  8b08                 mov ecx, dword ptr [eax]
// 0052fe34  c60100               mov byte ptr [ecx], 0
// 0052fe37  ff00                 inc dword ptr [eax]
// 0052fe39  017804               add dword ptr [eax + 4], edi
// 0052fe3c  751c                 jne 0x52fe5a
// 0052fe3e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052fe41  56                   push esi
// 0052fe42  ffd2                 call edx
// 0052fe44  83c404               add esp, 4
// 0052fe47  84c0                 test al, al
// 0052fe49  750f                 jne 0x52fe5a
// 0052fe4b  8b06                 mov eax, dword ptr [esi]
// 0052fe4d  896814               mov dword ptr [eax + 0x14], ebp
// 0052fe50  8b0e                 mov ecx, dword ptr [esi]
// 0052fe52  8b11                 mov edx, dword ptr [ecx]
// 0052fe54  56                   push esi
// 0052fe55  ffd2                 call edx
// 0052fe57  83c404               add esp, 4
// 0052fe5a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fe5d  8a96c5000000         mov dl, byte ptr [esi + 0xc5]
// 0052fe63  8b08                 mov ecx, dword ptr [eax]
// 0052fe65  8811                 mov byte ptr [ecx], dl
// 0052fe67  ff00                 inc dword ptr [eax]
// 0052fe69  017804               add dword ptr [eax + 4], edi
// 0052fe6c  751c                 jne 0x52fe8a
// 0052fe6e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fe71  56                   push esi
// 0052fe72  ffd0                 call eax
// 0052fe74  83c404               add esp, 4
// 0052fe77  84c0                 test al, al
// 0052fe79  750f                 jne 0x52fe8a
// 0052fe7b  8b0e                 mov ecx, dword ptr [esi]
// 0052fe7d  896914               mov dword ptr [ecx + 0x14], ebp
// 0052fe80  8b16                 mov edx, dword ptr [esi]
// 0052fe82  8b02                 mov eax, dword ptr [edx]
// 0052fe84  56                   push esi
// 0052fe85  ffd0                 call eax
// 0052fe87  83c404               add esp, 4
// 0052fe8a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fe8d  8a96c6000000         mov dl, byte ptr [esi + 0xc6]
// 0052fe93  8b08                 mov ecx, dword ptr [eax]
// 0052fe95  8811                 mov byte ptr [ecx], dl
// 0052fe97  ff00                 inc dword ptr [eax]
// 0052fe99  017804               add dword ptr [eax + 4], edi
// 0052fe9c  751c                 jne 0x52feba
// 0052fe9e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fea1  56                   push esi
// 0052fea2  ffd0                 call eax
// 0052fea4  83c404               add esp, 4
// 0052fea7  84c0                 test al, al
// 0052fea9  750f                 jne 0x52feba
// 0052feab  8b0e                 mov ecx, dword ptr [esi]
// 0052fead  896914               mov dword ptr [ecx + 0x14], ebp
// 0052feb0  8b16                 mov edx, dword ptr [esi]
// 0052feb2  8b02                 mov eax, dword ptr [edx]
// 0052feb4  56                   push esi
// 0052feb5  ffd0                 call eax
// 0052feb7  83c404               add esp, 4
// 0052feba  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052febd  8a96c7000000         mov dl, byte ptr [esi + 0xc7]
// 0052fec3  8b08                 mov ecx, dword ptr [eax]
// 0052fec5  8811                 mov byte ptr [ecx], dl
// 0052fec7  ff00                 inc dword ptr [eax]
// 0052fec9  017804               add dword ptr [eax + 4], edi
// 0052fecc  751c                 jne 0x52feea
// 0052fece  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fed1  56                   push esi
// 0052fed2  ffd0                 call eax
// 0052fed4  83c404               add esp, 4
// 0052fed7  84c0                 test al, al
// 0052fed9  750f                 jne 0x52feea
// 0052fedb  8b0e                 mov ecx, dword ptr [esi]
// 0052fedd  896914               mov dword ptr [ecx + 0x14], ebp
// 0052fee0  8b16                 mov edx, dword ptr [esi]
// 0052fee2  8b02                 mov eax, dword ptr [edx]
// 0052fee4  56                   push esi
// 0052fee5  ffd0                 call eax
// 0052fee7  83c404               add esp, 4
// 0052feea  0fb79ec8000000       movzx ebx, word ptr [esi + 0xc8]
// 0052fef1  e87af7ffff           call 0x52f670
// 0052fef6  0fb79eca000000       movzx ebx, word ptr [esi + 0xca]
// 0052fefd  e86ef7ffff           call 0x52f670
// 0052ff02  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052ff05  8b08                 mov ecx, dword ptr [eax]
// 0052ff07  c60100               mov byte ptr [ecx], 0
// 0052ff0a  ff00                 inc dword ptr [eax]
// 0052ff0c  017804               add dword ptr [eax + 4], edi
// 0052ff0f  751c                 jne 0x52ff2d
// 0052ff11  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052ff14  56                   push esi
// 0052ff15  ffd2                 call edx
// 0052ff17  83c404               add esp, 4
// 0052ff1a  84c0                 test al, al
// 0052ff1c  750f                 jne 0x52ff2d
// 0052ff1e  8b06                 mov eax, dword ptr [esi]
// 0052ff20  896814               mov dword ptr [eax + 0x14], ebp
// 0052ff23  8b0e                 mov ecx, dword ptr [esi]
// 0052ff25  8b11                 mov edx, dword ptr [ecx]
// 0052ff27  56                   push esi
// 0052ff28  ffd2                 call edx
// 0052ff2a  83c404               add esp, 4
// 0052ff2d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052ff30  8b08                 mov ecx, dword ptr [eax]
// 0052ff32  c60100               mov byte ptr [ecx], 0
// 0052ff35  ff00                 inc dword ptr [eax]
// 0052ff37  017804               add dword ptr [eax + 4], edi
// 0052ff3a  751c                 jne 0x52ff58
// 0052ff3c  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052ff3f  56                   push esi
// 0052ff40  ffd2                 call edx
// 0052ff42  83c404               add esp, 4
// 0052ff45  84c0                 test al, al
// 0052ff47  750f                 jne 0x52ff58
// 0052ff49  8b06                 mov eax, dword ptr [esi]
// 0052ff4b  896814               mov dword ptr [eax + 0x14], ebp
// 0052ff4e  8b0e                 mov ecx, dword ptr [esi]
// 0052ff50  8b11                 mov edx, dword ptr [ecx]
// 0052ff52  56                   push esi
// 0052ff53  ffd2                 call edx
// 0052ff55  83c404               add esp, 4
// 0052ff58  5f                   pop edi
// 0052ff59  5e                   pop esi
// 0052ff5a  5d                   pop ebp
// 0052ff5b  5b                   pop ebx
// 0052ff5c  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
