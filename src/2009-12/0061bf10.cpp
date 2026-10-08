// roc 2009-12 0061bf10  unit: seg_00610000  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061bf10
//
// 0061bf10  51                   push ecx
// 0061bf11  53                   push ebx
// 0061bf12  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0061bf16  56                   push esi
// 0061bf17  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061bf1b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0061bf22  57                   push edi
// 0061bf23  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0061bf2b  7e57                 jle 0x61bf84
// 0061bf2d  85db                 test ebx, ebx
// 0061bf2f  760f                 jbe 0x61bf40
// 0061bf31  8b06                 mov eax, dword ptr [esi]
// 0061bf33  83782c02             cmp dword ptr [eax + 0x2c], 2
// 0061bf37  7507                 jne 0x61bf40
// 0061bf39  8bd6                 mov edx, esi
// 0061bf3b  e840f7ffff           call 0x61b680
// 0061bf40  8d8e180b0000         lea ecx, [esi + 0xb18]
// 0061bf46  51                   push ecx
// 0061bf47  e864faffff           call 0x61b9b0
// 0061bf4c  8d96240b0000         lea edx, [esi + 0xb24]
// 0061bf52  52                   push edx
// 0061bf53  e858faffff           call 0x61b9b0
// 0061bf58  83c408               add esp, 8
// 0061bf5b  8bc6                 mov eax, esi
// 0061bf5d  e84efcffff           call 0x61bbb0
// 0061bf62  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 0061bf68  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 0061bf6e  83c20a               add edx, 0xa
// 0061bf71  83c10a               add ecx, 0xa
// 0061bf74  c1ea03               shr edx, 3
// 0061bf77  c1e903               shr ecx, 3
// 0061bf7a  8944240c             mov dword ptr [esp + 0xc], eax
// 0061bf7e  3bca                 cmp ecx, edx
// 0061bf80  7707                 ja 0x61bf89
// 0061bf82  eb03                 jmp 0x61bf87
// 0061bf84  8d4b05               lea ecx, [ebx + 5]
// 0061bf87  8bd1                 mov edx, ecx
// 0061bf89  8d4304               lea eax, [ebx + 4]
// 0061bf8c  3bc2                 cmp eax, edx
// 0061bf8e  771d                 ja 0x61bfad
// 0061bf90  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061bf94  85c0                 test eax, eax
// 0061bf96  7415                 je 0x61bfad
// 0061bf98  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061bf9c  57                   push edi
// 0061bf9d  53                   push ebx
// 0061bf9e  50                   push eax
// 0061bf9f  56                   push esi
// 0061bfa0  e8dbfcffff           call 0x61bc80
// 0061bfa5  83c410               add esp, 0x10
// 0061bfa8  e94b010000           jmp 0x61c0f8
// 0061bfad  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 0061bfb4  0f84b6000000         je 0x61c070
// 0061bfba  3bca                 cmp ecx, edx
// 0061bfbc  0f84ae000000         je 0x61c070
// 0061bfc2  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0061bfc8  83f90d               cmp ecx, 0xd
// 0061bfcb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061bfcf  8d5704               lea edx, [edi + 4]
// 0061bfd2  7e50                 jle 0x61c024
// 0061bfd4  8bc2                 mov eax, edx
// 0061bfd6  d3e0                 shl eax, cl
// 0061bfd8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061bfdb  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0061bfe2  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0061bfe9  8b4614               mov eax, dword ptr [esi + 0x14]
// 0061bfec  881c01               mov byte ptr [ecx + eax], bl
// 0061bfef  ff4614               inc dword ptr [esi + 0x14]
// 0061bff2  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0061bff9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0061bffc  8b4608               mov eax, dword ptr [esi + 8]
// 0061bfff  881c01               mov byte ptr [ecx + eax], bl
// 0061c002  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 0061c008  ff4614               inc dword ptr [esi + 0x14]
// 0061c00b  b110                 mov cl, 0x10
// 0061c00d  2acb                 sub cl, bl
// 0061c00f  66d3ea               shr dx, cl
// 0061c012  83c3f3               add ebx, -0xd
// 0061c015  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 0061c01b  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 0061c022  eb12                 jmp 0x61c036
// 0061c024  d3e2                 shl edx, cl
// 0061c026  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0061c02d  83c103               add ecx, 3
// 0061c030  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0061c036  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061c03a  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 0061c040  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 0061c046  40                   inc eax
// 0061c047  50                   push eax
// 0061c048  41                   inc ecx
// 0061c049  51                   push ecx
// 0061c04a  42                   inc edx
// 0061c04b  52                   push edx
// 0061c04c  8bc6                 mov eax, esi
// 0061c04e  e8cdefffff           call 0x61b020
// 0061c053  8d8688090000         lea eax, [esi + 0x988]
// 0061c059  50                   push eax
// 0061c05a  8d8e94000000         lea ecx, [esi + 0x94]
// 0061c060  51                   push ecx
// 0061c061  8bc6                 mov eax, esi
// 0061c063  e818f2ffff           call 0x61b280
// 0061c068  83c414               add esp, 0x14
// 0061c06b  e988000000           jmp 0x61c0f8
// 0061c070  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0061c076  83f90d               cmp ecx, 0xd
// 0061c079  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061c07d  8d4702               lea eax, [edi + 2]
// 0061c080  7e50                 jle 0x61c0d2
// 0061c082  8bd0                 mov edx, eax
// 0061c084  d3e2                 shl edx, cl
// 0061c086  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061c089  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0061c090  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0061c097  8b5614               mov edx, dword ptr [esi + 0x14]
// 0061c09a  881c11               mov byte ptr [ecx + edx], bl
// 0061c09d  ff4614               inc dword ptr [esi + 0x14]
// 0061c0a0  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0061c0a7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0061c0aa  8b5608               mov edx, dword ptr [esi + 8]
// 0061c0ad  881c11               mov byte ptr [ecx + edx], bl
// 0061c0b0  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 0061c0b6  ff4614               inc dword ptr [esi + 0x14]
// 0061c0b9  b110                 mov cl, 0x10
// 0061c0bb  2aca                 sub cl, dl
// 0061c0bd  66d3e8               shr ax, cl
// 0061c0c0  83c2f3               add edx, -0xd
// 0061c0c3  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 0061c0c9  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 0061c0d0  eb12                 jmp 0x61c0e4
// 0061c0d2  d3e0                 shl eax, cl
// 0061c0d4  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0061c0db  83c103               add ecx, 3
// 0061c0de  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0061c0e4  6890a29c00           push 0x9ca290
// 0061c0e9  68109e9c00           push 0x9c9e10
// 0061c0ee  8bc6                 mov eax, esi
// 0061c0f0  e88bf1ffff           call 0x61b280
// 0061c0f5  83c408               add esp, 8
// 0061c0f8  8bd6                 mov edx, esi
// 0061c0fa  e8c1e5ffff           call 0x61a6c0
// 0061c0ff  85ff                 test edi, edi
// 0061c101  5f                   pop edi
// 0061c102  740c                 je 0x61c110
// 0061c104  8bc6                 mov eax, esi
// 0061c106  5e                   pop esi
// 0061c107  5b                   pop ebx
// 0061c108  83c404               add esp, 4
// 0061c10b  e9c0f6ffff           jmp 0x61b7d0
// 0061c110  5e                   pop esi
// 0061c111  5b                   pop ebx
// 0061c112  59                   pop ecx
// 0061c113  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
