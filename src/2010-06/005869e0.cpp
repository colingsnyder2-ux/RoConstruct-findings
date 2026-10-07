// roc 2010-06 005869e0  unit: seg_00580000  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005869e0
//
// 005869e0  83ec10               sub esp, 0x10
// 005869e3  55                   push ebp
// 005869e4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005869e8  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005869eb  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 005869f1  8b11                 mov edx, dword ptr [ecx]
// 005869f3  56                   push esi
// 005869f4  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 005869fa  57                   push edi
// 005869fb  8bbd30010000         mov edi, dword ptr [ebp + 0x130]
// 00586a01  895610               mov dword ptr [esi + 0x10], edx
// 00586a04  8944240c             mov dword ptr [esp + 0xc], eax
// 00586a08  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00586a0b  8b4804               mov ecx, dword ptr [eax + 4]
// 00586a0e  894e14               mov dword ptr [esi + 0x14], ecx
// 00586a11  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 00586a18  897c2418             mov dword ptr [esp + 0x18], edi
// 00586a1c  7414                 je 0x586a32
// 00586a1e  837e4400             cmp dword ptr [esi + 0x44], 0
// 00586a22  750e                 jne 0x586a32
// 00586a24  8b5648               mov edx, dword ptr [esi + 0x48]
// 00586a27  52                   push edx
// 00586a28  8bc6                 mov eax, esi
// 00586a2a  e8a1fdffff           call 0x5867d0
// 00586a2f  83c404               add esp, 4
// 00586a32  8b442424             mov eax, dword ptr [esp + 0x24]
// 00586a36  8b08                 mov ecx, dword ptr [eax]
// 00586a38  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 00586a3e  53                   push ebx
// 00586a3f  33db                 xor ebx, ebx
// 00586a41  3bc7                 cmp eax, edi
// 00586a43  894c2418             mov dword ptr [esp + 0x18], ecx
// 00586a47  89442414             mov dword ptr [esp + 0x14], eax
// 00586a4b  0f8f33010000         jg 0x586b84
// 00586a51  8b1485f834a200       mov edx, dword ptr [eax*4 + 0xa234f8]
// 00586a58  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00586a5c  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 00586a60  85ff                 test edi, edi
// 00586a62  7506                 jne 0x586a6a
// 00586a64  43                   inc ebx
// 00586a65  e9f4000000           jmp 0x586b5e
// 00586a6a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00586a6e  7d0e                 jge 0x586a7e
// 00586a70  f7df                 neg edi
// 00586a72  d3ff                 sar edi, cl
// 00586a74  8bcf                 mov ecx, edi
// 00586a76  f7d1                 not ecx
// 00586a78  894c2428             mov dword ptr [esp + 0x28], ecx
// 00586a7c  eb06                 jmp 0x586a84
// 00586a7e  d3ff                 sar edi, cl
// 00586a80  897c2428             mov dword ptr [esp + 0x28], edi
// 00586a84  85ff                 test edi, edi
// 00586a86  7506                 jne 0x586a8e
// 00586a88  43                   inc ebx
// 00586a89  e9d0000000           jmp 0x586b5e
// 00586a8e  837e3800             cmp dword ptr [esi + 0x38], 0
// 00586a92  7607                 jbe 0x586a9b
// 00586a94  8bc6                 mov eax, esi
// 00586a96  e895fcffff           call 0x586730
// 00586a9b  83fb0f               cmp ebx, 0xf
// 00586a9e  7e45                 jle 0x586ae5
// 00586aa0  8d6bf0               lea ebp, [ebx - 0x10]
// 00586aa3  c1ed04               shr ebp, 4
// 00586aa6  45                   inc ebp
// 00586aa7  8bd5                 mov edx, ebp
// 00586aa9  f7da                 neg edx
// 00586aab  c1e204               shl edx, 4
// 00586aae  03da                 add ebx, edx
// 00586ab0  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586ab4  8b4634               mov eax, dword ptr [esi + 0x34]
// 00586ab7  740c                 je 0x586ac5
// 00586ab9  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 00586abd  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00586ac3  eb1b                 jmp 0x586ae0
// 00586ac5  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00586ac9  0fbe88f0040000       movsx ecx, byte ptr [eax + 0x4f0]
// 00586ad0  8b90c0030000         mov edx, dword ptr [eax + 0x3c0]
// 00586ad6  51                   push ecx
// 00586ad7  52                   push edx
// 00586ad8  e8e3faffff           call 0x5865c0
// 00586add  83c408               add esp, 8
// 00586ae0  83ed01               sub ebp, 1
// 00586ae3  75cb                 jne 0x586ab0
// 00586ae5  d1ff                 sar edi, 1
// 00586ae7  bd01000000           mov ebp, 1
// 00586aec  7423                 je 0x586b11
// 00586aee  8bff                 mov edi, edi
// 00586af0  45                   inc ebp
// 00586af1  d1ff                 sar edi, 1
// 00586af3  75fb                 jne 0x586af0
// 00586af5  83fd0a               cmp ebp, 0xa
// 00586af8  7e17                 jle 0x586b11
// 00586afa  8b442424             mov eax, dword ptr [esp + 0x24]
// 00586afe  8b08                 mov ecx, dword ptr [eax]
// 00586b00  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00586b07  8b10                 mov edx, dword ptr [eax]
// 00586b09  50                   push eax
// 00586b0a  8b02                 mov eax, dword ptr [edx]
// 00586b0c  ffd0                 call eax
// 00586b0e  83c404               add esp, 4
// 00586b11  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00586b14  c1e304               shl ebx, 4
// 00586b17  03dd                 add ebx, ebp
// 00586b19  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586b1d  8bc3                 mov eax, ebx
// 00586b1f  740c                 je 0x586b2d
// 00586b21  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 00586b25  ff0481               inc dword ptr [ecx + eax*4]
// 00586b28  8d0481               lea eax, [ecx + eax*4]
// 00586b2b  eb19                 jmp 0x586b46
// 00586b2d  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00586b31  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 00586b39  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00586b3c  52                   push edx
// 00586b3d  50                   push eax
// 00586b3e  e87dfaffff           call 0x5865c0
// 00586b43  83c408               add esp, 8
// 00586b46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00586b4a  55                   push ebp
// 00586b4b  51                   push ecx
// 00586b4c  e86ffaffff           call 0x5865c0
// 00586b51  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00586b55  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00586b59  83c408               add esp, 8
// 00586b5c  33db                 xor ebx, ebx
// 00586b5e  40                   inc eax
// 00586b5f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00586b63  89442414             mov dword ptr [esp + 0x14], eax
// 00586b67  0f8ee4feffff         jle 0x586a51
// 00586b6d  85db                 test ebx, ebx
// 00586b6f  7e13                 jle 0x586b84
// 00586b71  ff4638               inc dword ptr [esi + 0x38]
// 00586b74  817e38ff7f0000       cmp dword ptr [esi + 0x38], 0x7fff
// 00586b7b  7507                 jne 0x586b84
// 00586b7d  8bc6                 mov eax, esi
// 00586b7f  e8acfbffff           call 0x586730
// 00586b84  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00586b87  8b4610               mov eax, dword ptr [esi + 0x10]
// 00586b8a  8902                 mov dword ptr [edx], eax
// 00586b8c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00586b8f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00586b92  895104               mov dword ptr [ecx + 4], edx
// 00586b95  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 00586b9b  5b                   pop ebx
// 00586b9c  85ed                 test ebp, ebp
// 00586b9e  7416                 je 0x586bb6
// 00586ba0  837e4400             cmp dword ptr [esi + 0x44], 0
// 00586ba4  750d                 jne 0x586bb3
// 00586ba6  8b4648               mov eax, dword ptr [esi + 0x48]
// 00586ba9  40                   inc eax
// 00586baa  83e007               and eax, 7
// 00586bad  896e44               mov dword ptr [esi + 0x44], ebp
// 00586bb0  894648               mov dword ptr [esi + 0x48], eax
// 00586bb3  ff4e44               dec dword ptr [esi + 0x44]
// 00586bb6  5f                   pop edi
// 00586bb7  5e                   pop esi
// 00586bb8  b001                 mov al, 1
// 00586bba  5d                   pop ebp
// 00586bbb  83c410               add esp, 0x10
// 00586bbe  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
