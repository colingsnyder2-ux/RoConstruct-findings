// roc 2007-08 00505860  unit: G3D::Log  size: 2625 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00505860
//
// 00505860  6aff                 push -1
// 00505862  685df77400           push 0x74f75d
// 00505867  64a100000000         mov eax, dword ptr fs:[0]
// 0050586d  50                   push eax
// 0050586e  81eca0000000         sub esp, 0xa0
// 00505874  53                   push ebx
// 00505875  55                   push ebp
// 00505876  56                   push esi
// 00505877  57                   push edi
// 00505878  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050587d  33c4                 xor eax, esp
// 0050587f  50                   push eax
// 00505880  8d8424b4000000       lea eax, [esp + 0xb4]
// 00505887  64a300000000         mov dword ptr fs:[0], eax
// 0050588d  8bf1                 mov esi, ecx
// 0050588f  8b9c24c4000000       mov ebx, dword ptr [esp + 0xc4]
// 00505896  8bcb                 mov ecx, ebx
// 00505898  e853d1ffff           call 0x5029f0
// 0050589d  8bcb                 mov ecx, ebx
// 0050589f  e84cd1ffff           call 0x5029f0
// 005058a4  8bcb                 mov ecx, ebx
// 005058a6  e845d1ffff           call 0x5029f0
// 005058ab  0fb7e8               movzx ebp, ax
// 005058ae  c7461004000000       mov dword ptr [esi + 0x10], 4
// 005058b5  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005058b8  85c9                 test ecx, ecx
// 005058ba  896c2424             mov dword ptr [esp + 0x24], ebp
// 005058be  7617                 jbe 0x5058d7
// 005058c0  6808c58400           push 0x84c508
// 005058c5  8d442428             lea eax, [esp + 0x28]
// 005058c9  50                   push eax
// 005058ca  c744242cc8a47900     mov dword ptr [esp + 0x2c], 0x79a4c8
// 005058d2  e8c7b21200           call 0x630b9e
// 005058d7  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005058da  8b4340               mov eax, dword ptr [ebx + 0x40]
// 005058dd  03d1                 add edx, ecx
// 005058df  33c9                 xor ecx, ecx
// 005058e1  8d3c02               lea edi, [edx + eax]
// 005058e4  33c0                 xor eax, eax
// 005058e6  85ed                 test ebp, ebp
// 005058e8  8954242c             mov dword ptr [esp + 0x2c], edx
// 005058ec  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005058f0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005058f4  7e47                 jle 0x50593d
// 005058f6  897c2428             mov dword ptr [esp + 0x28], edi
// 005058fa  8d9b00000000         lea ebx, [ebx]
// 00505900  0fb617               movzx edx, byte ptr [edi]
// 00505903  0fb67f01             movzx edi, byte ptr [edi + 1]
// 00505907  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0050590b  0faffa               imul edi, edx
// 0050590e  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 00505913  3bfd                 cmp edi, ebp
// 00505915  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00505919  7e0e                 jle 0x505929
// 0050591b  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 0050591f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00505923  8954241c             mov dword ptr [esp + 0x1c], edx
// 00505927  8bc8                 mov ecx, eax
// 00505929  83c001               add eax, 1
// 0050592c  83c710               add edi, 0x10
// 0050592f  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00505933  897c2428             mov dword ptr [esp + 0x28], edi
// 00505937  7cc7                 jl 0x505900
// 00505939  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0050593d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00505940  c1e104               shl ecx, 4
// 00505943  03ca                 add ecx, edx
// 00505945  2bc8                 sub ecx, eax
// 00505947  894b44               mov dword ptr [ebx + 0x44], ecx
// 0050594a  7805                 js 0x505951
// 0050594c  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050594f  7e0f                 jle 0x505960
// 00505951  33ed                 xor ebp, ebp
// 00505953  03c8                 add ecx, eax
// 00505955  55                   push ebp
// 00505956  51                   push ecx
// 00505957  8bcb                 mov ecx, ebx
// 00505959  e862630000           call 0x50bcc0
// 0050595e  eb02                 jmp 0x505962
// 00505960  33ed                 xor ebp, ebp
// 00505962  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505965  8d4801               lea ecx, [eax + 1]
// 00505968  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050596b  7e0f                 jle 0x50597c
// 0050596d  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00505970  6a01                 push 1
// 00505972  03d0                 add edx, eax
// 00505974  52                   push edx
// 00505975  8bcb                 mov ecx, ebx
// 00505977  e844630000           call 0x50bcc0
// 0050597c  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050597f  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00505982  8a0c08               mov cl, byte ptr [eax + ecx]
// 00505985  83c001               add eax, 1
// 00505988  0fb6d1               movzx edx, cl
// 0050598b  894344               mov dword ptr [ebx + 0x44], eax
// 0050598e  895608               mov dword ptr [esi + 8], edx
// 00505991  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505994  8d4801               lea ecx, [eax + 1]
// 00505997  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050599a  7e0f                 jle 0x5059ab
// 0050599c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050599f  6a01                 push 1
// 005059a1  03d0                 add edx, eax
// 005059a3  52                   push edx
// 005059a4  8bcb                 mov ecx, ebx
// 005059a6  e815630000           call 0x50bcc0
// 005059ab  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005059ae  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005059b1  8a0c08               mov cl, byte ptr [eax + ecx]
// 005059b4  83c001               add eax, 1
// 005059b7  0fb6d1               movzx edx, cl
// 005059ba  894344               mov dword ptr [ebx + 0x44], eax
// 005059bd  89560c               mov dword ptr [esi + 0xc], edx
// 005059c0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005059c3  8d4801               lea ecx, [eax + 1]
// 005059c6  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005059c9  7e0f                 jle 0x5059da
// 005059cb  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005059ce  6a01                 push 1
// 005059d0  03d0                 add edx, eax
// 005059d2  52                   push edx
// 005059d3  8bcb                 mov ecx, ebx
// 005059d5  e8e6620000           call 0x50bcc0
// 005059da  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005059dd  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005059e0  8a0c08               mov cl, byte ptr [eax + ecx]
// 005059e3  83c001               add eax, 1
// 005059e6  894344               mov dword ptr [ebx + 0x44], eax
// 005059e9  8b560c               mov edx, dword ptr [esi + 0xc]
// 005059ec  0faf5610             imul edx, dword ptr [esi + 0x10]
// 005059f0  0faf5608             imul edx, dword ptr [esi + 8]
// 005059f4  0fb6f9               movzx edi, cl
// 005059f7  52                   push edx
// 005059f8  897c2420             mov dword ptr [esp + 0x20], edi
// 005059fc  e80fa6ffff           call 0x500010
// 00505a01  894604               mov dword ptr [esi + 4], eax
// 00505a04  8bc7                 mov eax, edi
// 00505a06  83c404               add esp, 4
// 00505a09  2bc5                 sub eax, ebp
// 00505a0b  746c                 je 0x505a79
// 00505a0d  83e802               sub eax, 2
// 00505a10  745d                 je 0x505a6f
// 00505a12  83e80e               sub eax, 0xe
// 00505a15  744e                 je 0x505a65
// 00505a17  68a0057a00           push 0x7a05a0
// 00505a1c  8d4c2448             lea ecx, [esp + 0x48]
// 00505a20  ff1598e67700         call dword ptr [0x77e698]
// 00505a26  8d442460             lea eax, [esp + 0x60]
// 00505a2a  50                   push eax
// 00505a2b  8bcb                 mov ecx, ebx
// 00505a2d  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 00505a34  e837cfffff           call 0x502970
// 00505a39  50                   push eax
// 00505a3a  8d4c2448             lea ecx, [esp + 0x48]
// 00505a3e  51                   push ecx
// 00505a3f  8d8c2484000000       lea ecx, [esp + 0x84]
// 00505a46  c68424c400000001     mov byte ptr [esp + 0xc4], 1
// 00505a4e  e81d9bf6ff           call 0x46f570
// 00505a53  68a4b48400           push 0x84b4a4
// 00505a58  8d942480000000       lea edx, [esp + 0x80]
// 00505a5f  52                   push edx
// 00505a60  e839b11200           call 0x630b9e
// 00505a65  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00505a6d  eb1b                 jmp 0x505a8a
// 00505a6f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00505a77  eb11                 jmp 0x505a8a
// 00505a79  bf00010000           mov edi, 0x100
// 00505a7e  897c241c             mov dword ptr [esp + 0x1c], edi
// 00505a82  c744241408000000     mov dword ptr [esp + 0x14], 8
// 00505a8a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00505a8d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505a90  8d440105             lea eax, [ecx + eax + 5]
// 00505a94  2bc1                 sub eax, ecx
// 00505a96  894344               mov dword ptr [ebx + 0x44], eax
// 00505a99  7805                 js 0x505aa0
// 00505a9b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00505a9e  7e0b                 jle 0x505aab
// 00505aa0  03c1                 add eax, ecx
// 00505aa2  55                   push ebp
// 00505aa3  50                   push eax
// 00505aa4  8bcb                 mov ecx, ebx
// 00505aa6  e815620000           call 0x50bcc0
// 00505aab  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00505aae  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00505ab1  8d441104             lea eax, [ecx + edx + 4]
// 00505ab5  2bc1                 sub eax, ecx
// 00505ab7  894344               mov dword ptr [ebx + 0x44], eax
// 00505aba  7805                 js 0x505ac1
// 00505abc  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00505abf  7e0b                 jle 0x505acc
// 00505ac1  03c1                 add eax, ecx
// 00505ac3  55                   push ebp
// 00505ac4  50                   push eax
// 00505ac5  8bcb                 mov ecx, ebx
// 00505ac7  e8f4610000           call 0x50bcc0
// 00505acc  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505acf  8d4804               lea ecx, [eax + 4]
// 00505ad2  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00505ad5  7e0f                 jle 0x505ae6
// 00505ad7  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00505ada  6a04                 push 4
// 00505adc  03d0                 add edx, eax
// 00505ade  52                   push edx
// 00505adf  8bcb                 mov ecx, ebx
// 00505ae1  e8da610000           call 0x50bcc0
// 00505ae6  83434404             add dword ptr [ebx + 0x44], 4
// 00505aea  807b2400             cmp byte ptr [ebx + 0x24], 0
// 00505aee  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505af1  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00505af4  7427                 je 0x505b1d
// 00505af6  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 00505afb  03c1                 add eax, ecx
// 00505afd  8a48fe               mov cl, byte ptr [eax - 2]
// 00505b00  88542420             mov byte ptr [esp + 0x20], dl
// 00505b04  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00505b08  8a40fc               mov al, byte ptr [eax - 4]
// 00505b0b  884c2421             mov byte ptr [esp + 0x21], cl
// 00505b0f  88542422             mov byte ptr [esp + 0x22], dl
// 00505b13  88442423             mov byte ptr [esp + 0x23], al
// 00505b17  8b442420             mov eax, dword ptr [esp + 0x20]
// 00505b1b  eb04                 jmp 0x505b21
// 00505b1d  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 00505b21  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00505b24  2bc1                 sub eax, ecx
// 00505b26  894344               mov dword ptr [ebx + 0x44], eax
// 00505b29  7805                 js 0x505b30
// 00505b2b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00505b2e  7e0b                 jle 0x505b3b
// 00505b30  03c1                 add eax, ecx
// 00505b32  55                   push ebp
// 00505b33  50                   push eax
// 00505b34  8bcb                 mov ecx, ebx
// 00505b36  e885610000           call 0x50bcc0
// 00505b3b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00505b3e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00505b41  8d441128             lea eax, [ecx + edx + 0x28]
// 00505b45  2bc1                 sub eax, ecx
// 00505b47  894344               mov dword ptr [ebx + 0x44], eax
// 00505b4a  7805                 js 0x505b51
// 00505b4c  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00505b4f  7e0b                 jle 0x505b5c
// 00505b51  03c1                 add eax, ecx
// 00505b53  55                   push ebp
// 00505b54  50                   push eax
// 00505b55  8bcb                 mov ecx, ebx
// 00505b57  e864610000           call 0x50bcc0
// 00505b5c  896c2434             mov dword ptr [esp + 0x34], ebp
// 00505b60  896c2438             mov dword ptr [esp + 0x38], ebp
// 00505b64  896c2430             mov dword ptr [esp + 0x30], ebp
// 00505b68  6a01                 push 1
// 00505b6a  57                   push edi
// 00505b6b  8d4c2438             lea ecx, [esp + 0x38]
// 00505b6f  c78424c400000002000000 mov dword ptr [esp + 0xc4], 2
// 00505b7a  e871f8ffff           call 0x5053f0
// 00505b7f  3bfd                 cmp edi, ebp
// 00505b81  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00505b85  0f8ec8000000         jle 0x505c53
// 00505b8b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00505b8f  8d7d01               lea edi, [ebp + 1]
// 00505b92  8944241c             mov dword ptr [esp + 0x1c], eax
// 00505b96  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505b99  8d4801               lea ecx, [eax + 1]
// 00505b9c  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00505b9f  7e0f                 jle 0x505bb0
// 00505ba1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00505ba4  6a01                 push 1
// 00505ba6  03d0                 add edx, eax
// 00505ba8  52                   push edx
// 00505ba9  8bcb                 mov ecx, ebx
// 00505bab  e810610000           call 0x50bcc0
// 00505bb0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505bb3  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00505bb6  8a0c08               mov cl, byte ptr [eax + ecx]
// 00505bb9  83c001               add eax, 1
// 00505bbc  894344               mov dword ptr [ebx + 0x44], eax
// 00505bbf  884f01               mov byte ptr [edi + 1], cl
// 00505bc2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505bc5  8d5001               lea edx, [eax + 1]
// 00505bc8  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00505bcb  7e0f                 jle 0x505bdc
// 00505bcd  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00505bd0  03c8                 add ecx, eax
// 00505bd2  6a01                 push 1
// 00505bd4  51                   push ecx
// 00505bd5  8bcb                 mov ecx, ebx
// 00505bd7  e8e4600000           call 0x50bcc0
// 00505bdc  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505bdf  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00505be2  8a0c10               mov cl, byte ptr [eax + edx]
// 00505be5  83c001               add eax, 1
// 00505be8  894344               mov dword ptr [ebx + 0x44], eax
// 00505beb  880f                 mov byte ptr [edi], cl
// 00505bed  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505bf0  8d4801               lea ecx, [eax + 1]
// 00505bf3  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00505bf6  7e0f                 jle 0x505c07
// 00505bf8  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00505bfb  6a01                 push 1
// 00505bfd  03d0                 add edx, eax
// 00505bff  52                   push edx
// 00505c00  8bcb                 mov ecx, ebx
// 00505c02  e8b9600000           call 0x50bcc0
// 00505c07  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505c0a  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00505c0d  8a0c08               mov cl, byte ptr [eax + ecx]
// 00505c10  83c001               add eax, 1
// 00505c13  894344               mov dword ptr [ebx + 0x44], eax
// 00505c16  884fff               mov byte ptr [edi - 1], cl
// 00505c19  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505c1c  8d5001               lea edx, [eax + 1]
// 00505c1f  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00505c22  7e0f                 jle 0x505c33
// 00505c24  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00505c27  03c8                 add ecx, eax
// 00505c29  6a01                 push 1
// 00505c2b  51                   push ecx
// 00505c2c  8bcb                 mov ecx, ebx
// 00505c2e  e88d600000           call 0x50bcc0
// 00505c33  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505c36  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00505c39  8a0c10               mov cl, byte ptr [eax + edx]
// 00505c3c  83c001               add eax, 1
// 00505c3f  894344               mov dword ptr [ebx + 0x44], eax
// 00505c42  884f02               mov byte ptr [edi + 2], cl
// 00505c45  83c704               add edi, 4
// 00505c48  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00505c4d  0f8543ffffff         jne 0x505b96
// 00505c53  8b460c               mov eax, dword ptr [esi + 0xc]
// 00505c56  83caff               or edx, 0xffffffff
// 00505c59  85c0                 test eax, eax
// 00505c5b  7d15                 jge 0x505c72
// 00505c5d  f7d8                 neg eax
// 00505c5f  89460c               mov dword ptr [esi + 0xc], eax
// 00505c62  33c9                 xor ecx, ecx
// 00505c64  8944242c             mov dword ptr [esp + 0x2c], eax
// 00505c68  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00505c70  eb0b                 jmp 0x505c7d
// 00505c72  8d48ff               lea ecx, [eax - 1]
// 00505c75  8954242c             mov dword ptr [esp + 0x2c], edx
// 00505c79  89542428             mov dword ptr [esp + 0x28], edx
// 00505c7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00505c81  83f801               cmp eax, 1
// 00505c84  0f850c030000         jne 0x505f96
// 00505c8a  8b4608               mov eax, dword ptr [esi + 8]
// 00505c8d  83c007               add eax, 7
// 00505c90  c1f803               sar eax, 3
// 00505c93  8bd0                 mov edx, eax
// 00505c95  83e203               and edx, 3
// 00505c98  89442420             mov dword ptr [esp + 0x20], eax
// 00505c9c  740d                 je 0x505cab
// 00505c9e  bf04000000           mov edi, 4
// 00505ca3  2bfa                 sub edi, edx
// 00505ca5  03c7                 add eax, edi
// 00505ca7  89442420             mov dword ptr [esp + 0x20], eax
// 00505cab  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 00505caf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00505cb3  0f84d4040000         je 0x50618d
// 00505cb9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00505cbd  8d4900               lea ecx, [ecx]
// 00505cc0  8b7e08               mov edi, dword ptr [esi + 8]
// 00505cc3  0faff9               imul edi, ecx
// 00505cc6  33c0                 xor eax, eax
// 00505cc8  85d2                 test edx, edx
// 00505cca  89442414             mov dword ptr [esp + 0x14], eax
// 00505cce  8d3c7f               lea edi, [edi + edi*2]
// 00505cd1  0f8ea8020000         jle 0x505f7f
// 00505cd7  89542424             mov dword ptr [esp + 0x24], edx
// 00505cdb  eb03                 jmp 0x505ce0
// 00505cdd  8d4900               lea ecx, [ecx]
// 00505ce0  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 00505ce3  8d5101               lea edx, [ecx + 1]
// 00505ce6  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00505ce9  7e13                 jle 0x505cfe
// 00505ceb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00505cee  03c1                 add eax, ecx
// 00505cf0  6a01                 push 1
// 00505cf2  50                   push eax
// 00505cf3  8bcb                 mov ecx, ebx
// 00505cf5  e8c65f0000           call 0x50bcc0
// 00505cfa  8b442414             mov eax, dword ptr [esp + 0x14]
// 00505cfe  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00505d01  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00505d04  8a0c0a               mov cl, byte ptr [edx + ecx]
// 00505d07  83c201               add edx, 1
// 00505d0a  895344               mov dword ptr [ebx + 0x44], edx
// 00505d0d  3b4608               cmp eax, dword ptr [esi + 8]
// 00505d10  884c241b             mov byte ptr [esp + 0x1b], cl
// 00505d14  0f8d52020000         jge 0x505f6c
// 00505d1a  8b5604               mov edx, dword ptr [esi + 4]
// 00505d1d  0fb6c9               movzx ecx, cl
// 00505d20  c1e907               shr ecx, 7
// 00505d23  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505d27  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505d2c  880c17               mov byte ptr [edi + edx], cl
// 00505d2f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505d33  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505d38  8b5604               mov edx, dword ptr [esi + 4]
// 00505d3b  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505d3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505d43  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505d48  8b5604               mov edx, dword ptr [esi + 4]
// 00505d4b  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505d4f  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505d54  83c001               add eax, 1
// 00505d57  83c704               add edi, 4
// 00505d5a  3b4608               cmp eax, dword ptr [esi + 8]
// 00505d5d  89442414             mov dword ptr [esp + 0x14], eax
// 00505d61  0f8d05020000         jge 0x505f6c
// 00505d67  8b5604               mov edx, dword ptr [esi + 4]
// 00505d6a  c1e906               shr ecx, 6
// 00505d6d  83e101               and ecx, 1
// 00505d70  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505d74  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505d79  880c17               mov byte ptr [edi + edx], cl
// 00505d7c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505d80  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505d85  8b5604               mov edx, dword ptr [esi + 4]
// 00505d88  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505d8c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505d90  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505d95  8b5604               mov edx, dword ptr [esi + 4]
// 00505d98  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505d9c  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505da1  83c001               add eax, 1
// 00505da4  83c704               add edi, 4
// 00505da7  3b4608               cmp eax, dword ptr [esi + 8]
// 00505daa  89442414             mov dword ptr [esp + 0x14], eax
// 00505dae  0f8db8010000         jge 0x505f6c
// 00505db4  8b5604               mov edx, dword ptr [esi + 4]
// 00505db7  c1e905               shr ecx, 5
// 00505dba  83e101               and ecx, 1
// 00505dbd  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505dc1  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505dc6  880c17               mov byte ptr [edi + edx], cl
// 00505dc9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505dcd  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505dd2  8b5604               mov edx, dword ptr [esi + 4]
// 00505dd5  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505dd9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505ddd  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505de2  8b5604               mov edx, dword ptr [esi + 4]
// 00505de5  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505de9  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505dee  83c001               add eax, 1
// 00505df1  83c704               add edi, 4
// 00505df4  3b4608               cmp eax, dword ptr [esi + 8]
// 00505df7  89442414             mov dword ptr [esp + 0x14], eax
// 00505dfb  0f8d6b010000         jge 0x505f6c
// 00505e01  8b5604               mov edx, dword ptr [esi + 4]
// 00505e04  c1e904               shr ecx, 4
// 00505e07  83e101               and ecx, 1
// 00505e0a  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505e0e  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505e13  880c17               mov byte ptr [edi + edx], cl
// 00505e16  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505e1a  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505e1f  8b5604               mov edx, dword ptr [esi + 4]
// 00505e22  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505e26  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505e2a  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505e2f  8b5604               mov edx, dword ptr [esi + 4]
// 00505e32  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505e36  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505e3b  83c001               add eax, 1
// 00505e3e  83c704               add edi, 4
// 00505e41  3b4608               cmp eax, dword ptr [esi + 8]
// 00505e44  89442414             mov dword ptr [esp + 0x14], eax
// 00505e48  0f8d1e010000         jge 0x505f6c
// 00505e4e  8b5604               mov edx, dword ptr [esi + 4]
// 00505e51  c1e903               shr ecx, 3
// 00505e54  83e101               and ecx, 1
// 00505e57  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505e5b  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505e60  880c17               mov byte ptr [edi + edx], cl
// 00505e63  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505e67  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505e6c  8b5604               mov edx, dword ptr [esi + 4]
// 00505e6f  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505e73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505e77  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505e7c  8b5604               mov edx, dword ptr [esi + 4]
// 00505e7f  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505e83  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505e88  83c001               add eax, 1
// 00505e8b  83c704               add edi, 4
// 00505e8e  3b4608               cmp eax, dword ptr [esi + 8]
// 00505e91  89442414             mov dword ptr [esp + 0x14], eax
// 00505e95  0f8dd1000000         jge 0x505f6c
// 00505e9b  8b5604               mov edx, dword ptr [esi + 4]
// 00505e9e  c1e902               shr ecx, 2
// 00505ea1  83e101               and ecx, 1
// 00505ea4  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505ea8  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505ead  880c17               mov byte ptr [edi + edx], cl
// 00505eb0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505eb4  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505eb9  8b5604               mov edx, dword ptr [esi + 4]
// 00505ebc  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505ec0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505ec4  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505ec9  8b5604               mov edx, dword ptr [esi + 4]
// 00505ecc  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505ed0  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505ed5  83c001               add eax, 1
// 00505ed8  83c704               add edi, 4
// 00505edb  3b4608               cmp eax, dword ptr [esi + 8]
// 00505ede  89442414             mov dword ptr [esp + 0x14], eax
// 00505ee2  0f8d84000000         jge 0x505f6c
// 00505ee8  8b5604               mov edx, dword ptr [esi + 4]
// 00505eeb  d1e9                 shr ecx, 1
// 00505eed  83e101               and ecx, 1
// 00505ef0  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505ef4  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505ef9  880c17               mov byte ptr [edi + edx], cl
// 00505efc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505f00  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505f05  8b5604               mov edx, dword ptr [esi + 4]
// 00505f08  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505f0c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505f10  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505f15  8b5604               mov edx, dword ptr [esi + 4]
// 00505f18  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505f1c  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 00505f21  83c001               add eax, 1
// 00505f24  83c704               add edi, 4
// 00505f27  3b4608               cmp eax, dword ptr [esi + 8]
// 00505f2a  89442414             mov dword ptr [esp + 0x14], eax
// 00505f2e  7d3c                 jge 0x505f6c
// 00505f30  8b5604               mov edx, dword ptr [esi + 4]
// 00505f33  83e101               and ecx, 1
// 00505f36  894c2414             mov dword ptr [esp + 0x14], ecx
// 00505f3a  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00505f3f  880c17               mov byte ptr [edi + edx], cl
// 00505f42  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505f46  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00505f4b  8b5604               mov edx, dword ptr [esi + 4]
// 00505f4e  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00505f52  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505f56  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00505f5b  8b5604               mov edx, dword ptr [esi + 4]
// 00505f5e  83c001               add eax, 1
// 00505f61  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00505f65  89442414             mov dword ptr [esp + 0x14], eax
// 00505f69  83c704               add edi, 4
// 00505f6c  836c242401           sub dword ptr [esp + 0x24], 1
// 00505f71  0f8569fdffff         jne 0x505ce0
// 00505f77  8b542420             mov edx, dword ptr [esp + 0x20]
// 00505f7b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00505f7f  034c2428             add ecx, dword ptr [esp + 0x28]
// 00505f83  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 00505f87  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00505f8b  0f852ffdffff         jne 0x505cc0
// 00505f91  e9f7010000           jmp 0x50618d
// 00505f96  83f804               cmp eax, 4
// 00505f99  0f8521010000         jne 0x5060c0
// 00505f9f  8b4608               mov eax, dword ptr [esi + 8]
// 00505fa2  83c001               add eax, 1
// 00505fa5  d1f8                 sar eax, 1
// 00505fa7  8bd0                 mov edx, eax
// 00505fa9  83e203               and edx, 3
// 00505fac  89442424             mov dword ptr [esp + 0x24], eax
// 00505fb0  740d                 je 0x505fbf
// 00505fb2  bf04000000           mov edi, 4
// 00505fb7  2bfa                 sub edi, edx
// 00505fb9  03c7                 add eax, edi
// 00505fbb  89442424             mov dword ptr [esp + 0x24], eax
// 00505fbf  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 00505fc3  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00505fc7  0f84c0010000         je 0x50618d
// 00505fcd  8d4900               lea ecx, [ecx]
// 00505fd0  8b7e08               mov edi, dword ptr [esi + 8]
// 00505fd3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00505fd7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00505fdb  0faff8               imul edi, eax
// 00505fde  03ff                 add edi, edi
// 00505fe0  03ff                 add edi, edi
// 00505fe2  85c9                 test ecx, ecx
// 00505fe4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00505fec  0f8eb7000000         jle 0x5060a9
// 00505ff2  894c2420             mov dword ptr [esp + 0x20], ecx
// 00505ff6  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00505ff9  8d5001               lea edx, [eax + 1]
// 00505ffc  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00505fff  7e0f                 jle 0x506010
// 00506001  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00506004  03c8                 add ecx, eax
// 00506006  6a01                 push 1
// 00506008  51                   push ecx
// 00506009  8bcb                 mov ecx, ebx
// 0050600b  e8b05c0000           call 0x50bcc0
// 00506010  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00506013  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00506016  8a0c10               mov cl, byte ptr [eax + edx]
// 00506019  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050601d  83c001               add eax, 1
// 00506020  0fb6c9               movzx ecx, cl
// 00506023  894344               mov dword ptr [ebx + 0x44], eax
// 00506026  8bc1                 mov eax, ecx
// 00506028  83e10f               and ecx, 0xf
// 0050602b  c1e804               shr eax, 4
// 0050602e  3b5608               cmp edx, dword ptr [esi + 8]
// 00506031  894c2440             mov dword ptr [esp + 0x40], ecx
// 00506035  7d2f                 jge 0x506066
// 00506037  0fb6548500           movzx edx, byte ptr [ebp + eax*4]
// 0050603c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050603f  8344241401           add dword ptr [esp + 0x14], 1
// 00506044  88140f               mov byte ptr [edi + ecx], dl
// 00506047  0fb6548501           movzx edx, byte ptr [ebp + eax*4 + 1]
// 0050604c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050604f  88543901             mov byte ptr [ecx + edi + 1], dl
// 00506053  0fb6548502           movzx edx, byte ptr [ebp + eax*4 + 2]
// 00506058  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050605b  88543902             mov byte ptr [ecx + edi + 2], dl
// 0050605f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00506063  83c704               add edi, 4
// 00506066  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050606a  3b4608               cmp eax, dword ptr [esi + 8]
// 0050606d  7d2b                 jge 0x50609a
// 0050606f  0fb6448d00           movzx eax, byte ptr [ebp + ecx*4]
// 00506074  8b5604               mov edx, dword ptr [esi + 4]
// 00506077  8344241401           add dword ptr [esp + 0x14], 1
// 0050607c  880417               mov byte ptr [edi + edx], al
// 0050607f  0fb6448d01           movzx eax, byte ptr [ebp + ecx*4 + 1]
// 00506084  8b5604               mov edx, dword ptr [esi + 4]
// 00506087  88443a01             mov byte ptr [edx + edi + 1], al
// 0050608b  0fb6448d02           movzx eax, byte ptr [ebp + ecx*4 + 2]
// 00506090  8b5604               mov edx, dword ptr [esi + 4]
// 00506093  88443a02             mov byte ptr [edx + edi + 2], al
// 00506097  83c704               add edi, 4
// 0050609a  836c242001           sub dword ptr [esp + 0x20], 1
// 0050609f  0f8551ffffff         jne 0x505ff6
// 005060a5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005060a9  03442428             add eax, dword ptr [esp + 0x28]
// 005060ad  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 005060b1  8944241c             mov dword ptr [esp + 0x1c], eax
// 005060b5  0f8515ffffff         jne 0x505fd0
// 005060bb  e9cd000000           jmp 0x50618d
// 005060c0  83f808               cmp eax, 8
// 005060c3  0f85c4000000         jne 0x50618d
// 005060c9  8b7e08               mov edi, dword ptr [esi + 8]
// 005060cc  8bc7                 mov eax, edi
// 005060ce  83e003               and eax, 3
// 005060d1  897c2420             mov dword ptr [esp + 0x20], edi
// 005060d5  740d                 je 0x5060e4
// 005060d7  ba04000000           mov edx, 4
// 005060dc  2bd0                 sub edx, eax
// 005060de  03fa                 add edi, edx
// 005060e0  897c2420             mov dword ptr [esp + 0x20], edi
// 005060e4  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 005060e8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005060ec  0f849b000000         je 0x50618d
// 005060f2  85ff                 test edi, edi
// 005060f4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005060fc  7e79                 jle 0x506177
// 005060fe  897c2424             mov dword ptr [esp + 0x24], edi
// 00506102  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00506105  8d4801               lea ecx, [eax + 1]
// 00506108  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050610b  7e0f                 jle 0x50611c
// 0050610d  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00506110  6a01                 push 1
// 00506112  03d0                 add edx, eax
// 00506114  52                   push edx
// 00506115  8bcb                 mov ecx, ebx
// 00506117  e8a45b0000           call 0x50bcc0
// 0050611c  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050611f  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00506122  8a0c08               mov cl, byte ptr [eax + ecx]
// 00506125  83c001               add eax, 1
// 00506128  894344               mov dword ptr [ebx + 0x44], eax
// 0050612b  8b4608               mov eax, dword ptr [esi + 8]
// 0050612e  39442414             cmp dword ptr [esp + 0x14], eax
// 00506132  7d3c                 jge 0x506170
// 00506134  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00506139  03442414             add eax, dword ptr [esp + 0x14]
// 0050613d  8b5604               mov edx, dword ptr [esi + 4]
// 00506140  0fb6f9               movzx edi, cl
// 00506143  0fb64cbd00           movzx ecx, byte ptr [ebp + edi*4]
// 00506148  03c0                 add eax, eax
// 0050614a  03c0                 add eax, eax
// 0050614c  8344241401           add dword ptr [esp + 0x14], 1
// 00506151  880c10               mov byte ptr [eax + edx], cl
// 00506154  0fb64cbd01           movzx ecx, byte ptr [ebp + edi*4 + 1]
// 00506159  8b5604               mov edx, dword ptr [esi + 4]
// 0050615c  884c0201             mov byte ptr [edx + eax + 1], cl
// 00506160  0fb64cbd02           movzx ecx, byte ptr [ebp + edi*4 + 2]
// 00506165  8b5604               mov edx, dword ptr [esi + 4]
// 00506168  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0050616c  884c0202             mov byte ptr [edx + eax + 2], cl
// 00506170  836c242401           sub dword ptr [esp + 0x24], 1
// 00506175  758b                 jne 0x506102
// 00506177  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050617b  03442428             add eax, dword ptr [esp + 0x28]
// 0050617f  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00506183  8944241c             mov dword ptr [esp + 0x1c], eax
// 00506187  0f8565ffffff         jne 0x5060f2
// 0050618d  8b5608               mov edx, dword ptr [esi + 8]
// 00506190  89542424             mov dword ptr [esp + 0x24], edx
// 00506194  db442424             fild dword ptr [esp + 0x24]
// 00506198  83ec08               sub esp, 8
// 0050619b  dc0d98057a00         fmul qword ptr [0x7a0598]
// 005061a1  dd1c24               fstp qword ptr [esp]
// 005061a4  ff1530e97700         call dword ptr [0x77e930]
// 005061aa  83c408               add esp, 8
// 005061ad  e8aeab1200           call 0x630d60
// 005061b2  8bc8                 mov ecx, eax
// 005061b4  83e103               and ecx, 3
// 005061b7  8944241c             mov dword ptr [esp + 0x1c], eax
// 005061bb  740d                 je 0x5061ca
// 005061bd  ba04000000           mov edx, 4
// 005061c2  2bd1                 sub edx, ecx
// 005061c4  03c2                 add eax, edx
// 005061c6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005061ca  8b460c               mov eax, dword ptr [esi + 0xc]
// 005061cd  83e801               sub eax, 1
// 005061d0  89442420             mov dword ptr [esp + 0x20], eax
// 005061d4  0f8897000000         js 0x506271
// 005061da  8d9b00000000         lea ebx, [ebx]
// 005061e0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005061e5  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005061ed  7e77                 jle 0x506266
// 005061ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005061f3  89442424             mov dword ptr [esp + 0x24], eax
// 005061f7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005061fa  8d4801               lea ecx, [eax + 1]
// 005061fd  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00506200  7e0f                 jle 0x506211
// 00506202  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00506205  6a01                 push 1
// 00506207  03d0                 add edx, eax
// 00506209  52                   push edx
// 0050620a  8bcb                 mov ecx, ebx
// 0050620c  e8af5a0000           call 0x50bcc0
// 00506211  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00506214  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00506217  8a1408               mov dl, byte ptr [eax + ecx]
// 0050621a  83c001               add eax, 1
// 0050621d  8854241b             mov byte ptr [esp + 0x1b], dl
// 00506221  894344               mov dword ptr [ebx + 0x44], eax
// 00506224  33d2                 xor edx, edx
// 00506226  8b7e08               mov edi, dword ptr [esi + 8]
// 00506229  397c2428             cmp dword ptr [esp + 0x28], edi
// 0050622d  7d30                 jge 0x50625f
// 0050622f  0faf7c2420           imul edi, dword ptr [esp + 0x20]
// 00506234  0fb644241b           movzx eax, byte ptr [esp + 0x1b]
// 00506239  037c2428             add edi, dword ptr [esp + 0x28]
// 0050623d  8344242801           add dword ptr [esp + 0x28], 1
// 00506242  b907000000           mov ecx, 7
// 00506247  2aca                 sub cl, dl
// 00506249  d3e8                 shr eax, cl
// 0050624b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050624e  83c201               add edx, 1
// 00506251  83e001               and eax, 1
// 00506254  2c01                 sub al, 1
// 00506256  83fa08               cmp edx, 8
// 00506259  8844b903             mov byte ptr [ecx + edi*4 + 3], al
// 0050625d  7cc7                 jl 0x506226
// 0050625f  836c242401           sub dword ptr [esp + 0x24], 1
// 00506264  7591                 jne 0x5061f7
// 00506266  836c242001           sub dword ptr [esp + 0x20], 1
// 0050626b  0f896fffffff         jns 0x5061e0
// 00506271  55                   push ebp
// 00506272  c78424c0000000ffffffff mov dword ptr [esp + 0xc0], 0xffffffff
// 0050627d  e88e95ffff           call 0x4ff810
// 00506282  83c404               add esp, 4
// 00506285  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0050628c  64890d00000000       mov dword ptr fs:[0], ecx
// 00506293  59                   pop ecx
// 00506294  5f                   pop edi
// 00506295  5e                   pop esi
// 00506296  5d                   pop ebp
// 00506297  5b                   pop ebx
// 00506298  81c4ac000000         add esp, 0xac
// 0050629e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_bmp.cpp (function ?decodeICO@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_bmp.cpp
