// from server: 100% by auto
// roc 2011-06 00574560  unit: seg_00570000  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574560
//
// 00574560  51                   push ecx
// 00574561  53                   push ebx
// 00574562  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00574566  56                   push esi
// 00574567  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057456b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00574572  57                   push edi
// 00574573  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057457b  7e57                 jle 0x5745d4
// 0057457d  85db                 test ebx, ebx
// 0057457f  760f                 jbe 0x574590
// 00574581  8b06                 mov eax, dword ptr [esi]
// 00574583  83782c02             cmp dword ptr [eax + 0x2c], 2
// 00574587  7507                 jne 0x574590
// 00574589  8bd6                 mov edx, esi
// 0057458b  e840f7ffff           call 0x573cd0
// 00574590  8d8e180b0000         lea ecx, [esi + 0xb18]
// 00574596  51                   push ecx
// 00574597  e864faffff           call 0x574000
// 0057459c  8d96240b0000         lea edx, [esi + 0xb24]
// 005745a2  52                   push edx
// 005745a3  e858faffff           call 0x574000
// 005745a8  83c408               add esp, 8
// 005745ab  8bc6                 mov eax, esi
// 005745ad  e84efcffff           call 0x574200
// 005745b2  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 005745b8  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 005745be  83c20a               add edx, 0xa
// 005745c1  83c10a               add ecx, 0xa
// 005745c4  c1ea03               shr edx, 3
// 005745c7  c1e903               shr ecx, 3
// 005745ca  8944240c             mov dword ptr [esp + 0xc], eax
// 005745ce  3bca                 cmp ecx, edx
// 005745d0  7707                 ja 0x5745d9
// 005745d2  eb03                 jmp 0x5745d7
// 005745d4  8d4b05               lea ecx, [ebx + 5]
// 005745d7  8bd1                 mov edx, ecx
// 005745d9  8d4304               lea eax, [ebx + 4]
// 005745dc  3bc2                 cmp eax, edx
// 005745de  771d                 ja 0x5745fd
// 005745e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 005745e4  85c0                 test eax, eax
// 005745e6  7415                 je 0x5745fd
// 005745e8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005745ec  57                   push edi
// 005745ed  53                   push ebx
// 005745ee  50                   push eax
// 005745ef  56                   push esi
// 005745f0  e8dbfcffff           call 0x5742d0
// 005745f5  83c410               add esp, 0x10
// 005745f8  e94b010000           jmp 0x574748
// 005745fd  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 00574604  0f84b6000000         je 0x5746c0
// 0057460a  3bca                 cmp ecx, edx
// 0057460c  0f84ae000000         je 0x5746c0
// 00574612  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 00574618  83f90d               cmp ecx, 0xd
// 0057461b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057461f  8d5704               lea edx, [edi + 4]
// 00574622  7e50                 jle 0x574674
// 00574624  8bc2                 mov eax, edx
// 00574626  d3e0                 shl eax, cl
// 00574628  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057462b  660986b8160000       or word ptr [esi + 0x16b8], ax
// 00574632  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 00574639  8b4614               mov eax, dword ptr [esi + 0x14]
// 0057463c  881c01               mov byte ptr [ecx + eax], bl
// 0057463f  ff4614               inc dword ptr [esi + 0x14]
// 00574642  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 00574649  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057464c  8b4608               mov eax, dword ptr [esi + 8]
// 0057464f  881c01               mov byte ptr [ecx + eax], bl
// 00574652  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 00574658  ff4614               inc dword ptr [esi + 0x14]
// 0057465b  b110                 mov cl, 0x10
// 0057465d  2acb                 sub cl, bl
// 0057465f  66d3ea               shr dx, cl
// 00574662  83c3f3               add ebx, -0xd
// 00574665  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 0057466b  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 00574672  eb12                 jmp 0x574686
// 00574674  d3e2                 shl edx, cl
// 00574676  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0057467d  83c103               add ecx, 3
// 00574680  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 00574686  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057468a  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 00574690  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 00574696  40                   inc eax
// 00574697  50                   push eax
// 00574698  41                   inc ecx
// 00574699  51                   push ecx
// 0057469a  42                   inc edx
// 0057469b  52                   push edx
// 0057469c  8bc6                 mov eax, esi
// 0057469e  e8cdefffff           call 0x573670
// 005746a3  8d8688090000         lea eax, [esi + 0x988]
// 005746a9  50                   push eax
// 005746aa  8d8e94000000         lea ecx, [esi + 0x94]
// 005746b0  51                   push ecx
// 005746b1  8bc6                 mov eax, esi
// 005746b3  e818f2ffff           call 0x5738d0
// 005746b8  83c414               add esp, 0x14
// 005746bb  e988000000           jmp 0x574748
// 005746c0  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 005746c6  83f90d               cmp ecx, 0xd
// 005746c9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005746cd  8d4702               lea eax, [edi + 2]
// 005746d0  7e50                 jle 0x574722
// 005746d2  8bd0                 mov edx, eax
// 005746d4  d3e2                 shl edx, cl
// 005746d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005746d9  660996b8160000       or word ptr [esi + 0x16b8], dx
// 005746e0  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 005746e7  8b5614               mov edx, dword ptr [esi + 0x14]
// 005746ea  881c11               mov byte ptr [ecx + edx], bl
// 005746ed  ff4614               inc dword ptr [esi + 0x14]
// 005746f0  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 005746f7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005746fa  8b5608               mov edx, dword ptr [esi + 8]
// 005746fd  881c11               mov byte ptr [ecx + edx], bl
// 00574700  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 00574706  ff4614               inc dword ptr [esi + 0x14]
// 00574709  b110                 mov cl, 0x10
// 0057470b  2aca                 sub cl, dl
// 0057470d  66d3e8               shr ax, cl
// 00574710  83c2f3               add edx, -0xd
// 00574713  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 00574719  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 00574720  eb12                 jmp 0x574734
// 00574722  d3e0                 shl eax, cl
// 00574724  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0057472b  83c103               add ecx, 3
// 0057472e  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 00574734  686078a800           push 0xa87860
// 00574739  68e073a800           push 0xa873e0
// 0057473e  8bc6                 mov eax, esi
// 00574740  e88bf1ffff           call 0x5738d0
// 00574745  83c408               add esp, 8
// 00574748  8bd6                 mov edx, esi
// 0057474a  e8c1e5ffff           call 0x572d10
// 0057474f  85ff                 test edi, edi
// 00574751  5f                   pop edi
// 00574752  740c                 je 0x574760
// 00574754  8bc6                 mov eax, esi
// 00574756  5e                   pop esi
// 00574757  5b                   pop ebx
// 00574758  83c404               add esp, 4
// 0057475b  e9c0f6ffff           jmp 0x573e20
// 00574760  5e                   pop esi
// 00574761  5b                   pop ebx
// 00574762  59                   pop ecx
// 00574763  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
