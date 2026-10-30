// roc 2011-06 0077cb30  unit: seg_00770000  size: 743 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077cb30
//
// 0077cb30  83ec28               sub esp, 0x28
// 0077cb33  53                   push ebx
// 0077cb34  56                   push esi
// 0077cb35  8b742434             mov esi, dword ptr [esp + 0x34]
// 0077cb39  57                   push edi
// 0077cb3a  8b7e08               mov edi, dword ptr [esi + 8]
// 0077cb3d  6a00                 push 0
// 0077cb3f  68cabea500           push 0xa5beca
// 0077cb44  bb01000000           mov ebx, 1
// 0077cb49  56                   push esi
// 0077cb4a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0077cb4e  e8cdd60500           call 0x7da220
// 0077cb53  8907                 mov dword ptr [edi], eax
// 0077cb55  c7470804000000       mov dword ptr [edi + 8], 4
// 0077cb5c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077cb5f  2b4608               sub eax, dword ptr [esi + 8]
// 0077cb62  83c40c               add esp, 0xc
// 0077cb65  83f810               cmp eax, 0x10
// 0077cb68  7f0a                 jg 0x77cb74
// 0077cb6a  53                   push ebx
// 0077cb6b  56                   push esi
// 0077cb6c  e85f170000           call 0x77e2d0
// 0077cb71  83c408               add esp, 8
// 0077cb74  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0077cb78  83460810             add dword ptr [esi + 8], 0x10
// 0077cb7c  55                   push ebp
// 0077cb7d  6a25                 push 0x25
// 0077cb7f  57                   push edi
// 0077cb80  ff15bc09a400         call dword ptr [0xa409bc]
// 0077cb86  83c408               add esp, 8
// 0077cb89  89442418             mov dword ptr [esp + 0x18], eax
// 0077cb8d  85c0                 test eax, eax
// 0077cb8f  0f84a2010000         je 0x77cd37
// 0077cb95  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0077cb99  8d69fc               lea ebp, [ecx - 4]
// 0077cb9c  83c1f8               add ecx, -8
// 0077cb9f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0077cba3  eb04                 jmp 0x77cba9
// 0077cba5  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077cba9  8b5e08               mov ebx, dword ptr [esi + 8]
// 0077cbac  2bc7                 sub eax, edi
// 0077cbae  50                   push eax
// 0077cbaf  57                   push edi
// 0077cbb0  56                   push esi
// 0077cbb1  e86ad60500           call 0x7da220
// 0077cbb6  8903                 mov dword ptr [ebx], eax
// 0077cbb8  c7430804000000       mov dword ptr [ebx + 8], 4
// 0077cbbf  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077cbc2  2b4e08               sub ecx, dword ptr [esi + 8]
// 0077cbc5  bb10000000           mov ebx, 0x10
// 0077cbca  83c40c               add esp, 0xc
// 0077cbcd  3bcb                 cmp ecx, ebx
// 0077cbcf  7f0b                 jg 0x77cbdc
// 0077cbd1  6a01                 push 1
// 0077cbd3  56                   push esi
// 0077cbd4  e8f7160000           call 0x77e2d0
// 0077cbd9  83c408               add esp, 8
// 0077cbdc  015e08               add dword ptr [esi + 8], ebx
// 0077cbdf  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077cbe3  8a4201               mov al, byte ptr [edx + 1]
// 0077cbe6  8b7e08               mov edi, dword ptr [esi + 8]
// 0077cbe9  0fbec8               movsx ecx, al
// 0077cbec  83c1db               add ecx, -0x25
// 0077cbef  83f94e               cmp ecx, 0x4e
// 0077cbf2  0f87c9000000         ja 0x77ccc1
// 0077cbf8  0fb689c8cd7700       movzx ecx, byte ptr [ecx + 0x77cdc8]
// 0077cbff  ff248daccd7700       jmp dword ptr [ecx*4 + 0x77cdac]
// 0077cc06  8b5504               mov edx, dword ptr [ebp + 4]
// 0077cc09  8344241404           add dword ptr [esp + 0x14], 4
// 0077cc0e  83c504               add ebp, 4
// 0077cc11  85d2                 test edx, edx
// 0077cc13  7505                 jne 0x77cc1a
// 0077cc15  bad076ab00           mov edx, 0xab76d0
// 0077cc1a  e8c1feffff           call 0x77cae0
// 0077cc1f  e9eb000000           jmp 0x77cd0f
// 0077cc24  8a5504               mov dl, byte ptr [ebp + 4]
// 0077cc27  8344241404           add dword ptr [esp + 0x14], 4
// 0077cc2c  83c504               add ebp, 4
// 0077cc2f  8854243c             mov byte ptr [esp + 0x3c], dl
// 0077cc33  8d54243c             lea edx, [esp + 0x3c]
// 0077cc37  c644243d00           mov byte ptr [esp + 0x3d], 0
// 0077cc3c  e89ffeffff           call 0x77cae0
// 0077cc41  e9c9000000           jmp 0x77cd0f
// 0077cc46  db4504               fild dword ptr [ebp + 4]
// 0077cc49  8344241404           add dword ptr [esp + 0x14], 4
// 0077cc4e  83c504               add ebp, 4
// 0077cc51  c7470803000000       mov dword ptr [edi + 8], 3
// 0077cc58  dd1f                 fstp qword ptr [edi]
// 0077cc5a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077cc5d  2b4608               sub eax, dword ptr [esi + 8]
// 0077cc60  3bc3                 cmp eax, ebx
// 0077cc62  e998000000           jmp 0x77ccff
// 0077cc67  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077cc6b  dd4008               fld qword ptr [eax + 8]
// 0077cc6e  83c008               add eax, 8
// 0077cc71  dd1f                 fstp qword ptr [edi]
// 0077cc73  c7470803000000       mov dword ptr [edi + 8], 3
// 0077cc7a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077cc7d  2b4e08               sub ecx, dword ptr [esi + 8]
// 0077cc80  83c508               add ebp, 8
// 0077cc83  89442414             mov dword ptr [esp + 0x14], eax
// 0077cc87  3bcb                 cmp ecx, ebx
// 0077cc89  eb74                 jmp 0x77ccff
// 0077cc8b  8b5504               mov edx, dword ptr [ebp + 4]
// 0077cc8e  8344241404           add dword ptr [esp + 0x14], 4
// 0077cc93  83c504               add ebp, 4
// 0077cc96  52                   push edx
// 0077cc97  8d442424             lea eax, [esp + 0x24]
// 0077cc9b  68cc76ab00           push 0xab76cc
// 0077cca0  50                   push eax
// 0077cca1  ff15c009a400         call dword ptr [0xa409c0]
// 0077cca7  83c40c               add esp, 0xc
// 0077ccaa  8d542420             lea edx, [esp + 0x20]
// 0077ccae  e82dfeffff           call 0x77cae0
// 0077ccb3  eb5a                 jmp 0x77cd0f
// 0077ccb5  bac876ab00           mov edx, 0xab76c8
// 0077ccba  e821feffff           call 0x77cae0
// 0077ccbf  eb4e                 jmp 0x77cd0f
// 0077ccc1  88442411             mov byte ptr [esp + 0x11], al
// 0077ccc5  8d442410             lea eax, [esp + 0x10]
// 0077ccc9  c644241025           mov byte ptr [esp + 0x10], 0x25
// 0077ccce  c644241200           mov byte ptr [esp + 0x12], 0
// 0077ccd3  8d5001               lea edx, [eax + 1]
// 0077ccd6  8a08                 mov cl, byte ptr [eax]
// 0077ccd8  40                   inc eax
// 0077ccd9  84c9                 test cl, cl
// 0077ccdb  75f9                 jne 0x77ccd6
// 0077ccdd  2bc2                 sub eax, edx
// 0077ccdf  50                   push eax
// 0077cce0  8d4c2414             lea ecx, [esp + 0x14]
// 0077cce4  51                   push ecx
// 0077cce5  56                   push esi
// 0077cce6  e835d50500           call 0x7da220
// 0077cceb  8907                 mov dword ptr [edi], eax
// 0077cced  c7470804000000       mov dword ptr [edi + 8], 4
// 0077ccf4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0077ccf7  2b5608               sub edx, dword ptr [esi + 8]
// 0077ccfa  83c40c               add esp, 0xc
// 0077ccfd  3bd3                 cmp edx, ebx
// 0077ccff  7f0b                 jg 0x77cd0c
// 0077cd01  6a01                 push 1
// 0077cd03  56                   push esi
// 0077cd04  e8c7150000           call 0x77e2d0
// 0077cd09  83c408               add esp, 8
// 0077cd0c  015e08               add dword ptr [esi + 8], ebx
// 0077cd0f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077cd13  8344241c02           add dword ptr [esp + 0x1c], 2
// 0077cd18  83c702               add edi, 2
// 0077cd1b  6a25                 push 0x25
// 0077cd1d  57                   push edi
// 0077cd1e  ff15bc09a400         call dword ptr [0xa409bc]
// 0077cd24  83c408               add esp, 8
// 0077cd27  89442418             mov dword ptr [esp + 0x18], eax
// 0077cd2b  85c0                 test eax, eax
// 0077cd2d  0f8572feffff         jne 0x77cba5
// 0077cd33  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0077cd37  8b6e08               mov ebp, dword ptr [esi + 8]
// 0077cd3a  8bc7                 mov eax, edi
// 0077cd3c  8d5001               lea edx, [eax + 1]
// 0077cd3f  90                   nop 
// 0077cd40  8a08                 mov cl, byte ptr [eax]
// 0077cd42  40                   inc eax
// 0077cd43  84c9                 test cl, cl
// 0077cd45  75f9                 jne 0x77cd40
// 0077cd47  2bc2                 sub eax, edx
// 0077cd49  50                   push eax
// 0077cd4a  57                   push edi
// 0077cd4b  56                   push esi
// 0077cd4c  e8cfd40500           call 0x7da220
// 0077cd51  894500               mov dword ptr [ebp], eax
// 0077cd54  c7450804000000       mov dword ptr [ebp + 8], 4
// 0077cd5b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077cd5e  2b4608               sub eax, dword ptr [esi + 8]
// 0077cd61  83c40c               add esp, 0xc
// 0077cd64  83f810               cmp eax, 0x10
// 0077cd67  5d                   pop ebp
// 0077cd68  7f0b                 jg 0x77cd75
// 0077cd6a  6a01                 push 1
// 0077cd6c  56                   push esi
// 0077cd6d  e85e150000           call 0x77e2d0
// 0077cd72  83c408               add esp, 8
// 0077cd75  83460810             add dword ptr [esi + 8], 0x10
// 0077cd79  8b4608               mov eax, dword ptr [esi + 8]
// 0077cd7c  2b460c               sub eax, dword ptr [esi + 0xc]
// 0077cd7f  8d4b01               lea ecx, [ebx + 1]
// 0077cd82  c1f804               sar eax, 4
// 0077cd85  48                   dec eax
// 0077cd86  50                   push eax
// 0077cd87  51                   push ecx
// 0077cd88  56                   push esi
// 0077cd89  e8a2af0500           call 0x7d7d30
// 0077cd8e  f7db                 neg ebx
// 0077cd90  c1e304               shl ebx, 4
// 0077cd93  015e08               add dword ptr [esi + 8], ebx
// 0077cd96  8b7608               mov esi, dword ptr [esi + 8]
// 0077cd99  8b46f0               mov eax, dword ptr [esi - 0x10]
// 0077cd9c  83c40c               add esp, 0xc
// 0077cd9f  5f                   pop edi
// 0077cda0  5e                   pop esi
// 0077cda1  83c010               add eax, 0x10
// 0077cda4  5b                   pop ebx
// 0077cda5  83c428               add esp, 0x28
// 0077cda8  c3                   ret 
// 0077cda9  8d4900               lea ecx, [ecx]
// 0077cdac  b5cc                 mov ch, 0xcc
// 0077cdae  7700                 ja 0x77cdb0
// 0077cdb0  24cc                 and al, 0xcc
// 0077cdb2  7700                 ja 0x77cdb4
// 0077cdb4  46                   inc esi
// 0077cdb5  cc                   int3 
// 0077cdb6  7700                 ja 0x77cdb8
// 0077cdb8  67cc                 int3 
// 0077cdba  7700                 ja 0x77cdbc
// 0077cdbc  8bcc                 mov ecx, esp
// 0077cdbe  7700                 ja 0x77cdc0
// 0077cdc0  06                   push es
// 0077cdc1  cc                   int3 
// 0077cdc2  7700                 ja 0x77cdc4
// 0077cdc4  c1cc77               ror esp, 0x77
// 0077cdc7  0000                 add byte ptr [eax], al
// 0077cdc9  06                   push es
// 0077cdca  06                   push es
// 0077cdcb  06                   push es
// 0077cdcc  06                   push es
// 0077cdcd  06                   push es
// 0077cdce  06                   push es
// 0077cdcf  06                   push es
// 0077cdd0  06                   push es
// 0077cdd1  06                   push es
// 0077cdd2  06                   push es
// 0077cdd3  06                   push es
// 0077cdd4  06                   push es
// 0077cdd5  06                   push es
// 0077cdd6  06                   push es
// 0077cdd7  06                   push es
// 0077cdd8  06                   push es
// 0077cdd9  06                   push es
// 0077cdda  06                   push es
// 0077cddb  06                   push es
// 0077cddc  06                   push es
// 0077cddd  06                   push es
// 0077cdde  06                   push es
// 0077cddf  06                   push es
// 0077cde0  06                   push es
// 0077cde1  06                   push es
// 0077cde2  06                   push es
// 0077cde3  06                   push es
// 0077cde4  06                   push es
// 0077cde5  06                   push es
// 0077cde6  06                   push es
// 0077cde7  06                   push es
// 0077cde8  06                   push es
// 0077cde9  06                   push es
// 0077cdea  06                   push es
// 0077cdeb  06                   push es
// 0077cdec  06                   push es
// 0077cded  06                   push es
// 0077cdee  06                   push es
// 0077cdef  06                   push es
// 0077cdf0  06                   push es
// 0077cdf1  06                   push es
// 0077cdf2  06                   push es
// 0077cdf3  06                   push es
// 0077cdf4  06                   push es
// 0077cdf5  06                   push es
// 0077cdf6  06                   push es
// 0077cdf7  06                   push es
// 0077cdf8  06                   push es
// 0077cdf9  06                   push es
// 0077cdfa  06                   push es
// 0077cdfb  06                   push es
// 0077cdfc  06                   push es
// 0077cdfd  06                   push es
// 0077cdfe  06                   push es
// 0077cdff  06                   push es
// 0077ce00  06                   push es
// 0077ce01  06                   push es
// 0077ce02  06                   push es
// 0077ce03  06                   push es
// 0077ce04  06                   push es
// 0077ce05  06                   push es
// 0077ce06  0102                 add dword ptr [edx], eax
// 0077ce08  06                   push es
// 0077ce09  0306                 add eax, dword ptr [esi]
// 0077ce0b  06                   push es
// 0077ce0c  06                   push es
// 0077ce0d  06                   push es
// 0077ce0e  06                   push es
// 0077ce0f  06                   push es
// 0077ce10  06                   push es
// 0077ce11  06                   push es
// 0077ce12  06                   push es
// 0077ce13  0406                 add al, 6
// 0077ce15  06                   push es
// copied from an identical function in another client (function _luaO_pushvfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c