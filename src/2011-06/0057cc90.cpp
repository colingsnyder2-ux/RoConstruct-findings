// from server: 100% by auto
// roc 2011-06 0057cc90  unit: seg_00570000  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057cc90
//
// 0057cc90  83ec10               sub esp, 0x10
// 0057cc93  55                   push ebp
// 0057cc94  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057cc98  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0057cc9b  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 0057cca1  8b11                 mov edx, dword ptr [ecx]
// 0057cca3  56                   push esi
// 0057cca4  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 0057ccaa  57                   push edi
// 0057ccab  8bbd30010000         mov edi, dword ptr [ebp + 0x130]
// 0057ccb1  895610               mov dword ptr [esi + 0x10], edx
// 0057ccb4  8944240c             mov dword ptr [esp + 0xc], eax
// 0057ccb8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0057ccbb  8b4804               mov ecx, dword ptr [eax + 4]
// 0057ccbe  894e14               mov dword ptr [esi + 0x14], ecx
// 0057ccc1  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 0057ccc8  897c2418             mov dword ptr [esp + 0x18], edi
// 0057cccc  7414                 je 0x57cce2
// 0057ccce  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057ccd2  750e                 jne 0x57cce2
// 0057ccd4  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057ccd7  52                   push edx
// 0057ccd8  8bc6                 mov eax, esi
// 0057ccda  e8a1fdffff           call 0x57ca80
// 0057ccdf  83c404               add esp, 4
// 0057cce2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057cce6  8b08                 mov ecx, dword ptr [eax]
// 0057cce8  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 0057ccee  53                   push ebx
// 0057ccef  33db                 xor ebx, ebx
// 0057ccf1  3bc7                 cmp eax, edi
// 0057ccf3  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057ccf7  89442414             mov dword ptr [esp + 0x14], eax
// 0057ccfb  0f8f33010000         jg 0x57ce34
// 0057cd01  8b1485f058a800       mov edx, dword ptr [eax*4 + 0xa858f0]
// 0057cd08  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057cd0c  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 0057cd10  85ff                 test edi, edi
// 0057cd12  7506                 jne 0x57cd1a
// 0057cd14  43                   inc ebx
// 0057cd15  e9f4000000           jmp 0x57ce0e
// 0057cd1a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057cd1e  7d0e                 jge 0x57cd2e
// 0057cd20  f7df                 neg edi
// 0057cd22  d3ff                 sar edi, cl
// 0057cd24  8bcf                 mov ecx, edi
// 0057cd26  f7d1                 not ecx
// 0057cd28  894c2428             mov dword ptr [esp + 0x28], ecx
// 0057cd2c  eb06                 jmp 0x57cd34
// 0057cd2e  d3ff                 sar edi, cl
// 0057cd30  897c2428             mov dword ptr [esp + 0x28], edi
// 0057cd34  85ff                 test edi, edi
// 0057cd36  7506                 jne 0x57cd3e
// 0057cd38  43                   inc ebx
// 0057cd39  e9d0000000           jmp 0x57ce0e
// 0057cd3e  837e3800             cmp dword ptr [esi + 0x38], 0
// 0057cd42  7607                 jbe 0x57cd4b
// 0057cd44  8bc6                 mov eax, esi
// 0057cd46  e895fcffff           call 0x57c9e0
// 0057cd4b  83fb0f               cmp ebx, 0xf
// 0057cd4e  7e45                 jle 0x57cd95
// 0057cd50  8d6bf0               lea ebp, [ebx - 0x10]
// 0057cd53  c1ed04               shr ebp, 4
// 0057cd56  45                   inc ebp
// 0057cd57  8bd5                 mov edx, ebp
// 0057cd59  f7da                 neg edx
// 0057cd5b  c1e204               shl edx, 4
// 0057cd5e  03da                 add ebx, edx
// 0057cd60  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057cd64  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057cd67  740c                 je 0x57cd75
// 0057cd69  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 0057cd6d  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 0057cd73  eb1b                 jmp 0x57cd90
// 0057cd75  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 0057cd79  0fbe88f0040000       movsx ecx, byte ptr [eax + 0x4f0]
// 0057cd80  8b90c0030000         mov edx, dword ptr [eax + 0x3c0]
// 0057cd86  51                   push ecx
// 0057cd87  52                   push edx
// 0057cd88  e8e3faffff           call 0x57c870
// 0057cd8d  83c408               add esp, 8
// 0057cd90  83ed01               sub ebp, 1
// 0057cd93  75cb                 jne 0x57cd60
// 0057cd95  d1ff                 sar edi, 1
// 0057cd97  bd01000000           mov ebp, 1
// 0057cd9c  7423                 je 0x57cdc1
// 0057cd9e  8bff                 mov edi, edi
// 0057cda0  45                   inc ebp
// 0057cda1  d1ff                 sar edi, 1
// 0057cda3  75fb                 jne 0x57cda0
// 0057cda5  83fd0a               cmp ebp, 0xa
// 0057cda8  7e17                 jle 0x57cdc1
// 0057cdaa  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057cdae  8b08                 mov ecx, dword ptr [eax]
// 0057cdb0  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0057cdb7  8b10                 mov edx, dword ptr [eax]
// 0057cdb9  50                   push eax
// 0057cdba  8b02                 mov eax, dword ptr [edx]
// 0057cdbc  ffd0                 call eax
// 0057cdbe  83c404               add esp, 4
// 0057cdc1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057cdc4  c1e304               shl ebx, 4
// 0057cdc7  03dd                 add ebx, ebp
// 0057cdc9  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057cdcd  8bc3                 mov eax, ebx
// 0057cdcf  740c                 je 0x57cddd
// 0057cdd1  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 0057cdd5  ff0481               inc dword ptr [ecx + eax*4]
// 0057cdd8  8d0481               lea eax, [ecx + eax*4]
// 0057cddb  eb19                 jmp 0x57cdf6
// 0057cddd  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 0057cde1  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 0057cde9  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0057cdec  52                   push edx
// 0057cded  50                   push eax
// 0057cdee  e87dfaffff           call 0x57c870
// 0057cdf3  83c408               add esp, 8
// 0057cdf6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057cdfa  55                   push ebp
// 0057cdfb  51                   push ecx
// 0057cdfc  e86ffaffff           call 0x57c870
// 0057ce01  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057ce05  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0057ce09  83c408               add esp, 8
// 0057ce0c  33db                 xor ebx, ebx
// 0057ce0e  40                   inc eax
// 0057ce0f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0057ce13  89442414             mov dword ptr [esp + 0x14], eax
// 0057ce17  0f8ee4feffff         jle 0x57cd01
// 0057ce1d  85db                 test ebx, ebx
// 0057ce1f  7e13                 jle 0x57ce34
// 0057ce21  ff4638               inc dword ptr [esi + 0x38]
// 0057ce24  817e38ff7f0000       cmp dword ptr [esi + 0x38], 0x7fff
// 0057ce2b  7507                 jne 0x57ce34
// 0057ce2d  8bc6                 mov eax, esi
// 0057ce2f  e8acfbffff           call 0x57c9e0
// 0057ce34  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0057ce37  8b4610               mov eax, dword ptr [esi + 0x10]
// 0057ce3a  8902                 mov dword ptr [edx], eax
// 0057ce3c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0057ce3f  8b5614               mov edx, dword ptr [esi + 0x14]
// 0057ce42  895104               mov dword ptr [ecx + 4], edx
// 0057ce45  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 0057ce4b  5b                   pop ebx
// 0057ce4c  85ed                 test ebp, ebp
// 0057ce4e  7416                 je 0x57ce66
// 0057ce50  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057ce54  750d                 jne 0x57ce63
// 0057ce56  8b4648               mov eax, dword ptr [esi + 0x48]
// 0057ce59  40                   inc eax
// 0057ce5a  83e007               and eax, 7
// 0057ce5d  896e44               mov dword ptr [esi + 0x44], ebp
// 0057ce60  894648               mov dword ptr [esi + 0x48], eax
// 0057ce63  ff4e44               dec dword ptr [esi + 0x44]
// 0057ce66  5f                   pop edi
// 0057ce67  5e                   pop esi
// 0057ce68  b001                 mov al, 1
// 0057ce6a  5d                   pop ebp
// 0057ce6b  83c410               add esp, 0x10
// 0057ce6e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
