// from server: 100% by auto
// roc 2009-06 0059d6d0  unit: seg_00590000  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059d6d0
//
// 0059d6d0  83ec0c               sub esp, 0xc
// 0059d6d3  53                   push ebx
// 0059d6d4  55                   push ebp
// 0059d6d5  56                   push esi
// 0059d6d6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059d6da  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0059d6e0  33ed                 xor ebp, ebp
// 0059d6e2  3bc5                 cmp eax, ebp
// 0059d6e4  0f94c3               sete bl
// 0059d6e7  57                   push edi
// 0059d6e8  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059d6ee  32c9                 xor cl, cl
// 0059d6f0  897c2418             mov dword ptr [esp + 0x18], edi
// 0059d6f4  885c2420             mov byte ptr [esp + 0x20], bl
// 0059d6f8  84db                 test bl, bl
// 0059d6fa  7408                 je 0x59d704
// 0059d6fc  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 0059d702  eb18                 jmp 0x59d71c
// 0059d704  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0059d70a  3bc2                 cmp eax, edx
// 0059d70c  7f05                 jg 0x59d713
// 0059d70e  83fa40               cmp edx, 0x40
// 0059d711  7c02                 jl 0x59d715
// 0059d713  b101                 mov cl, 1
// 0059d715  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 0059d71c  7402                 je 0x59d720
// 0059d71e  b101                 mov cl, 1
// 0059d720  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0059d726  3bc5                 cmp eax, ebp
// 0059d728  740b                 je 0x59d735
// 0059d72a  48                   dec eax
// 0059d72b  398678010000         cmp dword ptr [esi + 0x178], eax
// 0059d731  7402                 je 0x59d735
// 0059d733  b101                 mov cl, 1
// 0059d735  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 0059d73c  7f04                 jg 0x59d742
// 0059d73e  84c9                 test cl, cl
// 0059d740  743f                 je 0x59d781
// 0059d742  8b06                 mov eax, dword ptr [esi]
// 0059d744  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 0059d74b  8b0e                 mov ecx, dword ptr [esi]
// 0059d74d  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 0059d753  895118               mov dword ptr [ecx + 0x18], edx
// 0059d756  8b06                 mov eax, dword ptr [esi]
// 0059d758  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 0059d75e  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059d761  8b16                 mov edx, dword ptr [esi]
// 0059d763  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0059d769  894220               mov dword ptr [edx + 0x20], eax
// 0059d76c  8b0e                 mov ecx, dword ptr [esi]
// 0059d76e  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 0059d774  895124               mov dword ptr [ecx + 0x24], edx
// 0059d777  8b06                 mov eax, dword ptr [esi]
// 0059d779  8b08                 mov ecx, dword ptr [eax]
// 0059d77b  56                   push esi
// 0059d77c  ffd1                 call ecx
// 0059d77e  83c404               add esp, 4
// 0059d781  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 0059d787  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059d78b  0f8ecf000000         jle 0x59d860
// 0059d791  8d9628010000         lea edx, [esi + 0x128]
// 0059d797  89542414             mov dword ptr [esp + 0x14], edx
// 0059d79b  eb03                 jmp 0x59d7a0
// 0059d79d  8d4900               lea ecx, [ecx]
// 0059d7a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059d7a4  8b08                 mov ecx, dword ptr [eax]
// 0059d7a6  8b5904               mov ebx, dword ptr [ecx + 4]
// 0059d7a9  8beb                 mov ebp, ebx
// 0059d7ab  c1e508               shl ebp, 8
// 0059d7ae  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 0059d7b4  807c242000           cmp byte ptr [esp + 0x20], 0
// 0059d7b9  752a                 jne 0x59d7e5
// 0059d7bb  837d0000             cmp dword ptr [ebp], 0
// 0059d7bf  7d24                 jge 0x59d7e5
// 0059d7c1  8b16                 mov edx, dword ptr [esi]
// 0059d7c3  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 0059d7ca  8b06                 mov eax, dword ptr [esi]
// 0059d7cc  895818               mov dword ptr [eax + 0x18], ebx
// 0059d7cf  8b0e                 mov ecx, dword ptr [esi]
// 0059d7d1  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 0059d7d8  8b16                 mov edx, dword ptr [esi]
// 0059d7da  8b4204               mov eax, dword ptr [edx + 4]
// 0059d7dd  6aff                 push -1
// 0059d7df  56                   push esi
// 0059d7e0  ffd0                 call eax
// 0059d7e2  83c408               add esp, 8
// 0059d7e5  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 0059d7eb  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0059d7f1  7f49                 jg 0x59d83c
// 0059d7f3  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 0059d7f7  33c9                 xor ecx, ecx
// 0059d7f9  85c0                 test eax, eax
// 0059d7fb  0f9cc1               setl cl
// 0059d7fe  49                   dec ecx
// 0059d7ff  23c1                 and eax, ecx
// 0059d801  398674010000         cmp dword ptr [esi + 0x174], eax
// 0059d807  7420                 je 0x59d829
// 0059d809  8b16                 mov edx, dword ptr [esi]
// 0059d80b  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 0059d812  8b06                 mov eax, dword ptr [esi]
// 0059d814  895818               mov dword ptr [eax + 0x18], ebx
// 0059d817  8b0e                 mov ecx, dword ptr [esi]
// 0059d819  89791c               mov dword ptr [ecx + 0x1c], edi
// 0059d81c  8b16                 mov edx, dword ptr [esi]
// 0059d81e  8b4204               mov eax, dword ptr [edx + 4]
// 0059d821  6aff                 push -1
// 0059d823  56                   push esi
// 0059d824  ffd0                 call eax
// 0059d826  83c408               add esp, 8
// 0059d829  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0059d82f  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 0059d833  47                   inc edi
// 0059d834  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0059d83a  7eb7                 jle 0x59d7f3
// 0059d83c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059d840  8344241404           add dword ptr [esp + 0x14], 4
// 0059d845  40                   inc eax
// 0059d846  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0059d84c  89442410             mov dword ptr [esp + 0x10], eax
// 0059d850  0f8c4affffff         jl 0x59d7a0
// 0059d856  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0059d85a  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 0059d85e  33ed                 xor ebp, ebp
// 0059d860  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 0059d866  7516                 jne 0x59d87e
// 0059d868  84db                 test bl, bl
// 0059d86a  7409                 je 0x59d875
// 0059d86c  c7470490cd5900       mov dword ptr [edi + 4], 0x59cd90
// 0059d873  eb1d                 jmp 0x59d892
// 0059d875  c74704d0cf5900       mov dword ptr [edi + 4], 0x59cfd0
// 0059d87c  eb14                 jmp 0x59d892
// 0059d87e  84db                 test bl, bl
// 0059d880  7409                 je 0x59d88b
// 0059d882  c7470410d25900       mov dword ptr [edi + 4], 0x59d210
// 0059d889  eb07                 jmp 0x59d892
// 0059d88b  c74704f0d25900       mov dword ptr [edi + 4], 0x59d2f0
// 0059d892  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 0059d898  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059d89c  7e6d                 jle 0x59d90b
// 0059d89e  8d6f18               lea ebp, [edi + 0x18]
// 0059d8a1  8d9e28010000         lea ebx, [esi + 0x128]
// 0059d8a7  807c242000           cmp byte ptr [esp + 0x20], 0
// 0059d8ac  8b03                 mov eax, dword ptr [ebx]
// 0059d8ae  741c                 je 0x59d8cc
// 0059d8b0  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0059d8b7  7532                 jne 0x59d8eb
// 0059d8b9  8b4014               mov eax, dword ptr [eax + 0x14]
// 0059d8bc  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 0059d8c0  52                   push edx
// 0059d8c1  50                   push eax
// 0059d8c2  6a01                 push 1
// 0059d8c4  56                   push esi
// 0059d8c5  e846e9ffff           call 0x59c210
// 0059d8ca  eb1c                 jmp 0x59d8e8
// 0059d8cc  8b4018               mov eax, dword ptr [eax + 0x18]
// 0059d8cf  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 0059d8d3  57                   push edi
// 0059d8d4  50                   push eax
// 0059d8d5  6a00                 push 0
// 0059d8d7  56                   push esi
// 0059d8d8  e833e9ffff           call 0x59c210
// 0059d8dd  8b07                 mov eax, dword ptr [edi]
// 0059d8df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059d8e3  89413c               mov dword ptr [ecx + 0x3c], eax
// 0059d8e6  8bf9                 mov edi, ecx
// 0059d8e8  83c410               add esp, 0x10
// 0059d8eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059d8ef  c7450000000000       mov dword ptr [ebp], 0
// 0059d8f6  40                   inc eax
// 0059d8f7  83c304               add ebx, 4
// 0059d8fa  83c504               add ebp, 4
// 0059d8fd  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0059d903  89442410             mov dword ptr [esp + 0x10], eax
// 0059d907  7c9e                 jl 0x59d8a7
// 0059d909  33ed                 xor ebp, ebp
// 0059d90b  896f10               mov dword ptr [edi + 0x10], ebp
// 0059d90e  896f0c               mov dword ptr [edi + 0xc], ebp
// 0059d911  896f14               mov dword ptr [edi + 0x14], ebp
// 0059d914  c6470800             mov byte ptr [edi + 8], 0
// 0059d918  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0059d91e  895728               mov dword ptr [edi + 0x28], edx
// 0059d921  5f                   pop edi
// 0059d922  5e                   pop esi
// 0059d923  5d                   pop ebp
// 0059d924  5b                   pop ebx
// 0059d925  83c40c               add esp, 0xc
// 0059d928  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
