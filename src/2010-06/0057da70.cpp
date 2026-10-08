// from server: 100% by auto
// roc 2010-06 0057da70  unit: seg_00570000  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057da70
//
// 0057da70  51                   push ecx
// 0057da71  53                   push ebx
// 0057da72  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057da76  56                   push esi
// 0057da77  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057da7b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0057da82  57                   push edi
// 0057da83  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057da8b  7e57                 jle 0x57dae4
// 0057da8d  85db                 test ebx, ebx
// 0057da8f  760f                 jbe 0x57daa0
// 0057da91  8b06                 mov eax, dword ptr [esi]
// 0057da93  83782c02             cmp dword ptr [eax + 0x2c], 2
// 0057da97  7507                 jne 0x57daa0
// 0057da99  8bd6                 mov edx, esi
// 0057da9b  e840f7ffff           call 0x57d1e0
// 0057daa0  8d8e180b0000         lea ecx, [esi + 0xb18]
// 0057daa6  51                   push ecx
// 0057daa7  e864faffff           call 0x57d510
// 0057daac  8d96240b0000         lea edx, [esi + 0xb24]
// 0057dab2  52                   push edx
// 0057dab3  e858faffff           call 0x57d510
// 0057dab8  83c408               add esp, 8
// 0057dabb  8bc6                 mov eax, esi
// 0057dabd  e84efcffff           call 0x57d710
// 0057dac2  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 0057dac8  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 0057dace  83c20a               add edx, 0xa
// 0057dad1  83c10a               add ecx, 0xa
// 0057dad4  c1ea03               shr edx, 3
// 0057dad7  c1e903               shr ecx, 3
// 0057dada  8944240c             mov dword ptr [esp + 0xc], eax
// 0057dade  3bca                 cmp ecx, edx
// 0057dae0  7707                 ja 0x57dae9
// 0057dae2  eb03                 jmp 0x57dae7
// 0057dae4  8d4b05               lea ecx, [ebx + 5]
// 0057dae7  8bd1                 mov edx, ecx
// 0057dae9  8d4304               lea eax, [ebx + 4]
// 0057daec  3bc2                 cmp eax, edx
// 0057daee  771d                 ja 0x57db0d
// 0057daf0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057daf4  85c0                 test eax, eax
// 0057daf6  7415                 je 0x57db0d
// 0057daf8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057dafc  57                   push edi
// 0057dafd  53                   push ebx
// 0057dafe  50                   push eax
// 0057daff  56                   push esi
// 0057db00  e8dbfcffff           call 0x57d7e0
// 0057db05  83c410               add esp, 0x10
// 0057db08  e94b010000           jmp 0x57dc58
// 0057db0d  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 0057db14  0f84b6000000         je 0x57dbd0
// 0057db1a  3bca                 cmp ecx, edx
// 0057db1c  0f84ae000000         je 0x57dbd0
// 0057db22  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0057db28  83f90d               cmp ecx, 0xd
// 0057db2b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057db2f  8d5704               lea edx, [edi + 4]
// 0057db32  7e50                 jle 0x57db84
// 0057db34  8bc2                 mov eax, edx
// 0057db36  d3e0                 shl eax, cl
// 0057db38  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057db3b  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0057db42  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0057db49  8b4614               mov eax, dword ptr [esi + 0x14]
// 0057db4c  881c01               mov byte ptr [ecx + eax], bl
// 0057db4f  ff4614               inc dword ptr [esi + 0x14]
// 0057db52  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0057db59  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057db5c  8b4608               mov eax, dword ptr [esi + 8]
// 0057db5f  881c01               mov byte ptr [ecx + eax], bl
// 0057db62  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 0057db68  ff4614               inc dword ptr [esi + 0x14]
// 0057db6b  b110                 mov cl, 0x10
// 0057db6d  2acb                 sub cl, bl
// 0057db6f  66d3ea               shr dx, cl
// 0057db72  83c3f3               add ebx, -0xd
// 0057db75  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 0057db7b  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 0057db82  eb12                 jmp 0x57db96
// 0057db84  d3e2                 shl edx, cl
// 0057db86  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0057db8d  83c103               add ecx, 3
// 0057db90  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0057db96  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057db9a  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 0057dba0  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 0057dba6  40                   inc eax
// 0057dba7  50                   push eax
// 0057dba8  41                   inc ecx
// 0057dba9  51                   push ecx
// 0057dbaa  42                   inc edx
// 0057dbab  52                   push edx
// 0057dbac  8bc6                 mov eax, esi
// 0057dbae  e8cdefffff           call 0x57cb80
// 0057dbb3  8d8688090000         lea eax, [esi + 0x988]
// 0057dbb9  50                   push eax
// 0057dbba  8d8e94000000         lea ecx, [esi + 0x94]
// 0057dbc0  51                   push ecx
// 0057dbc1  8bc6                 mov eax, esi
// 0057dbc3  e818f2ffff           call 0x57cde0
// 0057dbc8  83c414               add esp, 0x14
// 0057dbcb  e988000000           jmp 0x57dc58
// 0057dbd0  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0057dbd6  83f90d               cmp ecx, 0xd
// 0057dbd9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057dbdd  8d4702               lea eax, [edi + 2]
// 0057dbe0  7e50                 jle 0x57dc32
// 0057dbe2  8bd0                 mov edx, eax
// 0057dbe4  d3e2                 shl edx, cl
// 0057dbe6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057dbe9  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0057dbf0  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0057dbf7  8b5614               mov edx, dword ptr [esi + 0x14]
// 0057dbfa  881c11               mov byte ptr [ecx + edx], bl
// 0057dbfd  ff4614               inc dword ptr [esi + 0x14]
// 0057dc00  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0057dc07  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057dc0a  8b5608               mov edx, dword ptr [esi + 8]
// 0057dc0d  881c11               mov byte ptr [ecx + edx], bl
// 0057dc10  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 0057dc16  ff4614               inc dword ptr [esi + 0x14]
// 0057dc19  b110                 mov cl, 0x10
// 0057dc1b  2aca                 sub cl, dl
// 0057dc1d  66d3e8               shr ax, cl
// 0057dc20  83c2f3               add edx, -0xd
// 0057dc23  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 0057dc29  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 0057dc30  eb12                 jmp 0x57dc44
// 0057dc32  d3e0                 shl eax, cl
// 0057dc34  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0057dc3b  83c103               add ecx, 3
// 0057dc3e  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0057dc44  681080a200           push 0xa28010
// 0057dc49  68907ba200           push 0xa27b90
// 0057dc4e  8bc6                 mov eax, esi
// 0057dc50  e88bf1ffff           call 0x57cde0
// 0057dc55  83c408               add esp, 8
// 0057dc58  8bd6                 mov edx, esi
// 0057dc5a  e8c1e5ffff           call 0x57c220
// 0057dc5f  85ff                 test edi, edi
// 0057dc61  5f                   pop edi
// 0057dc62  740c                 je 0x57dc70
// 0057dc64  8bc6                 mov eax, esi
// 0057dc66  5e                   pop esi
// 0057dc67  5b                   pop ebx
// 0057dc68  83c404               add esp, 4
// 0057dc6b  e9c0f6ffff           jmp 0x57d330
// 0057dc70  5e                   pop esi
// 0057dc71  5b                   pop ebx
// 0057dc72  59                   pop ecx
// 0057dc73  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
