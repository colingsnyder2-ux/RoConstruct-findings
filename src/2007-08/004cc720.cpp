// from server: 100% by auto
// roc 2007-08 004cc720  unit: CSHA1  size: 923 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cc720
//
// 004cc720  83ec14               sub esp, 0x14
// 004cc723  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc729  53                   push ebx
// 004cc72a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004cc72e  55                   push ebp
// 004cc72f  c1e104               shl ecx, 4
// 004cc732  56                   push esi
// 004cc733  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004cc737  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 004cc73b  8b6c3108             mov ebp, dword ptr [ecx + esi + 8]
// 004cc73f  335304               xor edx, dword ptr [ebx + 4]
// 004cc742  336b08               xor ebp, dword ptr [ebx + 8]
// 004cc745  57                   push edi
// 004cc746  8d3c31               lea edi, [ecx + esi]
// 004cc749  8b0b                 mov ecx, dword ptr [ebx]
// 004cc74b  330f                 xor ecx, dword ptr [edi]
// 004cc74d  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 004cc750  337b0c               xor edi, dword ptr [ebx + 0xc]
// 004cc753  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004cc757  8bdf                 mov ebx, edi
// 004cc759  c1eb08               shr ebx, 8
// 004cc75c  897c2420             mov dword ptr [esp + 0x20], edi
// 004cc760  0fb6fb               movzx edi, bl
// 004cc763  8b3cbd18488900       mov edi, dword ptr [edi*4 + 0x894818]
// 004cc76a  8bdd                 mov ebx, ebp
// 004cc76c  c1eb10               shr ebx, 0x10
// 004cc76f  0fb6db               movzx ebx, bl
// 004cc772  333c9d184c8900       xor edi, dword ptr [ebx*4 + 0x894c18]
// 004cc779  8bda                 mov ebx, edx
// 004cc77b  c1eb18               shr ebx, 0x18
// 004cc77e  333c9d18508900       xor edi, dword ptr [ebx*4 + 0x895018]
// 004cc785  0fb6d9               movzx ebx, cl
// 004cc788  333c9d18448900       xor edi, dword ptr [ebx*4 + 0x894418]
// 004cc78f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc793  8938                 mov dword ptr [eax], edi
// 004cc795  c1eb10               shr ebx, 0x10
// 004cc798  0fb6fb               movzx edi, bl
// 004cc79b  8b3cbd184c8900       mov edi, dword ptr [edi*4 + 0x894c18]
// 004cc7a2  8bdd                 mov ebx, ebp
// 004cc7a4  c1eb18               shr ebx, 0x18
// 004cc7a7  333c9d18508900       xor edi, dword ptr [ebx*4 + 0x895018]
// 004cc7ae  8bd9                 mov ebx, ecx
// 004cc7b0  c1eb08               shr ebx, 8
// 004cc7b3  0fb6db               movzx ebx, bl
// 004cc7b6  333c9d18488900       xor edi, dword ptr [ebx*4 + 0x894818]
// 004cc7bd  0fb6da               movzx ebx, dl
// 004cc7c0  333c9d18448900       xor edi, dword ptr [ebx*4 + 0x894418]
// 004cc7c7  8bda                 mov ebx, edx
// 004cc7c9  897804               mov dword ptr [eax + 4], edi
// 004cc7cc  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004cc7d0  c1ef18               shr edi, 0x18
// 004cc7d3  8b3cbd18508900       mov edi, dword ptr [edi*4 + 0x895018]
// 004cc7da  c1eb08               shr ebx, 8
// 004cc7dd  0fb6db               movzx ebx, bl
// 004cc7e0  333c9d18488900       xor edi, dword ptr [ebx*4 + 0x894818]
// 004cc7e7  8bd9                 mov ebx, ecx
// 004cc7e9  c1eb10               shr ebx, 0x10
// 004cc7ec  0fb6db               movzx ebx, bl
// 004cc7ef  333c9d184c8900       xor edi, dword ptr [ebx*4 + 0x894c18]
// 004cc7f6  8bdd                 mov ebx, ebp
// 004cc7f8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004cc7fc  0fb6eb               movzx ebp, bl
// 004cc7ff  333cad18448900       xor edi, dword ptr [ebp*4 + 0x894418]
// 004cc806  c1eb08               shr ebx, 8
// 004cc809  897808               mov dword ptr [eax + 8], edi
// 004cc80c  c1ea10               shr edx, 0x10
// 004cc80f  0fb6fb               movzx edi, bl
// 004cc812  8b3cbd18488900       mov edi, dword ptr [edi*4 + 0x894818]
// 004cc819  0fb6d2               movzx edx, dl
// 004cc81c  333c95184c8900       xor edi, dword ptr [edx*4 + 0x894c18]
// 004cc823  c1e918               shr ecx, 0x18
// 004cc826  333c8d18508900       xor edi, dword ptr [ecx*4 + 0x895018]
// 004cc82d  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 004cc832  333c8d18448900       xor edi, dword ptr [ecx*4 + 0x894418]
// 004cc839  89780c               mov dword ptr [eax + 0xc], edi
// 004cc83c  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc842  83c1ff               add ecx, -1
// 004cc845  83f901               cmp ecx, 1
// 004cc848  0f8e25010000         jle 0x4cc973
// 004cc84e  8bd1                 mov edx, ecx
// 004cc850  c1e204               shl edx, 4
// 004cc853  83c1ff               add ecx, -1
// 004cc856  8d743208             lea esi, [edx + esi + 8]
// 004cc85a  894c2410             mov dword ptr [esp + 0x10], ecx
// 004cc85e  8bff                 mov edi, edi
// 004cc860  8b3e                 mov edi, dword ptr [esi]
// 004cc862  337808               xor edi, dword ptr [eax + 8]
// 004cc865  8b56fc               mov edx, dword ptr [esi - 4]
// 004cc868  897c241c             mov dword ptr [esp + 0x1c], edi
// 004cc86c  8b7e04               mov edi, dword ptr [esi + 4]
// 004cc86f  33780c               xor edi, dword ptr [eax + 0xc]
// 004cc872  335004               xor edx, dword ptr [eax + 4]
// 004cc875  8b4ef8               mov ecx, dword ptr [esi - 8]
// 004cc878  3308                 xor ecx, dword ptr [eax]
// 004cc87a  8bdf                 mov ebx, edi
// 004cc87c  c1eb08               shr ebx, 8
// 004cc87f  897c2420             mov dword ptr [esp + 0x20], edi
// 004cc883  0fb6fb               movzx edi, bl
// 004cc886  8b3cbd18488900       mov edi, dword ptr [edi*4 + 0x894818]
// 004cc88d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004cc891  c1eb10               shr ebx, 0x10
// 004cc894  0fb6db               movzx ebx, bl
// 004cc897  333c9d184c8900       xor edi, dword ptr [ebx*4 + 0x894c18]
// 004cc89e  8bda                 mov ebx, edx
// 004cc8a0  c1eb18               shr ebx, 0x18
// 004cc8a3  333c9d18508900       xor edi, dword ptr [ebx*4 + 0x895018]
// 004cc8aa  0fb6d9               movzx ebx, cl
// 004cc8ad  333c9d18448900       xor edi, dword ptr [ebx*4 + 0x894418]
// 004cc8b4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc8b8  c1eb10               shr ebx, 0x10
// 004cc8bb  8938                 mov dword ptr [eax], edi
// 004cc8bd  0fb6fb               movzx edi, bl
// 004cc8c0  8b3cbd184c8900       mov edi, dword ptr [edi*4 + 0x894c18]
// 004cc8c7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004cc8cb  c1eb18               shr ebx, 0x18
// 004cc8ce  333c9d18508900       xor edi, dword ptr [ebx*4 + 0x895018]
// 004cc8d5  8bd9                 mov ebx, ecx
// 004cc8d7  c1eb08               shr ebx, 8
// 004cc8da  0fb6db               movzx ebx, bl
// 004cc8dd  333c9d18488900       xor edi, dword ptr [ebx*4 + 0x894818]
// 004cc8e4  0fb6da               movzx ebx, dl
// 004cc8e7  333c9d18448900       xor edi, dword ptr [ebx*4 + 0x894418]
// 004cc8ee  8bda                 mov ebx, edx
// 004cc8f0  897804               mov dword ptr [eax + 4], edi
// 004cc8f3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004cc8f7  c1ef18               shr edi, 0x18
// 004cc8fa  8b3cbd18508900       mov edi, dword ptr [edi*4 + 0x895018]
// 004cc901  c1eb08               shr ebx, 8
// 004cc904  0fb6db               movzx ebx, bl
// 004cc907  333c9d18488900       xor edi, dword ptr [ebx*4 + 0x894818]
// 004cc90e  8bd9                 mov ebx, ecx
// 004cc910  c1eb10               shr ebx, 0x10
// 004cc913  0fb6db               movzx ebx, bl
// 004cc916  333c9d184c8900       xor edi, dword ptr [ebx*4 + 0x894c18]
// 004cc91d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004cc921  0fb6eb               movzx ebp, bl
// 004cc924  333cad18448900       xor edi, dword ptr [ebp*4 + 0x894418]
// 004cc92b  c1eb08               shr ebx, 8
// 004cc92e  897808               mov dword ptr [eax + 8], edi
// 004cc931  c1ea10               shr edx, 0x10
// 004cc934  0fb6fb               movzx edi, bl
// 004cc937  8b3cbd18488900       mov edi, dword ptr [edi*4 + 0x894818]
// 004cc93e  0fb6d2               movzx edx, dl
// 004cc941  333c95184c8900       xor edi, dword ptr [edx*4 + 0x894c18]
// 004cc948  c1e918               shr ecx, 0x18
// 004cc94b  333c8d18508900       xor edi, dword ptr [ecx*4 + 0x895018]
// 004cc952  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 004cc957  333c8d18448900       xor edi, dword ptr [ecx*4 + 0x894418]
// 004cc95e  83ee10               sub esi, 0x10
// 004cc961  836c241001           sub dword ptr [esp + 0x10], 1
// 004cc966  89780c               mov dword ptr [eax + 0xc], edi
// 004cc969  0f85f1feffff         jne 0x4cc860
// 004cc96f  8b742430             mov esi, dword ptr [esp + 0x30]
// 004cc973  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004cc976  337808               xor edi, dword ptr [eax + 8]
// 004cc979  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004cc97c  3308                 xor ecx, dword ptr [eax]
// 004cc97e  8b5614               mov edx, dword ptr [esi + 0x14]
// 004cc981  897c241c             mov dword ptr [esp + 0x1c], edi
// 004cc985  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004cc988  33780c               xor edi, dword ptr [eax + 0xc]
// 004cc98b  335004               xor edx, dword ptr [eax + 4]
// 004cc98e  897c2420             mov dword ptr [esp + 0x20], edi
// 004cc992  0fb6f9               movzx edi, cl
// 004cc995  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cc99c  8818                 mov byte ptr [eax], bl
// 004cc99e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc9a2  c1eb08               shr ebx, 8
// 004cc9a5  0fb6fb               movzx edi, bl
// 004cc9a8  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cc9af  885801               mov byte ptr [eax + 1], bl
// 004cc9b2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004cc9b6  c1eb10               shr ebx, 0x10
// 004cc9b9  0fb6fb               movzx edi, bl
// 004cc9bc  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cc9c3  885802               mov byte ptr [eax + 2], bl
// 004cc9c6  8bfa                 mov edi, edx
// 004cc9c8  c1ef18               shr edi, 0x18
// 004cc9cb  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cc9d2  885803               mov byte ptr [eax + 3], bl
// 004cc9d5  0fb6fa               movzx edi, dl
// 004cc9d8  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cc9df  885804               mov byte ptr [eax + 4], bl
// 004cc9e2  8bd9                 mov ebx, ecx
// 004cc9e4  c1eb08               shr ebx, 8
// 004cc9e7  0fb6fb               movzx edi, bl
// 004cc9ea  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cc9f1  885805               mov byte ptr [eax + 5], bl
// 004cc9f4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc9f8  c1eb10               shr ebx, 0x10
// 004cc9fb  0fb6fb               movzx edi, bl
// 004cc9fe  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca05  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004cca09  885806               mov byte ptr [eax + 6], bl
// 004cca0c  c1ef18               shr edi, 0x18
// 004cca0f  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca16  0fb67c241c           movzx edi, byte ptr [esp + 0x1c]
// 004cca1b  885807               mov byte ptr [eax + 7], bl
// 004cca1e  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca25  885808               mov byte ptr [eax + 8], bl
// 004cca28  8bda                 mov ebx, edx
// 004cca2a  c1eb08               shr ebx, 8
// 004cca2d  0fb6fb               movzx edi, bl
// 004cca30  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca37  885809               mov byte ptr [eax + 9], bl
// 004cca3a  8bd9                 mov ebx, ecx
// 004cca3c  c1eb10               shr ebx, 0x10
// 004cca3f  0fb6fb               movzx edi, bl
// 004cca42  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca49  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004cca4d  88580a               mov byte ptr [eax + 0xa], bl
// 004cca50  c1ef18               shr edi, 0x18
// 004cca53  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca5a  0fb67c2420           movzx edi, byte ptr [esp + 0x20]
// 004cca5f  88580b               mov byte ptr [eax + 0xb], bl
// 004cca62  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca69  88580c               mov byte ptr [eax + 0xc], bl
// 004cca6c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004cca70  c1eb08               shr ebx, 8
// 004cca73  c1ea10               shr edx, 0x10
// 004cca76  0fb6fb               movzx edi, bl
// 004cca79  0fb69f18548900       movzx ebx, byte ptr [edi + 0x895418]
// 004cca80  0fb6d2               movzx edx, dl
// 004cca83  88580d               mov byte ptr [eax + 0xd], bl
// 004cca86  8a9218548900         mov dl, byte ptr [edx + 0x895418]
// 004cca8c  88500e               mov byte ptr [eax + 0xe], dl
// 004cca8f  c1e918               shr ecx, 0x18
// 004cca92  8a8918548900         mov cl, byte ptr [ecx + 0x895418]
// 004cca98  88480f               mov byte ptr [eax + 0xf], cl
// 004cca9b  8b16                 mov edx, dword ptr [esi]
// 004cca9d  3110                 xor dword ptr [eax], edx
// 004cca9f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ccaa2  314804               xor dword ptr [eax + 4], ecx
// 004ccaa5  8b5608               mov edx, dword ptr [esi + 8]
// 004ccaa8  315008               xor dword ptr [eax + 8], edx
// 004ccaab  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ccaae  31480c               xor dword ptr [eax + 0xc], ecx
// 004ccab1  5f                   pop edi
// 004ccab2  5e                   pop esi
// 004ccab3  5d                   pop ebp
// 004ccab4  33c0                 xor eax, eax
// 004ccab6  5b                   pop ebx
// 004ccab7  83c414               add esp, 0x14
// 004ccaba  c3                   ret 

// from server: 78% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp