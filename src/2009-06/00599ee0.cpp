// roc 2009-06 00599ee0  unit: seg_00590000  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599ee0
//
// 00599ee0  51                   push ecx
// 00599ee1  53                   push ebx
// 00599ee2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00599ee6  56                   push esi
// 00599ee7  8b742410             mov esi, dword ptr [esp + 0x10]
// 00599eeb  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00599ef2  57                   push edi
// 00599ef3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00599efb  7e57                 jle 0x599f54
// 00599efd  85db                 test ebx, ebx
// 00599eff  760f                 jbe 0x599f10
// 00599f01  8b06                 mov eax, dword ptr [esi]
// 00599f03  83782c02             cmp dword ptr [eax + 0x2c], 2
// 00599f07  7507                 jne 0x599f10
// 00599f09  8bd6                 mov edx, esi
// 00599f0b  e840f7ffff           call 0x599650
// 00599f10  8d8e180b0000         lea ecx, [esi + 0xb18]
// 00599f16  51                   push ecx
// 00599f17  e864faffff           call 0x599980
// 00599f1c  8d96240b0000         lea edx, [esi + 0xb24]
// 00599f22  52                   push edx
// 00599f23  e858faffff           call 0x599980
// 00599f28  83c408               add esp, 8
// 00599f2b  8bc6                 mov eax, esi
// 00599f2d  e84efcffff           call 0x599b80
// 00599f32  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 00599f38  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 00599f3e  83c20a               add edx, 0xa
// 00599f41  83c10a               add ecx, 0xa
// 00599f44  c1ea03               shr edx, 3
// 00599f47  c1e903               shr ecx, 3
// 00599f4a  8944240c             mov dword ptr [esp + 0xc], eax
// 00599f4e  3bca                 cmp ecx, edx
// 00599f50  7707                 ja 0x599f59
// 00599f52  eb03                 jmp 0x599f57
// 00599f54  8d4b05               lea ecx, [ebx + 5]
// 00599f57  8bd1                 mov edx, ecx
// 00599f59  8d4304               lea eax, [ebx + 4]
// 00599f5c  3bc2                 cmp eax, edx
// 00599f5e  771d                 ja 0x599f7d
// 00599f60  8b442418             mov eax, dword ptr [esp + 0x18]
// 00599f64  85c0                 test eax, eax
// 00599f66  7415                 je 0x599f7d
// 00599f68  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00599f6c  57                   push edi
// 00599f6d  53                   push ebx
// 00599f6e  50                   push eax
// 00599f6f  56                   push esi
// 00599f70  e8dbfcffff           call 0x599c50
// 00599f75  83c410               add esp, 0x10
// 00599f78  e94b010000           jmp 0x59a0c8
// 00599f7d  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 00599f84  0f84b6000000         je 0x59a040
// 00599f8a  3bca                 cmp ecx, edx
// 00599f8c  0f84ae000000         je 0x59a040
// 00599f92  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 00599f98  83f90d               cmp ecx, 0xd
// 00599f9b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00599f9f  8d5704               lea edx, [edi + 4]
// 00599fa2  7e50                 jle 0x599ff4
// 00599fa4  8bc2                 mov eax, edx
// 00599fa6  d3e0                 shl eax, cl
// 00599fa8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00599fab  660986b8160000       or word ptr [esi + 0x16b8], ax
// 00599fb2  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 00599fb9  8b4614               mov eax, dword ptr [esi + 0x14]
// 00599fbc  881c01               mov byte ptr [ecx + eax], bl
// 00599fbf  ff4614               inc dword ptr [esi + 0x14]
// 00599fc2  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 00599fc9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00599fcc  8b4608               mov eax, dword ptr [esi + 8]
// 00599fcf  881c01               mov byte ptr [ecx + eax], bl
// 00599fd2  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 00599fd8  ff4614               inc dword ptr [esi + 0x14]
// 00599fdb  b110                 mov cl, 0x10
// 00599fdd  2acb                 sub cl, bl
// 00599fdf  66d3ea               shr dx, cl
// 00599fe2  83c3f3               add ebx, -0xd
// 00599fe5  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 00599feb  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 00599ff2  eb12                 jmp 0x59a006
// 00599ff4  d3e2                 shl edx, cl
// 00599ff6  660996b8160000       or word ptr [esi + 0x16b8], dx
// 00599ffd  83c103               add ecx, 3
// 0059a000  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0059a006  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059a00a  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 0059a010  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 0059a016  40                   inc eax
// 0059a017  50                   push eax
// 0059a018  41                   inc ecx
// 0059a019  51                   push ecx
// 0059a01a  42                   inc edx
// 0059a01b  52                   push edx
// 0059a01c  8bc6                 mov eax, esi
// 0059a01e  e8cdefffff           call 0x598ff0
// 0059a023  8d8688090000         lea eax, [esi + 0x988]
// 0059a029  50                   push eax
// 0059a02a  8d8e94000000         lea ecx, [esi + 0x94]
// 0059a030  51                   push ecx
// 0059a031  8bc6                 mov eax, esi
// 0059a033  e818f2ffff           call 0x599250
// 0059a038  83c414               add esp, 0x14
// 0059a03b  e988000000           jmp 0x59a0c8
// 0059a040  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 0059a046  83f90d               cmp ecx, 0xd
// 0059a049  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059a04d  8d4702               lea eax, [edi + 2]
// 0059a050  7e50                 jle 0x59a0a2
// 0059a052  8bd0                 mov edx, eax
// 0059a054  d3e2                 shl edx, cl
// 0059a056  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059a059  660996b8160000       or word ptr [esi + 0x16b8], dx
// 0059a060  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 0059a067  8b5614               mov edx, dword ptr [esi + 0x14]
// 0059a06a  881c11               mov byte ptr [ecx + edx], bl
// 0059a06d  ff4614               inc dword ptr [esi + 0x14]
// 0059a070  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 0059a077  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0059a07a  8b5608               mov edx, dword ptr [esi + 8]
// 0059a07d  881c11               mov byte ptr [ecx + edx], bl
// 0059a080  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 0059a086  ff4614               inc dword ptr [esi + 0x14]
// 0059a089  b110                 mov cl, 0x10
// 0059a08b  2aca                 sub cl, dl
// 0059a08d  66d3e8               shr ax, cl
// 0059a090  83c2f3               add edx, -0xd
// 0059a093  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 0059a099  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 0059a0a0  eb12                 jmp 0x59a0b4
// 0059a0a2  d3e0                 shl eax, cl
// 0059a0a4  660986b8160000       or word ptr [esi + 0x16b8], ax
// 0059a0ab  83c103               add ecx, 3
// 0059a0ae  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 0059a0b4  6800348d00           push 0x8d3400
// 0059a0b9  68802f8d00           push 0x8d2f80
// 0059a0be  8bc6                 mov eax, esi
// 0059a0c0  e88bf1ffff           call 0x599250
// 0059a0c5  83c408               add esp, 8
// 0059a0c8  8bd6                 mov edx, esi
// 0059a0ca  e8c1e5ffff           call 0x598690
// 0059a0cf  85ff                 test edi, edi
// 0059a0d1  5f                   pop edi
// 0059a0d2  740c                 je 0x59a0e0
// 0059a0d4  8bc6                 mov eax, esi
// 0059a0d6  5e                   pop esi
// 0059a0d7  5b                   pop ebx
// 0059a0d8  83c404               add esp, 4
// 0059a0db  e9c0f6ffff           jmp 0x5997a0
// 0059a0e0  5e                   pop esi
// 0059a0e1  5b                   pop ebx
// 0059a0e2  59                   pop ecx
// 0059a0e3  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
