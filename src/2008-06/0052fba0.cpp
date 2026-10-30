// from server: 100% by auto
// roc 2008-06 0052fba0  unit: seg_00520000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052fba0
//
// 0052fba0  53                   push ebx
// 0052fba1  56                   push esi
// 0052fba2  57                   push edi
// 0052fba3  8bf0                 mov esi, eax
// 0052fba5  68da000000           push 0xda
// 0052fbaa  e851faffff           call 0x52f600
// 0052fbaf  8b9ee4000000         mov ebx, dword ptr [esi + 0xe4]
// 0052fbb5  83c404               add esp, 4
// 0052fbb8  8d5c1b06             lea ebx, [ebx + ebx + 6]
// 0052fbbc  e8affaffff           call 0x52f670
// 0052fbc1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fbc4  8a96e4000000         mov dl, byte ptr [esi + 0xe4]
// 0052fbca  8b08                 mov ecx, dword ptr [eax]
// 0052fbcc  8811                 mov byte ptr [ecx], dl
// 0052fbce  ff00                 inc dword ptr [eax]
// 0052fbd0  83cfff               or edi, 0xffffffff
// 0052fbd3  017804               add dword ptr [eax + 4], edi
// 0052fbd6  7523                 jne 0x52fbfb
// 0052fbd8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fbdb  56                   push esi
// 0052fbdc  ffd0                 call eax
// 0052fbde  83c404               add esp, 4
// 0052fbe1  84c0                 test al, al
// 0052fbe3  7516                 jne 0x52fbfb
// 0052fbe5  8b0e                 mov ecx, dword ptr [esi]
// 0052fbe7  bb18000000           mov ebx, 0x18
// 0052fbec  895914               mov dword ptr [ecx + 0x14], ebx
// 0052fbef  8b16                 mov edx, dword ptr [esi]
// 0052fbf1  8b02                 mov eax, dword ptr [edx]
// 0052fbf3  56                   push esi
// 0052fbf4  ffd0                 call eax
// 0052fbf6  83c404               add esp, 4
// 0052fbf9  eb05                 jmp 0x52fc00
// 0052fbfb  bb18000000           mov ebx, 0x18
// 0052fc00  55                   push ebp
// 0052fc01  33ed                 xor ebp, ebp
// 0052fc03  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0052fc09  0f8eb1000000         jle 0x52fcc0
// 0052fc0f  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0052fc15  8b3b                 mov edi, dword ptr [ebx]
// 0052fc17  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fc1a  8a17                 mov dl, byte ptr [edi]
// 0052fc1c  8b08                 mov ecx, dword ptr [eax]
// 0052fc1e  8811                 mov byte ptr [ecx], dl
// 0052fc20  ff00                 inc dword ptr [eax]
// 0052fc22  834004ff             add dword ptr [eax + 4], -1
// 0052fc26  7520                 jne 0x52fc48
// 0052fc28  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fc2b  56                   push esi
// 0052fc2c  ffd0                 call eax
// 0052fc2e  83c404               add esp, 4
// 0052fc31  84c0                 test al, al
// 0052fc33  7513                 jne 0x52fc48
// 0052fc35  8b0e                 mov ecx, dword ptr [esi]
// 0052fc37  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fc3e  8b16                 mov edx, dword ptr [esi]
// 0052fc40  8b02                 mov eax, dword ptr [edx]
// 0052fc42  56                   push esi
// 0052fc43  ffd0                 call eax
// 0052fc45  83c404               add esp, 4
// 0052fc48  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0052fc4f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0052fc52  8b5718               mov edx, dword ptr [edi + 0x18]
// 0052fc55  741d                 je 0x52fc74
// 0052fc57  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0052fc5e  7512                 jne 0x52fc72
// 0052fc60  33d2                 xor edx, edx
// 0052fc62  399634010000         cmp dword ptr [esi + 0x134], edx
// 0052fc68  740a                 je 0x52fc74
// 0052fc6a  3896b1000000         cmp byte ptr [esi + 0xb1], dl
// 0052fc70  7502                 jne 0x52fc74
// 0052fc72  33c9                 xor ecx, ecx
// 0052fc74  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fc77  c0e104               shl cl, 4
// 0052fc7a  02ca                 add cl, dl
// 0052fc7c  8b10                 mov edx, dword ptr [eax]
// 0052fc7e  880a                 mov byte ptr [edx], cl
// 0052fc80  ff00                 inc dword ptr [eax]
// 0052fc82  834004ff             add dword ptr [eax + 4], -1
// 0052fc86  7520                 jne 0x52fca8
// 0052fc88  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fc8b  56                   push esi
// 0052fc8c  ffd0                 call eax
// 0052fc8e  83c404               add esp, 4
// 0052fc91  84c0                 test al, al
// 0052fc93  7513                 jne 0x52fca8
// 0052fc95  8b0e                 mov ecx, dword ptr [esi]
// 0052fc97  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fc9e  8b16                 mov edx, dword ptr [esi]
// 0052fca0  8b02                 mov eax, dword ptr [edx]
// 0052fca2  56                   push esi
// 0052fca3  ffd0                 call eax
// 0052fca5  83c404               add esp, 4
// 0052fca8  45                   inc ebp
// 0052fca9  83c304               add ebx, 4
// 0052fcac  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0052fcb2  0f8c5dffffff         jl 0x52fc15
// 0052fcb8  bb18000000           mov ebx, 0x18
// 0052fcbd  83cfff               or edi, 0xffffffff
// 0052fcc0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fcc3  8a962c010000         mov dl, byte ptr [esi + 0x12c]
// 0052fcc9  8b08                 mov ecx, dword ptr [eax]
// 0052fccb  8811                 mov byte ptr [ecx], dl
// 0052fccd  ff00                 inc dword ptr [eax]
// 0052fccf  017804               add dword ptr [eax + 4], edi
// 0052fcd2  5d                   pop ebp
// 0052fcd3  751c                 jne 0x52fcf1
// 0052fcd5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fcd8  56                   push esi
// 0052fcd9  ffd0                 call eax
// 0052fcdb  83c404               add esp, 4
// 0052fcde  84c0                 test al, al
// 0052fce0  750f                 jne 0x52fcf1
// 0052fce2  8b0e                 mov ecx, dword ptr [esi]
// 0052fce4  895914               mov dword ptr [ecx + 0x14], ebx
// 0052fce7  8b16                 mov edx, dword ptr [esi]
// 0052fce9  8b02                 mov eax, dword ptr [edx]
// 0052fceb  56                   push esi
// 0052fcec  ffd0                 call eax
// 0052fcee  83c404               add esp, 4
// 0052fcf1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fcf4  8a9630010000         mov dl, byte ptr [esi + 0x130]
// 0052fcfa  8b08                 mov ecx, dword ptr [eax]
// 0052fcfc  8811                 mov byte ptr [ecx], dl
// 0052fcfe  ff00                 inc dword ptr [eax]
// 0052fd00  017804               add dword ptr [eax + 4], edi
// 0052fd03  751c                 jne 0x52fd21
// 0052fd05  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fd08  56                   push esi
// 0052fd09  ffd0                 call eax
// 0052fd0b  83c404               add esp, 4
// 0052fd0e  84c0                 test al, al
// 0052fd10  750f                 jne 0x52fd21
// 0052fd12  8b0e                 mov ecx, dword ptr [esi]
// 0052fd14  895914               mov dword ptr [ecx + 0x14], ebx
// 0052fd17  8b16                 mov edx, dword ptr [esi]
// 0052fd19  8b02                 mov eax, dword ptr [edx]
// 0052fd1b  56                   push esi
// 0052fd1c  ffd0                 call eax
// 0052fd1e  83c404               add esp, 4
// 0052fd21  8a8e34010000         mov cl, byte ptr [esi + 0x134]
// 0052fd27  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fd2a  8b10                 mov edx, dword ptr [eax]
// 0052fd2c  c0e104               shl cl, 4
// 0052fd2f  028e38010000         add cl, byte ptr [esi + 0x138]
// 0052fd35  880a                 mov byte ptr [edx], cl
// 0052fd37  ff00                 inc dword ptr [eax]
// 0052fd39  017804               add dword ptr [eax + 4], edi
// 0052fd3c  751c                 jne 0x52fd5a
// 0052fd3e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fd41  56                   push esi
// 0052fd42  ffd0                 call eax
// 0052fd44  83c404               add esp, 4
// 0052fd47  84c0                 test al, al
// 0052fd49  750f                 jne 0x52fd5a
// 0052fd4b  8b0e                 mov ecx, dword ptr [esi]
// 0052fd4d  895914               mov dword ptr [ecx + 0x14], ebx
// 0052fd50  8b16                 mov edx, dword ptr [esi]
// 0052fd52  8b02                 mov eax, dword ptr [edx]
// 0052fd54  56                   push esi
// 0052fd55  ffd0                 call eax
// 0052fd57  83c404               add esp, 4
// 0052fd5a  5f                   pop edi
// 0052fd5b  5e                   pop esi
// 0052fd5c  5b                   pop ebx
// 0052fd5d  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
