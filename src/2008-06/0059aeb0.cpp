// roc 2008-06 0059aeb0  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 867 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059aeb0
//
// 0059aeb0  8b442404             mov eax, dword ptr [esp + 4]
// 0059aeb4  83ec30               sub esp, 0x30
// 0059aeb7  53                   push ebx
// 0059aeb8  56                   push esi
// 0059aeb9  57                   push edi
// 0059aeba  50                   push eax
// 0059aebb  8d542410             lea edx, [esp + 0x10]
// 0059aebf  52                   push edx
// 0059aec0  e86b1cf1ff           call 0x4acb30
// 0059aec5  6a28                 push 0x28
// 0059aec7  e8545a1000           call 0x6a0920
// 0059aecc  33f6                 xor esi, esi
// 0059aece  83c404               add esp, 4
// 0059aed1  bb07000000           mov ebx, 7
// 0059aed6  3bc6                 cmp eax, esi
// 0059aed8  7423                 je 0x59aefd
// 0059aeda  d9442430             fld dword ptr [esp + 0x30]
// 0059aede  8b0d34539700         mov ecx, dword ptr [0x975334]
// 0059aee4  8930                 mov dword ptr [eax], esi
// 0059aee6  897004               mov dword ptr [eax + 4], esi
// 0059aee9  897008               mov dword ptr [eax + 8], esi
// 0059aeec  d95818               fstp dword ptr [eax + 0x18]
// 0059aeef  894810               mov dword ptr [eax + 0x10], ecx
// 0059aef2  895814               mov dword ptr [eax + 0x14], ebx
// 0059aef5  897020               mov dword ptr [eax + 0x20], esi
// 0059aef8  897024               mov dword ptr [eax + 0x24], esi
// 0059aefb  eb02                 jmp 0x59aeff
// 0059aefd  33c0                 xor eax, eax
// 0059aeff  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0059af03  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059af06  3bce                 cmp ecx, esi
// 0059af08  7505                 jne 0x59af0f
// 0059af0a  894704               mov dword ptr [edi + 4], eax
// 0059af0d  eb02                 jmp 0x59af11
// 0059af0f  8901                 mov dword ptr [ecx], eax
// 0059af11  6a28                 push 0x28
// 0059af13  894708               mov dword ptr [edi + 8], eax
// 0059af16  e8055a1000           call 0x6a0920
// 0059af1b  83c404               add esp, 4
// 0059af1e  3bc6                 cmp eax, esi
// 0059af20  7423                 je 0x59af45
// 0059af22  d9442434             fld dword ptr [esp + 0x34]
// 0059af26  8b0d80539700         mov ecx, dword ptr [0x975380]
// 0059af2c  8930                 mov dword ptr [eax], esi
// 0059af2e  897004               mov dword ptr [eax + 4], esi
// 0059af31  897008               mov dword ptr [eax + 8], esi
// 0059af34  d95818               fstp dword ptr [eax + 0x18]
// 0059af37  894810               mov dword ptr [eax + 0x10], ecx
// 0059af3a  895814               mov dword ptr [eax + 0x14], ebx
// 0059af3d  897020               mov dword ptr [eax + 0x20], esi
// 0059af40  897024               mov dword ptr [eax + 0x24], esi
// 0059af43  eb02                 jmp 0x59af47
// 0059af45  33c0                 xor eax, eax
// 0059af47  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059af4a  3bce                 cmp ecx, esi
// 0059af4c  7505                 jne 0x59af53
// 0059af4e  894704               mov dword ptr [edi + 4], eax
// 0059af51  eb02                 jmp 0x59af55
// 0059af53  8901                 mov dword ptr [ecx], eax
// 0059af55  6a28                 push 0x28
// 0059af57  894708               mov dword ptr [edi + 8], eax
// 0059af5a  e8c1591000           call 0x6a0920
// 0059af5f  83c404               add esp, 4
// 0059af62  3bc6                 cmp eax, esi
// 0059af64  7423                 je 0x59af89
// 0059af66  d9442438             fld dword ptr [esp + 0x38]
// 0059af6a  8b0d18539700         mov ecx, dword ptr [0x975318]
// 0059af70  8930                 mov dword ptr [eax], esi
// 0059af72  897004               mov dword ptr [eax + 4], esi
// 0059af75  897008               mov dword ptr [eax + 8], esi
// 0059af78  d95818               fstp dword ptr [eax + 0x18]
// 0059af7b  894810               mov dword ptr [eax + 0x10], ecx
// 0059af7e  895814               mov dword ptr [eax + 0x14], ebx
// 0059af81  897020               mov dword ptr [eax + 0x20], esi
// 0059af84  897024               mov dword ptr [eax + 0x24], esi
// 0059af87  eb02                 jmp 0x59af8b
// 0059af89  33c0                 xor eax, eax
// 0059af8b  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059af8e  3bce                 cmp ecx, esi
// 0059af90  7505                 jne 0x59af97
// 0059af92  894704               mov dword ptr [edi + 4], eax
// 0059af95  eb02                 jmp 0x59af99
// 0059af97  8901                 mov dword ptr [ecx], eax
// 0059af99  6a28                 push 0x28
// 0059af9b  894708               mov dword ptr [edi + 8], eax
// 0059af9e  e87d591000           call 0x6a0920
// 0059afa3  83c404               add esp, 4
// 0059afa6  3bc6                 cmp eax, esi
// 0059afa8  7423                 je 0x59afcd
// 0059afaa  d944240c             fld dword ptr [esp + 0xc]
// 0059afae  8b0d50539700         mov ecx, dword ptr [0x975350]
// 0059afb4  8930                 mov dword ptr [eax], esi
// 0059afb6  897004               mov dword ptr [eax + 4], esi
// 0059afb9  897008               mov dword ptr [eax + 8], esi
// 0059afbc  d95818               fstp dword ptr [eax + 0x18]
// 0059afbf  894810               mov dword ptr [eax + 0x10], ecx
// 0059afc2  895814               mov dword ptr [eax + 0x14], ebx
// 0059afc5  897020               mov dword ptr [eax + 0x20], esi
// 0059afc8  897024               mov dword ptr [eax + 0x24], esi
// 0059afcb  eb02                 jmp 0x59afcf
// 0059afcd  33c0                 xor eax, eax
// 0059afcf  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059afd2  3bce                 cmp ecx, esi
// 0059afd4  7505                 jne 0x59afdb
// 0059afd6  894704               mov dword ptr [edi + 4], eax
// 0059afd9  eb02                 jmp 0x59afdd
// 0059afdb  8901                 mov dword ptr [ecx], eax
// 0059afdd  6a28                 push 0x28
// 0059afdf  894708               mov dword ptr [edi + 8], eax
// 0059afe2  e839591000           call 0x6a0920
// 0059afe7  83c404               add esp, 4
// 0059afea  3bc6                 cmp eax, esi
// 0059afec  7423                 je 0x59b011
// 0059afee  d9442410             fld dword ptr [esp + 0x10]
// 0059aff2  8b0d68539700         mov ecx, dword ptr [0x975368]
// 0059aff8  8930                 mov dword ptr [eax], esi
// 0059affa  897004               mov dword ptr [eax + 4], esi
// 0059affd  897008               mov dword ptr [eax + 8], esi
// 0059b000  d95818               fstp dword ptr [eax + 0x18]
// 0059b003  894810               mov dword ptr [eax + 0x10], ecx
// 0059b006  895814               mov dword ptr [eax + 0x14], ebx
// 0059b009  897020               mov dword ptr [eax + 0x20], esi
// 0059b00c  897024               mov dword ptr [eax + 0x24], esi
// 0059b00f  eb02                 jmp 0x59b013
// 0059b011  33c0                 xor eax, eax
// 0059b013  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b016  3bce                 cmp ecx, esi
// 0059b018  7505                 jne 0x59b01f
// 0059b01a  894704               mov dword ptr [edi + 4], eax
// 0059b01d  eb02                 jmp 0x59b021
// 0059b01f  8901                 mov dword ptr [ecx], eax
// 0059b021  6a28                 push 0x28
// 0059b023  894708               mov dword ptr [edi + 8], eax
// 0059b026  e8f5581000           call 0x6a0920
// 0059b02b  83c404               add esp, 4
// 0059b02e  3bc6                 cmp eax, esi
// 0059b030  7423                 je 0x59b055
// 0059b032  d9442414             fld dword ptr [esp + 0x14]
// 0059b036  8b0d04539700         mov ecx, dword ptr [0x975304]
// 0059b03c  8930                 mov dword ptr [eax], esi
// 0059b03e  897004               mov dword ptr [eax + 4], esi
// 0059b041  897008               mov dword ptr [eax + 8], esi
// 0059b044  d95818               fstp dword ptr [eax + 0x18]
// 0059b047  894810               mov dword ptr [eax + 0x10], ecx
// 0059b04a  895814               mov dword ptr [eax + 0x14], ebx
// 0059b04d  897020               mov dword ptr [eax + 0x20], esi
// 0059b050  897024               mov dword ptr [eax + 0x24], esi
// 0059b053  eb02                 jmp 0x59b057
// 0059b055  33c0                 xor eax, eax
// 0059b057  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b05a  3bce                 cmp ecx, esi
// 0059b05c  7505                 jne 0x59b063
// 0059b05e  894704               mov dword ptr [edi + 4], eax
// 0059b061  eb02                 jmp 0x59b065
// 0059b063  8901                 mov dword ptr [ecx], eax
// 0059b065  6a28                 push 0x28
// 0059b067  894708               mov dword ptr [edi + 8], eax
// 0059b06a  e8b1581000           call 0x6a0920
// 0059b06f  83c404               add esp, 4
// 0059b072  3bc6                 cmp eax, esi
// 0059b074  7423                 je 0x59b099
// 0059b076  d9442418             fld dword ptr [esp + 0x18]
// 0059b07a  8b0d28539700         mov ecx, dword ptr [0x975328]
// 0059b080  8930                 mov dword ptr [eax], esi
// 0059b082  897004               mov dword ptr [eax + 4], esi
// 0059b085  897008               mov dword ptr [eax + 8], esi
// 0059b088  d95818               fstp dword ptr [eax + 0x18]
// 0059b08b  894810               mov dword ptr [eax + 0x10], ecx
// 0059b08e  895814               mov dword ptr [eax + 0x14], ebx
// 0059b091  897020               mov dword ptr [eax + 0x20], esi
// 0059b094  897024               mov dword ptr [eax + 0x24], esi
// 0059b097  eb02                 jmp 0x59b09b
// 0059b099  33c0                 xor eax, eax
// 0059b09b  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b09e  3bce                 cmp ecx, esi
// 0059b0a0  7505                 jne 0x59b0a7
// 0059b0a2  894704               mov dword ptr [edi + 4], eax
// 0059b0a5  eb02                 jmp 0x59b0a9
// 0059b0a7  8901                 mov dword ptr [ecx], eax
// 0059b0a9  6a28                 push 0x28
// 0059b0ab  894708               mov dword ptr [edi + 8], eax
// 0059b0ae  e86d581000           call 0x6a0920
// 0059b0b3  83c404               add esp, 4
// 0059b0b6  3bc6                 cmp eax, esi
// 0059b0b8  7423                 je 0x59b0dd
// 0059b0ba  d944241c             fld dword ptr [esp + 0x1c]
// 0059b0be  8b0d54539700         mov ecx, dword ptr [0x975354]
// 0059b0c4  8930                 mov dword ptr [eax], esi
// 0059b0c6  897004               mov dword ptr [eax + 4], esi
// 0059b0c9  897008               mov dword ptr [eax + 8], esi
// 0059b0cc  d95818               fstp dword ptr [eax + 0x18]
// 0059b0cf  894810               mov dword ptr [eax + 0x10], ecx
// 0059b0d2  895814               mov dword ptr [eax + 0x14], ebx
// 0059b0d5  897020               mov dword ptr [eax + 0x20], esi
// 0059b0d8  897024               mov dword ptr [eax + 0x24], esi
// 0059b0db  eb02                 jmp 0x59b0df
// 0059b0dd  33c0                 xor eax, eax
// 0059b0df  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b0e2  3bce                 cmp ecx, esi
// 0059b0e4  7505                 jne 0x59b0eb
// 0059b0e6  894704               mov dword ptr [edi + 4], eax
// 0059b0e9  eb02                 jmp 0x59b0ed
// 0059b0eb  8901                 mov dword ptr [ecx], eax
// 0059b0ed  6a28                 push 0x28
// 0059b0ef  894708               mov dword ptr [edi + 8], eax
// 0059b0f2  e829581000           call 0x6a0920
// 0059b0f7  83c404               add esp, 4
// 0059b0fa  3bc6                 cmp eax, esi
// 0059b0fc  7423                 je 0x59b121
// 0059b0fe  d9442420             fld dword ptr [esp + 0x20]
// 0059b102  8b0d48539700         mov ecx, dword ptr [0x975348]
// 0059b108  8930                 mov dword ptr [eax], esi
// 0059b10a  897004               mov dword ptr [eax + 4], esi
// 0059b10d  897008               mov dword ptr [eax + 8], esi
// 0059b110  d95818               fstp dword ptr [eax + 0x18]
// 0059b113  894810               mov dword ptr [eax + 0x10], ecx
// 0059b116  895814               mov dword ptr [eax + 0x14], ebx
// 0059b119  897020               mov dword ptr [eax + 0x20], esi
// 0059b11c  897024               mov dword ptr [eax + 0x24], esi
// 0059b11f  eb02                 jmp 0x59b123
// 0059b121  33c0                 xor eax, eax
// 0059b123  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b126  3bce                 cmp ecx, esi
// 0059b128  7505                 jne 0x59b12f
// 0059b12a  894704               mov dword ptr [edi + 4], eax
// 0059b12d  eb02                 jmp 0x59b131
// 0059b12f  8901                 mov dword ptr [ecx], eax
// 0059b131  6a28                 push 0x28
// 0059b133  894708               mov dword ptr [edi + 8], eax
// 0059b136  e8e5571000           call 0x6a0920
// 0059b13b  83c404               add esp, 4
// 0059b13e  3bc6                 cmp eax, esi
// 0059b140  7423                 je 0x59b165
// 0059b142  d9442424             fld dword ptr [esp + 0x24]
// 0059b146  8b0d24539700         mov ecx, dword ptr [0x975324]
// 0059b14c  8930                 mov dword ptr [eax], esi
// 0059b14e  897004               mov dword ptr [eax + 4], esi
// 0059b151  897008               mov dword ptr [eax + 8], esi
// 0059b154  d95818               fstp dword ptr [eax + 0x18]
// 0059b157  894810               mov dword ptr [eax + 0x10], ecx
// 0059b15a  895814               mov dword ptr [eax + 0x14], ebx
// 0059b15d  897020               mov dword ptr [eax + 0x20], esi
// 0059b160  897024               mov dword ptr [eax + 0x24], esi
// 0059b163  eb02                 jmp 0x59b167
// 0059b165  33c0                 xor eax, eax
// 0059b167  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b16a  3bce                 cmp ecx, esi
// 0059b16c  7505                 jne 0x59b173
// 0059b16e  894704               mov dword ptr [edi + 4], eax
// 0059b171  eb02                 jmp 0x59b175
// 0059b173  8901                 mov dword ptr [ecx], eax
// 0059b175  6a28                 push 0x28
// 0059b177  894708               mov dword ptr [edi + 8], eax
// 0059b17a  e8a1571000           call 0x6a0920
// 0059b17f  83c404               add esp, 4
// 0059b182  3bc6                 cmp eax, esi
// 0059b184  7423                 je 0x59b1a9
// 0059b186  d9442428             fld dword ptr [esp + 0x28]
// 0059b18a  8b0d20539700         mov ecx, dword ptr [0x975320]
// 0059b190  8930                 mov dword ptr [eax], esi
// 0059b192  897004               mov dword ptr [eax + 4], esi
// 0059b195  897008               mov dword ptr [eax + 8], esi
// 0059b198  d95818               fstp dword ptr [eax + 0x18]
// 0059b19b  894810               mov dword ptr [eax + 0x10], ecx
// 0059b19e  895814               mov dword ptr [eax + 0x14], ebx
// 0059b1a1  897020               mov dword ptr [eax + 0x20], esi
// 0059b1a4  897024               mov dword ptr [eax + 0x24], esi
// 0059b1a7  eb02                 jmp 0x59b1ab
// 0059b1a9  33c0                 xor eax, eax
// 0059b1ab  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b1ae  3bce                 cmp ecx, esi
// 0059b1b0  7505                 jne 0x59b1b7
// 0059b1b2  894704               mov dword ptr [edi + 4], eax
// 0059b1b5  eb02                 jmp 0x59b1b9
// 0059b1b7  8901                 mov dword ptr [ecx], eax
// 0059b1b9  6a28                 push 0x28
// 0059b1bb  894708               mov dword ptr [edi + 8], eax
// 0059b1be  e85d571000           call 0x6a0920
// 0059b1c3  83c404               add esp, 4
// 0059b1c6  3bc6                 cmp eax, esi
// 0059b1c8  7423                 je 0x59b1ed
// 0059b1ca  d944242c             fld dword ptr [esp + 0x2c]
// 0059b1ce  8b0d08539700         mov ecx, dword ptr [0x975308]
// 0059b1d4  8930                 mov dword ptr [eax], esi
// 0059b1d6  897004               mov dword ptr [eax + 4], esi
// 0059b1d9  897008               mov dword ptr [eax + 8], esi
// 0059b1dc  d95818               fstp dword ptr [eax + 0x18]
// 0059b1df  894810               mov dword ptr [eax + 0x10], ecx
// 0059b1e2  895814               mov dword ptr [eax + 0x14], ebx
// 0059b1e5  897020               mov dword ptr [eax + 0x20], esi
// 0059b1e8  897024               mov dword ptr [eax + 0x24], esi
// 0059b1eb  eb02                 jmp 0x59b1ef
// 0059b1ed  33c0                 xor eax, eax
// 0059b1ef  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059b1f2  3bce                 cmp ecx, esi
// 0059b1f4  750f                 jne 0x59b205
// 0059b1f6  894704               mov dword ptr [edi + 4], eax
// 0059b1f9  894708               mov dword ptr [edi + 8], eax
// 0059b1fc  5f                   pop edi
// 0059b1fd  5e                   pop esi
// 0059b1fe  5b                   pop ebx
// 0059b1ff  83c430               add esp, 0x30
// 0059b202  c20800               ret 8
// 0059b205  8901                 mov dword ptr [ecx], eax
// 0059b207  894708               mov dword ptr [edi + 8], eax
// 0059b20a  5f                   pop edi
// 0059b20b  5e                   pop esi
// 0059b20c  5b                   pop ebx
// 0059b20d  83c430               add esp, 0x30
// 0059b210  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?writeValue@?$TypedPropertyDescriptor@VCoordinateFrame@G3D@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
