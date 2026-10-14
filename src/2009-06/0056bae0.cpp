// roc 2009-06 0056bae0  unit: G3D::Shader  size: 391 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bae0
//
// 0056bae0  6aff                 push -1
// 0056bae2  68b9fc8500           push 0x85fcb9
// 0056bae7  64a100000000         mov eax, dword ptr fs:[0]
// 0056baed  50                   push eax
// 0056baee  64892500000000       mov dword ptr fs:[0], esp
// 0056baf5  83ec08               sub esp, 8
// 0056baf8  53                   push ebx
// 0056baf9  55                   push ebp
// 0056bafa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0056bafe  56                   push esi
// 0056baff  8bf1                 mov esi, ecx
// 0056bb01  8b4604               mov eax, dword ptr [esi + 4]
// 0056bb04  3be8                 cmp ebp, eax
// 0056bb06  57                   push edi
// 0056bb07  89742414             mov dword ptr [esp + 0x14], esi
// 0056bb0b  89442410             mov dword ptr [esp + 0x10], eax
// 0056bb0f  896e04               mov dword ptr [esi + 4], ebp
// 0056bb12  7d27                 jge 0x56bb3b
// 0056bb14  8d3ced00000000       lea edi, [ebp*8]
// 0056bb1b  2bfd                 sub edi, ebp
// 0056bb1d  03ff                 add edi, edi
// 0056bb1f  8bd8                 mov ebx, eax
// 0056bb21  03ff                 add edi, edi
// 0056bb23  2bdd                 sub ebx, ebp
// 0056bb25  8b0e                 mov ecx, dword ptr [esi]
// 0056bb27  03cf                 add ecx, edi
// 0056bb29  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056bb2f  83c71c               add edi, 0x1c
// 0056bb32  83eb01               sub ebx, 1
// 0056bb35  75ee                 jne 0x56bb25
// 0056bb37  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056bb3b  f6053029a40001       test byte ptr [0xa42930], 1
// 0056bb42  7514                 jne 0x56bb58
// 0056bb44  830d3029a40001       or dword ptr [0xa42930], 1
// 0056bb4b  bb0a000000           mov ebx, 0xa
// 0056bb50  891d2c29a400         mov dword ptr [0xa4292c], ebx
// 0056bb56  eb06                 jmp 0x56bb5e
// 0056bb58  8b1d2c29a400         mov ebx, dword ptr [0xa4292c]
// 0056bb5e  8b7e04               mov edi, dword ptr [esi + 4]
// 0056bb61  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056bb64  3bf9                 cmp edi, ecx
// 0056bb66  7e77                 jle 0x56bbdf
// 0056bb68  85c9                 test ecx, ecx
// 0056bb6a  7509                 jne 0x56bb75
// 0056bb6c  896e08               mov dword ptr [esi + 8], ebp
// 0056bb6f  50                   push eax
// 0056bb70  e992000000           jmp 0x56bc07
// 0056bb75  3bfb                 cmp edi, ebx
// 0056bb77  7d09                 jge 0x56bb82
// 0056bb79  895e08               mov dword ptr [esi + 8], ebx
// 0056bb7c  50                   push eax
// 0056bb7d  e985000000           jmp 0x56bc07
// 0056bb82  d90548e88b00         fld dword ptr [0x8be848]
// 0056bb88  8d04cd00000000       lea eax, [ecx*8]
// 0056bb8f  2bc1                 sub eax, ecx
// 0056bb91  03c0                 add eax, eax
// 0056bb93  03c0                 add eax, eax
// 0056bb95  3d801a0600           cmp eax, 0x61a80
// 0056bb9a  760a                 jbe 0x56bba6
// 0056bb9c  ddd8                 fstp st(0)
// 0056bb9e  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0056bba4  eb0f                 jmp 0x56bbb5
// 0056bba6  3d00fa0000           cmp eax, 0xfa00
// 0056bbab  7608                 jbe 0x56bbb5
// 0056bbad  ddd8                 fstp st(0)
// 0056bbaf  d90544d08b00         fld dword ptr [0x8bd044]
// 0056bbb5  8be9                 mov ebp, ecx
// 0056bbb7  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0056bbbb  da4c242c             fimul dword ptr [esp + 0x2c]
// 0056bbbf  e8fce21a00           call 0x719ec0
// 0056bbc4  2bc5                 sub eax, ebp
// 0056bbc6  03c7                 add eax, edi
// 0056bbc8  894608               mov dword ptr [esi + 8], eax
// 0056bbcb  8b0d2c29a400         mov ecx, dword ptr [0xa4292c]
// 0056bbd1  3bc1                 cmp eax, ecx
// 0056bbd3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056bbd7  7d03                 jge 0x56bbdc
// 0056bbd9  894e08               mov dword ptr [esi + 8], ecx
// 0056bbdc  50                   push eax
// 0056bbdd  eb28                 jmp 0x56bc07
// 0056bbdf  b856555555           mov eax, 0x55555556
// 0056bbe4  f7e9                 imul ecx
// 0056bbe6  8bc2                 mov eax, edx
// 0056bbe8  c1e81f               shr eax, 0x1f
// 0056bbeb  03c2                 add eax, edx
// 0056bbed  3bf8                 cmp edi, eax
// 0056bbef  7f1d                 jg 0x56bc0e
// 0056bbf1  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 0056bbf6  7416                 je 0x56bc0e
// 0056bbf8  3bfb                 cmp edi, ebx
// 0056bbfa  7e12                 jle 0x56bc0e
// 0056bbfc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056bc00  3bf8                 cmp edi, eax
// 0056bc02  7c02                 jl 0x56bc06
// 0056bc04  8bf8                 mov edi, eax
// 0056bc06  57                   push edi
// 0056bc07  8bce                 mov ecx, esi
// 0056bc09  e872faffff           call 0x56b680
// 0056bc0e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056bc12  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056bc15  897c242c             mov dword ptr [esp + 0x2c], edi
// 0056bc19  7d37                 jge 0x56bc52
// 0056bc1b  83cbff               or ebx, 0xffffffff
// 0056bc1e  8bff                 mov edi, edi
// 0056bc20  8b16                 mov edx, dword ptr [esi]
// 0056bc22  8d0cfd00000000       lea ecx, [edi*8]
// 0056bc29  2bcf                 sub ecx, edi
// 0056bc2b  8d0c8a               lea ecx, [edx + ecx*4]
// 0056bc2e  894c2428             mov dword ptr [esp + 0x28], ecx
// 0056bc32  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056bc3a  85c9                 test ecx, ecx
// 0056bc3c  7406                 je 0x56bc44
// 0056bc3e  ff15c0e48900         call dword ptr [0x89e4c0]
// 0056bc44  47                   inc edi
// 0056bc45  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056bc48  895c2420             mov dword ptr [esp + 0x20], ebx
// 0056bc4c  897c242c             mov dword ptr [esp + 0x2c], edi
// 0056bc50  7cce                 jl 0x56bc20
// 0056bc52  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056bc56  5f                   pop edi
// 0056bc57  5e                   pop esi
// 0056bc58  5d                   pop ebp
// 0056bc59  5b                   pop ebx
// 0056bc5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bc61  83c414               add esp, 0x14
// 0056bc64  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryOutput.cpp (function ?resize@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryOutput.cpp
