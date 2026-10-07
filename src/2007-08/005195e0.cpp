// roc 2007-08 005195e0  unit: seg_00510000  size: 793 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005195e0
//
// 005195e0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005195e4  53                   push ebx
// 005195e5  55                   push ebp
// 005195e6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005195ea  8a4508               mov al, byte ptr [ebp + 8]
// 005195ed  8bda                 mov ebx, edx
// 005195ef  56                   push esi
// 005195f0  8b7500               mov esi, dword ptr [ebp]
// 005195f3  c1eb08               shr ebx, 8
// 005195f6  84c0                 test al, al
// 005195f8  57                   push edi
// 005195f9  885c2414             mov byte ptr [esp + 0x14], bl
// 005195fd  0f8530010000         jne 0x519733
// 00519603  8a4509               mov al, byte ptr [ebp + 9]
// 00519606  3c08                 cmp al, 8
// 00519608  7572                 jne 0x51967c
// 0051960a  f644242080           test byte ptr [esp + 0x20], 0x80
// 0051960f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00519613  8d3c06               lea edi, [esi + eax]
// 00519616  8d0437               lea eax, [edi + esi]
// 00519619  7433                 je 0x51964e
// 0051961b  83fe01               cmp esi, 1
// 0051961e  7618                 jbe 0x519638
// 00519620  8d4eff               lea ecx, [esi - 1]
// 00519623  83e801               sub eax, 1
// 00519626  8810                 mov byte ptr [eax], dl
// 00519628  8a5fff               mov bl, byte ptr [edi - 1]
// 0051962b  83ef01               sub edi, 1
// 0051962e  83e801               sub eax, 1
// 00519631  83e901               sub ecx, 1
// 00519634  8818                 mov byte ptr [eax], bl
// 00519636  75eb                 jne 0x519623
// 00519638  5f                   pop edi
// 00519639  8850ff               mov byte ptr [eax - 1], dl
// 0051963c  8d0c36               lea ecx, [esi + esi]
// 0051963f  5e                   pop esi
// 00519640  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00519644  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00519648  894d04               mov dword ptr [ebp + 4], ecx
// 0051964b  5d                   pop ebp
// 0051964c  5b                   pop ebx
// 0051964d  c3                   ret 
// 0051964e  85f6                 test esi, esi
// 00519650  7617                 jbe 0x519669
// 00519652  8bce                 mov ecx, esi
// 00519654  8a5fff               mov bl, byte ptr [edi - 1]
// 00519657  83ef01               sub edi, 1
// 0051965a  83e801               sub eax, 1
// 0051965d  8818                 mov byte ptr [eax], bl
// 0051965f  83e801               sub eax, 1
// 00519662  83e901               sub ecx, 1
// 00519665  8810                 mov byte ptr [eax], dl
// 00519667  75eb                 jne 0x519654
// 00519669  5f                   pop edi
// 0051966a  8d0c36               lea ecx, [esi + esi]
// 0051966d  5e                   pop esi
// 0051966e  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00519672  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00519676  894d04               mov dword ptr [ebp + 4], ecx
// 00519679  5d                   pop ebp
// 0051967a  5b                   pop ebx
// 0051967b  c3                   ret 
// 0051967c  3c10                 cmp al, 0x10
// 0051967e  0f8570020000         jne 0x5198f4
// 00519684  f644242080           test byte ptr [esp + 0x20], 0x80
// 00519689  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051968d  8d3c70               lea edi, [eax + esi*2]
// 00519690  8d0477               lea eax, [edi + esi*2]
// 00519693  7456                 je 0x5196eb
// 00519695  83fe01               cmp esi, 1
// 00519698  7631                 jbe 0x5196cb
// 0051969a  8d4eff               lea ecx, [esi - 1]
// 0051969d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005196a1  8858ff               mov byte ptr [eax - 1], bl
// 005196a4  83e801               sub eax, 1
// 005196a7  83e801               sub eax, 1
// 005196aa  8810                 mov byte ptr [eax], dl
// 005196ac  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005196b0  83ef01               sub edi, 1
// 005196b3  83e801               sub eax, 1
// 005196b6  8808                 mov byte ptr [eax], cl
// 005196b8  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005196bc  83ef01               sub edi, 1
// 005196bf  83e801               sub eax, 1
// 005196c2  836c241401           sub dword ptr [esp + 0x14], 1
// 005196c7  8808                 mov byte ptr [eax], cl
// 005196c9  75d6                 jne 0x5196a1
// 005196cb  8858ff               mov byte ptr [eax - 1], bl
// 005196ce  83e801               sub eax, 1
// 005196d1  8850ff               mov byte ptr [eax - 1], dl
// 005196d4  5f                   pop edi
// 005196d5  8d14b500000000       lea edx, [esi*4]
// 005196dc  5e                   pop esi
// 005196dd  c6450a02             mov byte ptr [ebp + 0xa], 2
// 005196e1  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 005196e5  895504               mov dword ptr [ebp + 4], edx
// 005196e8  5d                   pop ebp
// 005196e9  5b                   pop ebx
// 005196ea  c3                   ret 
// 005196eb  85f6                 test esi, esi
// 005196ed  762d                 jbe 0x51971c
// 005196ef  89742414             mov dword ptr [esp + 0x14], esi
// 005196f3  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005196f7  83ef01               sub edi, 1
// 005196fa  83e801               sub eax, 1
// 005196fd  8808                 mov byte ptr [eax], cl
// 005196ff  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 00519703  83ef01               sub edi, 1
// 00519706  83e801               sub eax, 1
// 00519709  8808                 mov byte ptr [eax], cl
// 0051970b  83e801               sub eax, 1
// 0051970e  8818                 mov byte ptr [eax], bl
// 00519710  83e801               sub eax, 1
// 00519713  836c241401           sub dword ptr [esp + 0x14], 1
// 00519718  8810                 mov byte ptr [eax], dl
// 0051971a  75d7                 jne 0x5196f3
// 0051971c  5f                   pop edi
// 0051971d  8d14b500000000       lea edx, [esi*4]
// 00519724  5e                   pop esi
// 00519725  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00519729  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 0051972d  895504               mov dword ptr [ebp + 4], edx
// 00519730  5d                   pop ebp
// 00519731  5b                   pop ebx
// 00519732  c3                   ret 
// 00519733  3c02                 cmp al, 2
// 00519735  0f85b9010000         jne 0x5198f4
// 0051973b  8a4509               mov al, byte ptr [ebp + 9]
// 0051973e  3c08                 cmp al, 8
// 00519740  0f85a0000000         jne 0x5197e6
// 00519746  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051974a  8d3c70               lea edi, [eax + esi*2]
// 0051974d  03fe                 add edi, esi
// 0051974f  f644242080           test byte ptr [esp + 0x20], 0x80
// 00519754  8d0437               lea eax, [edi + esi]
// 00519757  743c                 je 0x519795
// 00519759  83fe01               cmp esi, 1
// 0051975c  7632                 jbe 0x519790
// 0051975e  8d4eff               lea ecx, [esi - 1]
// 00519761  8850ff               mov byte ptr [eax - 1], dl
// 00519764  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00519768  83e801               sub eax, 1
// 0051976b  83ef01               sub edi, 1
// 0051976e  83e801               sub eax, 1
// 00519771  8818                 mov byte ptr [eax], bl
// 00519773  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00519777  83ef01               sub edi, 1
// 0051977a  83e801               sub eax, 1
// 0051977d  8818                 mov byte ptr [eax], bl
// 0051977f  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00519783  83ef01               sub edi, 1
// 00519786  83e801               sub eax, 1
// 00519789  83e901               sub ecx, 1
// 0051978c  8818                 mov byte ptr [eax], bl
// 0051978e  75d1                 jne 0x519761
// 00519790  8850ff               mov byte ptr [eax - 1], dl
// 00519793  eb3a                 jmp 0x5197cf
// 00519795  85f6                 test esi, esi
// 00519797  7636                 jbe 0x5197cf
// 00519799  8bce                 mov ecx, esi
// 0051979b  eb03                 jmp 0x5197a0
// 0051979d  8d4900               lea ecx, [ecx]
// 005197a0  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 005197a4  83ef01               sub edi, 1
// 005197a7  8858ff               mov byte ptr [eax - 1], bl
// 005197aa  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 005197ae  83e801               sub eax, 1
// 005197b1  83ef01               sub edi, 1
// 005197b4  83e801               sub eax, 1
// 005197b7  8818                 mov byte ptr [eax], bl
// 005197b9  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 005197bd  83ef01               sub edi, 1
// 005197c0  83e801               sub eax, 1
// 005197c3  8818                 mov byte ptr [eax], bl
// 005197c5  83e801               sub eax, 1
// 005197c8  83e901               sub ecx, 1
// 005197cb  8810                 mov byte ptr [eax], dl
// 005197cd  75d1                 jne 0x5197a0
// 005197cf  5f                   pop edi
// 005197d0  8d0cb500000000       lea ecx, [esi*4]
// 005197d7  5e                   pop esi
// 005197d8  c6450a04             mov byte ptr [ebp + 0xa], 4
// 005197dc  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 005197e0  894d04               mov dword ptr [ebp + 4], ecx
// 005197e3  5d                   pop ebp
// 005197e4  5b                   pop ebx
// 005197e5  c3                   ret 
// 005197e6  3c10                 cmp al, 0x10
// 005197e8  0f8506010000         jne 0x5198f4
// 005197ee  f644242080           test byte ptr [esp + 0x20], 0x80
// 005197f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005197f7  8d0476               lea eax, [esi + esi*2]
// 005197fa  8d0c41               lea ecx, [ecx + eax*2]
// 005197fd  8d0471               lea eax, [ecx + esi*2]
// 00519800  0f8475000000         je 0x51987b
// 00519806  83fe01               cmp esi, 1
// 00519809  7666                 jbe 0x519871
// 0051980b  8d7eff               lea edi, [esi - 1]
// 0051980e  8bff                 mov edi, edi
// 00519810  8858ff               mov byte ptr [eax - 1], bl
// 00519813  83e801               sub eax, 1
// 00519816  8850ff               mov byte ptr [eax - 1], dl
// 00519819  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051981d  83e801               sub eax, 1
// 00519820  8858ff               mov byte ptr [eax - 1], bl
// 00519823  83e901               sub ecx, 1
// 00519826  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051982a  83e801               sub eax, 1
// 0051982d  8858ff               mov byte ptr [eax - 1], bl
// 00519830  83e901               sub ecx, 1
// 00519833  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519837  83e801               sub eax, 1
// 0051983a  83e901               sub ecx, 1
// 0051983d  8858ff               mov byte ptr [eax - 1], bl
// 00519840  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519844  83e801               sub eax, 1
// 00519847  83e901               sub ecx, 1
// 0051984a  8858ff               mov byte ptr [eax - 1], bl
// 0051984d  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519851  83e801               sub eax, 1
// 00519854  83e901               sub ecx, 1
// 00519857  83e801               sub eax, 1
// 0051985a  8818                 mov byte ptr [eax], bl
// 0051985c  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519860  83e901               sub ecx, 1
// 00519863  83e801               sub eax, 1
// 00519866  83ef01               sub edi, 1
// 00519869  8818                 mov byte ptr [eax], bl
// 0051986b  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 0051986f  759f                 jne 0x519810
// 00519871  83e801               sub eax, 1
// 00519874  8818                 mov byte ptr [eax], bl
// 00519876  8850ff               mov byte ptr [eax - 1], dl
// 00519879  eb67                 jmp 0x5198e2
// 0051987b  85f6                 test esi, esi
// 0051987d  7663                 jbe 0x5198e2
// 0051987f  8bfe                 mov edi, esi
// 00519881  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00519885  8858ff               mov byte ptr [eax - 1], bl
// 00519888  83e901               sub ecx, 1
// 0051988b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051988f  83e801               sub eax, 1
// 00519892  8858ff               mov byte ptr [eax - 1], bl
// 00519895  83e901               sub ecx, 1
// 00519898  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051989c  83e801               sub eax, 1
// 0051989f  8858ff               mov byte ptr [eax - 1], bl
// 005198a2  83e901               sub ecx, 1
// 005198a5  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005198a9  83e801               sub eax, 1
// 005198ac  8858ff               mov byte ptr [eax - 1], bl
// 005198af  83e901               sub ecx, 1
// 005198b2  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005198b6  83e801               sub eax, 1
// 005198b9  83e901               sub ecx, 1
// 005198bc  8858ff               mov byte ptr [eax - 1], bl
// 005198bf  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005198c3  83e801               sub eax, 1
// 005198c6  83e901               sub ecx, 1
// 005198c9  83e801               sub eax, 1
// 005198cc  8818                 mov byte ptr [eax], bl
// 005198ce  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 005198d3  83e801               sub eax, 1
// 005198d6  8818                 mov byte ptr [eax], bl
// 005198d8  83e801               sub eax, 1
// 005198db  83ef01               sub edi, 1
// 005198de  8810                 mov byte ptr [eax], dl
// 005198e0  759f                 jne 0x519881
// 005198e2  8d14f500000000       lea edx, [esi*8]
// 005198e9  c6450b40             mov byte ptr [ebp + 0xb], 0x40
// 005198ed  c6450a04             mov byte ptr [ebp + 0xa], 4
// 005198f1  895504               mov dword ptr [ebp + 4], edx
// 005198f4  5f                   pop edi
// 005198f5  5e                   pop esi
// 005198f6  5d                   pop ebp
// 005198f7  5b                   pop ebx
// 005198f8  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_do_read_filler)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
