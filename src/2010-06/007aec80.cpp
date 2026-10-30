// roc 2010-06 007aec80  unit: CXTPPaintManager  size: 1508 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aec80
//
// 007aec80  6aff                 push -1
// 007aec82  6886eb9a00           push 0x9aeb86
// 007aec87  64a100000000         mov eax, dword ptr fs:[0]
// 007aec8d  50                   push eax
// 007aec8e  83ec44               sub esp, 0x44
// 007aec91  53                   push ebx
// 007aec92  55                   push ebp
// 007aec93  56                   push esi
// 007aec94  57                   push edi
// 007aec95  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007aec9a  33c4                 xor eax, esp
// 007aec9c  50                   push eax
// 007aec9d  8d442458             lea eax, [esp + 0x58]
// 007aeca1  64a300000000         mov dword ptr fs:[0], eax
// 007aeca7  8be9                 mov ebp, ecx
// 007aeca9  8b742470             mov esi, dword ptr [esp + 0x70]
// 007aecad  8b06                 mov eax, dword ptr [esi]
// 007aecaf  8b5058               mov edx, dword ptr [eax + 0x58]
// 007aecb2  8d4c2424             lea ecx, [esp + 0x24]
// 007aecb6  51                   push ecx
// 007aecb7  8bce                 mov ecx, esi
// 007aecb9  ffd2                 call edx
// 007aecbb  8d442424             lea eax, [esp + 0x24]
// 007aecbf  50                   push eax
// 007aecc0  8d4c2424             lea ecx, [esp + 0x24]
// 007aecc4  c744246400000000     mov dword ptr [esp + 0x64], 0
// 007aeccc  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007aecd2  8d4c2420             lea ecx, [esp + 0x20]
// 007aecd6  51                   push ecx
// 007aecd7  c644246401           mov byte ptr [esp + 0x64], 1
// 007aecdc  e8bfe6ffff           call 0x7ad3a0
// 007aece1  83c404               add esp, 4
// 007aece4  8d4c241c             lea ecx, [esp + 0x1c]
// 007aece8  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007aecee  8d4c2418             lea ecx, [esp + 0x18]
// 007aecf2  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007aecf8  83bd9400000000       cmp dword ptr [ebp + 0x94], 0
// 007aecff  c644246003           mov byte ptr [esp + 0x60], 3
// 007aed04  7418                 je 0x7aed1e
// 007aed06  8d542418             lea edx, [esp + 0x18]
// 007aed0a  52                   push edx
// 007aed0b  8d442420             lea eax, [esp + 0x20]
// 007aed0f  50                   push eax
// 007aed10  8d4c242c             lea ecx, [esp + 0x2c]
// 007aed14  51                   push ecx
// 007aed15  8bcd                 mov ecx, ebp
// 007aed17  e894e6ffff           call 0x7ad3b0
// 007aed1c  eb0f                 jmp 0x7aed2d
// 007aed1e  8d542424             lea edx, [esp + 0x24]
// 007aed22  52                   push edx
// 007aed23  8d4c2420             lea ecx, [esp + 0x20]
// 007aed27  ff1580c59e00         call dword ptr [0x9ec580]
// 007aed2d  8d44241c             lea eax, [esp + 0x1c]
// 007aed31  50                   push eax
// 007aed32  8d4c2418             lea ecx, [esp + 0x18]
// 007aed36  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007aed3c  8d4c2418             lea ecx, [esp + 0x18]
// 007aed40  51                   push ecx
// 007aed41  8d4c2474             lea ecx, [esp + 0x74]
// 007aed45  c644246404           mov byte ptr [esp + 0x64], 4
// 007aed4a  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007aed50  8d542414             lea edx, [esp + 0x14]
// 007aed54  52                   push edx
// 007aed55  c644246405           mov byte ptr [esp + 0x64], 5
// 007aed5a  e841e6ffff           call 0x7ad3a0
// 007aed5f  8d442474             lea eax, [esp + 0x74]
// 007aed63  50                   push eax
// 007aed64  e837e6ffff           call 0x7ad3a0
// 007aed69  83c408               add esp, 8
// 007aed6c  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 007aed74  0f8530010000         jne 0x7aeeaa
// 007aed7a  8d4c2420             lea ecx, [esp + 0x20]
// 007aed7e  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007aed84  84c0                 test al, al
// 007aed86  7407                 je 0x7aed8f
// 007aed88  b8e86ea000           mov eax, 0xa06ee8
// 007aed8d  eb0a                 jmp 0x7aed99
// 007aed8f  8d4c2414             lea ecx, [esp + 0x14]
// 007aed93  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aed99  50                   push eax
// 007aed9a  8d8c2488000000       lea ecx, [esp + 0x88]
// 007aeda1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007aeda7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007aedab  8d4c2438             lea ecx, [esp + 0x38]
// 007aedaf  51                   push ecx
// 007aedb0  8d8c2488000000       lea ecx, [esp + 0x88]
// 007aedb7  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007aedbd  50                   push eax
// 007aedbe  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007aedc5  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aedcb  8b5608               mov edx, dword ptr [esi + 8]
// 007aedce  8b3d94a19e00         mov edi, dword ptr [0x9ea194]
// 007aedd4  50                   push eax
// 007aedd5  52                   push edx
// 007aedd6  ffd7                 call edi
// 007aedd8  8d8c2484000000       lea ecx, [esp + 0x84]
// 007aeddf  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007aede5  8d4c2420             lea ecx, [esp + 0x20]
// 007aede9  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007aedef  84c0                 test al, al
// 007aedf1  7407                 je 0x7aedfa
// 007aedf3  b8e86ea000           mov eax, 0xa06ee8
// 007aedf8  eb0a                 jmp 0x7aee04
// 007aedfa  8d4c2470             lea ecx, [esp + 0x70]
// 007aedfe  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aee04  50                   push eax
// 007aee05  8d4c2470             lea ecx, [esp + 0x70]
// 007aee09  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007aee0f  8d442428             lea eax, [esp + 0x28]
// 007aee13  50                   push eax
// 007aee14  8d4c2470             lea ecx, [esp + 0x70]
// 007aee18  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007aee1e  50                   push eax
// 007aee1f  8d4c2474             lea ecx, [esp + 0x74]
// 007aee23  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aee29  8b4e08               mov ecx, dword ptr [esi + 8]
// 007aee2c  50                   push eax
// 007aee2d  51                   push ecx
// 007aee2e  ffd7                 call edi
// 007aee30  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007aee34  8b742428             mov esi, dword ptr [esp + 0x28]
// 007aee38  8d4c246c             lea ecx, [esp + 0x6c]
// 007aee3c  8954242c             mov dword ptr [esp + 0x2c], edx
// 007aee40  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007aee46  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007aee4e  7403                 je 0x7aee53
// 007aee50  83c608               add esi, 8
// 007aee53  8b442438             mov eax, dword ptr [esp + 0x38]
// 007aee57  3bc6                 cmp eax, esi
// 007aee59  7e02                 jle 0x7aee5d
// 007aee5b  8bf0                 mov esi, eax
// 007aee5d  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007aee65  b818000000           mov eax, 0x18
// 007aee6a  89742438             mov dword ptr [esp + 0x38], esi
// 007aee6e  8944243c             mov dword ptr [esp + 0x3c], eax
// 007aee72  741f                 je 0x7aee93
// 007aee74  89442428             mov dword ptr [esp + 0x28], eax
// 007aee78  8974242c             mov dword ptr [esp + 0x2c], esi
// 007aee7c  8b742468             mov esi, dword ptr [esp + 0x68]
// 007aee80  8d442428             lea eax, [esp + 0x28]
// 007aee84  8b08                 mov ecx, dword ptr [eax]
// 007aee86  8b5004               mov edx, dword ptr [eax + 4]
// 007aee89  890e                 mov dword ptr [esi], ecx
// 007aee8b  895604               mov dword ptr [esi + 4], edx
// 007aee8e  e97d030000           jmp 0x7af210
// 007aee93  8b742468             mov esi, dword ptr [esp + 0x68]
// 007aee97  8d442438             lea eax, [esp + 0x38]
// 007aee9b  8b08                 mov ecx, dword ptr [eax]
// 007aee9d  8b5004               mov edx, dword ptr [eax + 4]
// 007aeea0  890e                 mov dword ptr [esi], ecx
// 007aeea2  895604               mov dword ptr [esi + 4], edx
// 007aeea5  e966030000           jmp 0x7af210
// 007aeeaa  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007aeeb2  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 007aeeb6  0f8573010000         jne 0x7af02f
// 007aeebc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007aeec3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007aeec7  03c7                 add eax, edi
// 007aeec9  99                   cdq 
// 007aeeca  2bc2                 sub eax, edx
// 007aeecc  8bd8                 mov ebx, eax
// 007aeece  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007aeed2  6a01                 push 1
// 007aeed4  6a00                 push 0
// 007aeed6  89442438             mov dword ptr [esp + 0x38], eax
// 007aeeda  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007aeee1  83ec10               sub esp, 0x10
// 007aeee4  8944244c             mov dword ptr [esp + 0x4c], eax
// 007aeee8  8bc4                 mov eax, esp
// 007aeeea  8908                 mov dword ptr [eax], ecx
// 007aeeec  894c2440             mov dword ptr [esp + 0x40], ecx
// 007aeef0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007aeef7  897804               mov dword ptr [eax + 4], edi
// 007aeefa  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 007aef01  d1fb                 sar ebx, 1
// 007aef03  894808               mov dword ptr [eax + 8], ecx
// 007aef06  8d5301               lea edx, [ebx + 1]
// 007aef09  89500c               mov dword ptr [eax + 0xc], edx
// 007aef0c  8d54242c             lea edx, [esp + 0x2c]
// 007aef10  52                   push edx
// 007aef11  8d442438             lea eax, [esp + 0x38]
// 007aef15  50                   push eax
// 007aef16  56                   push esi
// 007aef17  57                   push edi
// 007aef18  8bcd                 mov ecx, ebp
// 007aef1a  e891faffff           call 0x7ae9b0
// 007aef1f  8d4c2470             lea ecx, [esp + 0x70]
// 007aef23  51                   push ecx
// 007aef24  8d54243c             lea edx, [esp + 0x3c]
// 007aef28  52                   push edx
// 007aef29  8bcf                 mov ecx, edi
// 007aef2b  e880ffcbff           call 0x46eeb0
// 007aef30  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 007aef37  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007aef3b  f7df                 neg edi
// 007aef3d  1bff                 sbb edi, edi
// 007aef3f  83e709               and edi, 9
// 007aef42  0338                 add edi, dword ptr [eax]
// 007aef44  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007aef48  2bc7                 sub eax, edi
// 007aef4a  2b442474             sub eax, dword ptr [esp + 0x74]
// 007aef4e  6a00                 push 0
// 007aef50  99                   cdq 
// 007aef51  2bc2                 sub eax, edx
// 007aef53  8b542438             mov edx, dword ptr [esp + 0x38]
// 007aef57  6a00                 push 0
// 007aef59  83ec10               sub esp, 0x10
// 007aef5c  d1f8                 sar eax, 1
// 007aef5e  03c8                 add ecx, eax
// 007aef60  8bc4                 mov eax, esp
// 007aef62  8908                 mov dword ptr [eax], ecx
// 007aef64  894c2440             mov dword ptr [esp + 0x40], ecx
// 007aef68  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007aef6c  895804               mov dword ptr [eax + 4], ebx
// 007aef6f  894808               mov dword ptr [eax + 8], ecx
// 007aef72  89500c               mov dword ptr [eax + 0xc], edx
// 007aef75  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007aef7c  8d842488000000       lea eax, [esp + 0x88]
// 007aef83  50                   push eax
// 007aef84  8d4c2434             lea ecx, [esp + 0x34]
// 007aef88  51                   push ecx
// 007aef89  56                   push esi
// 007aef8a  52                   push edx
// 007aef8b  8bcd                 mov ecx, ebp
// 007aef8d  e81efaffff           call 0x7ae9b0
// 007aef92  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007aef9a  0f845f020000         je 0x7af1ff
// 007aefa0  8d4c2418             lea ecx, [esp + 0x18]
// 007aefa4  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007aefaa  84c0                 test al, al
// 007aefac  7414                 je 0x7aefc2
// 007aefae  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007aefb2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007aefb6  03c1                 add eax, ecx
// 007aefb8  99                   cdq 
// 007aefb9  2bc2                 sub eax, edx
// 007aefbb  8bf8                 mov edi, eax
// 007aefbd  d1ff                 sar edi, 1
// 007aefbf  4f                   dec edi
// 007aefc0  eb08                 jmp 0x7aefca
// 007aefc2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007aefc6  8d7c3afc             lea edi, [edx + edi - 4]
// 007aefca  8b442434             mov eax, dword ptr [esp + 0x34]
// 007aefce  03c3                 add eax, ebx
// 007aefd0  99                   cdq 
// 007aefd1  2bc2                 sub eax, edx
// 007aefd3  8bd8                 mov ebx, eax
// 007aefd5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007aefdb  d1fb                 sar ebx, 1
// 007aefdd  83f8ff               cmp eax, -1
// 007aefe0  750f                 jne 0x7aeff1
// 007aefe2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007aefe8  85c9                 test ecx, ecx
// 007aefea  7405                 je 0x7aeff1
// 007aefec  e89fb6ffff           call 0x7aa690
// 007aeff1  8b4d00               mov ecx, dword ptr [ebp]
// 007aeff4  8b16                 mov edx, dword ptr [esi]
// 007aeff6  6a00                 push 0
// 007aeff8  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 007aefff  50                   push eax
// 007af000  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007af006  8bce                 mov ecx, esi
// 007af008  ffd0                 call eax
// 007af00a  8b16                 mov edx, dword ptr [esi]
// 007af00c  50                   push eax
// 007af00d  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007af010  8bce                 mov ecx, esi
// 007af012  ffd0                 call eax
// 007af014  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007af018  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007af01f  50                   push eax
// 007af020  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 007af026  53                   push ebx
// 007af027  57                   push edi
// 007af028  56                   push esi
// 007af029  51                   push ecx
// 007af02a  e9cc010000           jmp 0x7af1fb
// 007af02f  8b442474             mov eax, dword ptr [esp + 0x74]
// 007af033  8d4801               lea ecx, [eax + 1]
// 007af036  894c2448             mov dword ptr [esp + 0x48], ecx
// 007af03a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007af03e  03c1                 add eax, ecx
// 007af040  99                   cdq 
// 007af041  2bc2                 sub eax, edx
// 007af043  d1f8                 sar eax, 1
// 007af045  89842484000000       mov dword ptr [esp + 0x84], eax
// 007af04c  8d5801               lea ebx, [eax + 1]
// 007af04f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007af056  49                   dec ecx
// 007af057  8d542414             lea edx, [esp + 0x14]
// 007af05b  89442454             mov dword ptr [esp + 0x54], eax
// 007af05f  89442444             mov dword ptr [esp + 0x44], eax
// 007af063  52                   push edx
// 007af064  8d44242c             lea eax, [esp + 0x2c]
// 007af068  894c2444             mov dword ptr [esp + 0x44], ecx
// 007af06c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007af070  50                   push eax
// 007af071  897c2444             mov dword ptr [esp + 0x44], edi
// 007af075  e836fecbff           call 0x46eeb0
// 007af07a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007af07e  8bc1                 mov eax, ecx
// 007af080  2b842484000000       sub eax, dword ptr [esp + 0x84]
// 007af087  6a00                 push 0
// 007af089  2b442430             sub eax, dword ptr [esp + 0x30]
// 007af08d  40                   inc eax
// 007af08e  99                   cdq 
// 007af08f  2bc2                 sub eax, edx
// 007af091  d1f8                 sar eax, 1
// 007af093  2bc8                 sub ecx, eax
// 007af095  8b442448             mov eax, dword ptr [esp + 0x48]
// 007af099  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 007af09d  2bc7                 sub eax, edi
// 007af09f  40                   inc eax
// 007af0a0  99                   cdq 
// 007af0a1  2bc2                 sub eax, edx
// 007af0a3  d1f8                 sar eax, 1
// 007af0a5  8bd7                 mov edx, edi
// 007af0a7  03d0                 add edx, eax
// 007af0a9  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007af0b0  50                   push eax
// 007af0b1  83ec10               sub esp, 0x10
// 007af0b4  8bc4                 mov eax, esp
// 007af0b6  8908                 mov dword ptr [eax], ecx
// 007af0b8  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007af0bc  895004               mov dword ptr [eax + 4], edx
// 007af0bf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007af0c3  894808               mov dword ptr [eax + 8], ecx
// 007af0c6  89500c               mov dword ptr [eax + 0xc], edx
// 007af0c9  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007af0d0  8d44242c             lea eax, [esp + 0x2c]
// 007af0d4  50                   push eax
// 007af0d5  8d4c2438             lea ecx, [esp + 0x38]
// 007af0d9  51                   push ecx
// 007af0da  56                   push esi
// 007af0db  52                   push edx
// 007af0dc  8bcd                 mov ecx, ebp
// 007af0de  e8cdf8ffff           call 0x7ae9b0
// 007af0e3  8d442470             lea eax, [esp + 0x70]
// 007af0e7  50                   push eax
// 007af0e8  8d4c243c             lea ecx, [esp + 0x3c]
// 007af0ec  51                   push ecx
// 007af0ed  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007af0f1  e8bafdcbff           call 0x46eeb0
// 007af0f6  8b10                 mov edx, dword ptr [eax]
// 007af0f8  8b4804               mov ecx, dword ptr [eax + 4]
// 007af0fb  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007af102  f7d8                 neg eax
// 007af104  1bc0                 sbb eax, eax
// 007af106  83e008               and eax, 8
// 007af109  03d0                 add edx, eax
// 007af10b  8b442454             mov eax, dword ptr [esp + 0x54]
// 007af10f  89542428             mov dword ptr [esp + 0x28], edx
// 007af113  8b542448             mov edx, dword ptr [esp + 0x48]
// 007af117  89442444             mov dword ptr [esp + 0x44], eax
// 007af11b  89542438             mov dword ptr [esp + 0x38], edx
// 007af11f  897c243c             mov dword ptr [esp + 0x3c], edi
// 007af123  895c2440             mov dword ptr [esp + 0x40], ebx
// 007af127  8bc3                 mov eax, ebx
// 007af129  2bc2                 sub eax, edx
// 007af12b  2bc1                 sub eax, ecx
// 007af12d  40                   inc eax
// 007af12e  99                   cdq 
// 007af12f  2bc2                 sub eax, edx
// 007af131  d1f8                 sar eax, 1
// 007af133  8bcb                 mov ecx, ebx
// 007af135  2bc8                 sub ecx, eax
// 007af137  8b442454             mov eax, dword ptr [esp + 0x54]
// 007af13b  2bc7                 sub eax, edi
// 007af13d  2b442428             sub eax, dword ptr [esp + 0x28]
// 007af141  6a00                 push 0
// 007af143  40                   inc eax
// 007af144  99                   cdq 
// 007af145  2bc2                 sub eax, edx
// 007af147  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007af14e  52                   push edx
// 007af14f  83ec10               sub esp, 0x10
// 007af152  d1f8                 sar eax, 1
// 007af154  03f8                 add edi, eax
// 007af156  8bc4                 mov eax, esp
// 007af158  8908                 mov dword ptr [eax], ecx
// 007af15a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007af15e  897804               mov dword ptr [eax + 4], edi
// 007af161  895808               mov dword ptr [eax + 8], ebx
// 007af164  89480c               mov dword ptr [eax + 0xc], ecx
// 007af167  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007af16e  8d942488000000       lea edx, [esp + 0x88]
// 007af175  52                   push edx
// 007af176  8d442434             lea eax, [esp + 0x34]
// 007af17a  50                   push eax
// 007af17b  56                   push esi
// 007af17c  51                   push ecx
// 007af17d  8bcd                 mov ecx, ebp
// 007af17f  e82cf8ffff           call 0x7ae9b0
// 007af184  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007af18c  7471                 je 0x7af1ff
// 007af18e  8b542438             mov edx, dword ptr [esp + 0x38]
// 007af192  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007af196  8bc3                 mov eax, ebx
// 007af198  03c2                 add eax, edx
// 007af19a  99                   cdq 
// 007af19b  2bc2                 sub eax, edx
// 007af19d  8bd8                 mov ebx, eax
// 007af19f  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007af1a5  d1fb                 sar ebx, 1
// 007af1a7  83eb02               sub ebx, 2
// 007af1aa  8d540ffc             lea edx, [edi + ecx - 4]
// 007af1ae  8954243c             mov dword ptr [esp + 0x3c], edx
// 007af1b2  83f8ff               cmp eax, -1
// 007af1b5  750f                 jne 0x7af1c6
// 007af1b7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007af1bd  85c9                 test ecx, ecx
// 007af1bf  7405                 je 0x7af1c6
// 007af1c1  e8cab4ffff           call 0x7aa690
// 007af1c6  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007af1cd  8b16                 mov edx, dword ptr [esi]
// 007af1cf  8b7d00               mov edi, dword ptr [ebp]
// 007af1d2  51                   push ecx
// 007af1d3  50                   push eax
// 007af1d4  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007af1da  8bce                 mov ecx, esi
// 007af1dc  ffd0                 call eax
// 007af1de  8b16                 mov edx, dword ptr [esi]
// 007af1e0  50                   push eax
// 007af1e1  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007af1e4  8bce                 mov ecx, esi
// 007af1e6  ffd0                 call eax
// 007af1e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007af1ec  8b542478             mov edx, dword ptr [esp + 0x78]
// 007af1f0  50                   push eax
// 007af1f1  8b87f4000000         mov eax, dword ptr [edi + 0xf4]
// 007af1f7  51                   push ecx
// 007af1f8  53                   push ebx
// 007af1f9  56                   push esi
// 007af1fa  52                   push edx
// 007af1fb  8bcd                 mov ecx, ebp
// 007af1fd  ffd0                 call eax
// 007af1ff  8b742468             mov esi, dword ptr [esp + 0x68]
// 007af203  c70600000000         mov dword ptr [esi], 0
// 007af209  c7460400000000       mov dword ptr [esi + 4], 0
// 007af210  8d4c2470             lea ecx, [esp + 0x70]
// 007af214  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af21a  8d4c2414             lea ecx, [esp + 0x14]
// 007af21e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af224  8d4c2418             lea ecx, [esp + 0x18]
// 007af228  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af22e  8d4c241c             lea ecx, [esp + 0x1c]
// 007af232  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af238  8d4c2420             lea ecx, [esp + 0x20]
// 007af23c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af242  8d4c2424             lea ecx, [esp + 0x24]
// 007af246  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af24c  8bc6                 mov eax, esi
// 007af24e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007af252  64890d00000000       mov dword ptr fs:[0], ecx
// 007af259  59                   pop ecx
// 007af25a  5f                   pop edi
// 007af25b  5e                   pop esi
// 007af25c  5d                   pop ebp
// 007af25d  5b                   pop ebx
// 007af25e  83c450               add esp, 0x50
// 007af261  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText2@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp