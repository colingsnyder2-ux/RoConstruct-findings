// roc 2009-12 0061f700  unit: seg_00610000  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061f700
//
// 0061f700  83ec0c               sub esp, 0xc
// 0061f703  53                   push ebx
// 0061f704  55                   push ebp
// 0061f705  56                   push esi
// 0061f706  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061f70a  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0061f710  33ed                 xor ebp, ebp
// 0061f712  3bc5                 cmp eax, ebp
// 0061f714  0f94c3               sete bl
// 0061f717  57                   push edi
// 0061f718  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061f71e  32c9                 xor cl, cl
// 0061f720  897c2418             mov dword ptr [esp + 0x18], edi
// 0061f724  885c2420             mov byte ptr [esp + 0x20], bl
// 0061f728  84db                 test bl, bl
// 0061f72a  7408                 je 0x61f734
// 0061f72c  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 0061f732  eb18                 jmp 0x61f74c
// 0061f734  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0061f73a  3bc2                 cmp eax, edx
// 0061f73c  7f05                 jg 0x61f743
// 0061f73e  83fa40               cmp edx, 0x40
// 0061f741  7c02                 jl 0x61f745
// 0061f743  b101                 mov cl, 1
// 0061f745  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 0061f74c  7402                 je 0x61f750
// 0061f74e  b101                 mov cl, 1
// 0061f750  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0061f756  3bc5                 cmp eax, ebp
// 0061f758  740b                 je 0x61f765
// 0061f75a  48                   dec eax
// 0061f75b  398678010000         cmp dword ptr [esi + 0x178], eax
// 0061f761  7402                 je 0x61f765
// 0061f763  b101                 mov cl, 1
// 0061f765  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 0061f76c  7f04                 jg 0x61f772
// 0061f76e  84c9                 test cl, cl
// 0061f770  743f                 je 0x61f7b1
// 0061f772  8b06                 mov eax, dword ptr [esi]
// 0061f774  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 0061f77b  8b0e                 mov ecx, dword ptr [esi]
// 0061f77d  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 0061f783  895118               mov dword ptr [ecx + 0x18], edx
// 0061f786  8b06                 mov eax, dword ptr [esi]
// 0061f788  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 0061f78e  89481c               mov dword ptr [eax + 0x1c], ecx
// 0061f791  8b16                 mov edx, dword ptr [esi]
// 0061f793  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0061f799  894220               mov dword ptr [edx + 0x20], eax
// 0061f79c  8b0e                 mov ecx, dword ptr [esi]
// 0061f79e  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 0061f7a4  895124               mov dword ptr [ecx + 0x24], edx
// 0061f7a7  8b06                 mov eax, dword ptr [esi]
// 0061f7a9  8b08                 mov ecx, dword ptr [eax]
// 0061f7ab  56                   push esi
// 0061f7ac  ffd1                 call ecx
// 0061f7ae  83c404               add esp, 4
// 0061f7b1  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 0061f7b7  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061f7bb  0f8ecf000000         jle 0x61f890
// 0061f7c1  8d9628010000         lea edx, [esi + 0x128]
// 0061f7c7  89542414             mov dword ptr [esp + 0x14], edx
// 0061f7cb  eb03                 jmp 0x61f7d0
// 0061f7cd  8d4900               lea ecx, [ecx]
// 0061f7d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061f7d4  8b08                 mov ecx, dword ptr [eax]
// 0061f7d6  8b5904               mov ebx, dword ptr [ecx + 4]
// 0061f7d9  8beb                 mov ebp, ebx
// 0061f7db  c1e508               shl ebp, 8
// 0061f7de  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 0061f7e4  807c242000           cmp byte ptr [esp + 0x20], 0
// 0061f7e9  752a                 jne 0x61f815
// 0061f7eb  837d0000             cmp dword ptr [ebp], 0
// 0061f7ef  7d24                 jge 0x61f815
// 0061f7f1  8b16                 mov edx, dword ptr [esi]
// 0061f7f3  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 0061f7fa  8b06                 mov eax, dword ptr [esi]
// 0061f7fc  895818               mov dword ptr [eax + 0x18], ebx
// 0061f7ff  8b0e                 mov ecx, dword ptr [esi]
// 0061f801  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 0061f808  8b16                 mov edx, dword ptr [esi]
// 0061f80a  8b4204               mov eax, dword ptr [edx + 4]
// 0061f80d  6aff                 push -1
// 0061f80f  56                   push esi
// 0061f810  ffd0                 call eax
// 0061f812  83c408               add esp, 8
// 0061f815  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 0061f81b  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0061f821  7f49                 jg 0x61f86c
// 0061f823  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 0061f827  33c9                 xor ecx, ecx
// 0061f829  85c0                 test eax, eax
// 0061f82b  0f9cc1               setl cl
// 0061f82e  49                   dec ecx
// 0061f82f  23c1                 and eax, ecx
// 0061f831  398674010000         cmp dword ptr [esi + 0x174], eax
// 0061f837  7420                 je 0x61f859
// 0061f839  8b16                 mov edx, dword ptr [esi]
// 0061f83b  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 0061f842  8b06                 mov eax, dword ptr [esi]
// 0061f844  895818               mov dword ptr [eax + 0x18], ebx
// 0061f847  8b0e                 mov ecx, dword ptr [esi]
// 0061f849  89791c               mov dword ptr [ecx + 0x1c], edi
// 0061f84c  8b16                 mov edx, dword ptr [esi]
// 0061f84e  8b4204               mov eax, dword ptr [edx + 4]
// 0061f851  6aff                 push -1
// 0061f853  56                   push esi
// 0061f854  ffd0                 call eax
// 0061f856  83c408               add esp, 8
// 0061f859  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0061f85f  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 0061f863  47                   inc edi
// 0061f864  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0061f86a  7eb7                 jle 0x61f823
// 0061f86c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061f870  8344241404           add dword ptr [esp + 0x14], 4
// 0061f875  40                   inc eax
// 0061f876  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0061f87c  89442410             mov dword ptr [esp + 0x10], eax
// 0061f880  0f8c4affffff         jl 0x61f7d0
// 0061f886  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0061f88a  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 0061f88e  33ed                 xor ebp, ebp
// 0061f890  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 0061f896  7516                 jne 0x61f8ae
// 0061f898  84db                 test bl, bl
// 0061f89a  7409                 je 0x61f8a5
// 0061f89c  c74704c0ed6100       mov dword ptr [edi + 4], 0x61edc0
// 0061f8a3  eb1d                 jmp 0x61f8c2
// 0061f8a5  c7470400f06100       mov dword ptr [edi + 4], 0x61f000
// 0061f8ac  eb14                 jmp 0x61f8c2
// 0061f8ae  84db                 test bl, bl
// 0061f8b0  7409                 je 0x61f8bb
// 0061f8b2  c7470440f26100       mov dword ptr [edi + 4], 0x61f240
// 0061f8b9  eb07                 jmp 0x61f8c2
// 0061f8bb  c7470420f36100       mov dword ptr [edi + 4], 0x61f320
// 0061f8c2  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 0061f8c8  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061f8cc  7e6d                 jle 0x61f93b
// 0061f8ce  8d6f18               lea ebp, [edi + 0x18]
// 0061f8d1  8d9e28010000         lea ebx, [esi + 0x128]
// 0061f8d7  807c242000           cmp byte ptr [esp + 0x20], 0
// 0061f8dc  8b03                 mov eax, dword ptr [ebx]
// 0061f8de  741c                 je 0x61f8fc
// 0061f8e0  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0061f8e7  7532                 jne 0x61f91b
// 0061f8e9  8b4014               mov eax, dword ptr [eax + 0x14]
// 0061f8ec  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 0061f8f0  52                   push edx
// 0061f8f1  50                   push eax
// 0061f8f2  6a01                 push 1
// 0061f8f4  56                   push esi
// 0061f8f5  e846e9ffff           call 0x61e240
// 0061f8fa  eb1c                 jmp 0x61f918
// 0061f8fc  8b4018               mov eax, dword ptr [eax + 0x18]
// 0061f8ff  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 0061f903  57                   push edi
// 0061f904  50                   push eax
// 0061f905  6a00                 push 0
// 0061f907  56                   push esi
// 0061f908  e833e9ffff           call 0x61e240
// 0061f90d  8b07                 mov eax, dword ptr [edi]
// 0061f90f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061f913  89413c               mov dword ptr [ecx + 0x3c], eax
// 0061f916  8bf9                 mov edi, ecx
// 0061f918  83c410               add esp, 0x10
// 0061f91b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061f91f  c7450000000000       mov dword ptr [ebp], 0
// 0061f926  40                   inc eax
// 0061f927  83c304               add ebx, 4
// 0061f92a  83c504               add ebp, 4
// 0061f92d  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0061f933  89442410             mov dword ptr [esp + 0x10], eax
// 0061f937  7c9e                 jl 0x61f8d7
// 0061f939  33ed                 xor ebp, ebp
// 0061f93b  896f10               mov dword ptr [edi + 0x10], ebp
// 0061f93e  896f0c               mov dword ptr [edi + 0xc], ebp
// 0061f941  896f14               mov dword ptr [edi + 0x14], ebp
// 0061f944  c6470800             mov byte ptr [edi + 8], 0
// 0061f948  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0061f94e  895728               mov dword ptr [edi + 0x28], edx
// 0061f951  5f                   pop edi
// 0061f952  5e                   pop esi
// 0061f953  5d                   pop ebp
// 0061f954  5b                   pop ebx
// 0061f955  83c40c               add esp, 0xc
// 0061f958  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
