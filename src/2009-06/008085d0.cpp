// roc 2009-06 008085d0  unit: CXTShadowWnd  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008085d0
//
// 008085d0  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 008085d4  53                   push ebx
// 008085d5  55                   push ebp
// 008085d6  56                   push esi
// 008085d7  57                   push edi
// 008085d8  0f859d000000         jne 0x80867b
// 008085de  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008085e2  bd03000000           mov ebp, 3
// 008085e7  896c2414             mov dword ptr [esp + 0x14], ebp
// 008085eb  eb03                 jmp 0x8085f0
// 008085ed  8d4900               lea ecx, [ecx]
// 008085f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 008085f4  33ff                 xor edi, edi
// 008085f6  8b4304               mov eax, dword ptr [ebx + 4]
// 008085f9  57                   push edi
// 008085fa  55                   push ebp
// 008085fb  50                   push eax
// 008085fc  ff15d8e08900         call dword ptr [0x89e0d8]
// 00808602  8bc8                 mov ecx, eax
// 00808604  e8a7fdffff           call 0x8083b0
// 00808609  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0080860c  50                   push eax
// 0080860d  57                   push edi
// 0080860e  55                   push ebp
// 0080860f  51                   push ecx
// 00808610  ff15d4e08900         call dword ptr [0x89e0d4]
// 00808616  03742414             add esi, dword ptr [esp + 0x14]
// 0080861a  47                   inc edi
// 0080861b  83ff04               cmp edi, 4
// 0080861e  7cd6                 jl 0x8085f6
// 00808620  8344241403           add dword ptr [esp + 0x14], 3
// 00808625  4d                   dec ebp
// 00808626  83fdff               cmp ebp, -1
// 00808629  7fc5                 jg 0x8085f0
// 0080862b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080862f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00808632  33ed                 xor ebp, ebp
// 00808634  8d753c               lea esi, [ebp + 0x3c]
// 00808637  bf04000000           mov edi, 4
// 0080863c  3bc7                 cmp eax, edi
// 0080863e  7e2c                 jle 0x80866c
// 00808640  8b4304               mov eax, dword ptr [ebx + 4]
// 00808643  57                   push edi
// 00808644  55                   push ebp
// 00808645  50                   push eax
// 00808646  ff15d8e08900         call dword ptr [0x89e0d8]
// 0080864c  8bc8                 mov ecx, eax
// 0080864e  e85dfdffff           call 0x8083b0
// 00808653  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00808656  50                   push eax
// 00808657  57                   push edi
// 00808658  55                   push ebp
// 00808659  51                   push ecx
// 0080865a  ff15d4e08900         call dword ptr [0x89e0d4]
// 00808660  8b542418             mov edx, dword ptr [esp + 0x18]
// 00808664  8b420c               mov eax, dword ptr [edx + 0xc]
// 00808667  47                   inc edi
// 00808668  3bf8                 cmp edi, eax
// 0080866a  7cd4                 jl 0x808640
// 0080866c  83ee0f               sub esi, 0xf
// 0080866f  45                   inc ebp
// 00808670  85f6                 test esi, esi
// 00808672  7fc3                 jg 0x808637
// 00808674  5f                   pop edi
// 00808675  5e                   pop esi
// 00808676  5d                   pop ebp
// 00808677  5b                   pop ebx
// 00808678  c20800               ret 8
// 0080867b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0080867f  33ed                 xor ebp, ebp
// 00808681  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00808689  8da42400000000       lea esp, [esp]
// 00808690  8b742414             mov esi, dword ptr [esp + 0x14]
// 00808694  bb03000000           mov ebx, 3
// 00808699  8da42400000000       lea esp, [esp]
// 008086a0  8b4704               mov eax, dword ptr [edi + 4]
// 008086a3  53                   push ebx
// 008086a4  55                   push ebp
// 008086a5  50                   push eax
// 008086a6  ff15d8e08900         call dword ptr [0x89e0d8]
// 008086ac  8bc8                 mov ecx, eax
// 008086ae  e8fdfcffff           call 0x8083b0
// 008086b3  8b4f04               mov ecx, dword ptr [edi + 4]
// 008086b6  50                   push eax
// 008086b7  53                   push ebx
// 008086b8  55                   push ebp
// 008086b9  51                   push ecx
// 008086ba  ff15d4e08900         call dword ptr [0x89e0d4]
// 008086c0  03742414             add esi, dword ptr [esp + 0x14]
// 008086c4  4b                   dec ebx
// 008086c5  83fbff               cmp ebx, -1
// 008086c8  7fd6                 jg 0x8086a0
// 008086ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 008086ce  83c003               add eax, 3
// 008086d1  45                   inc ebp
// 008086d2  83f80f               cmp eax, 0xf
// 008086d5  89442414             mov dword ptr [esp + 0x14], eax
// 008086d9  7cb5                 jl 0x808690
// 008086db  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008086df  8b4508               mov eax, dword ptr [ebp + 8]
// 008086e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008086ea  83c0fc               add eax, -4
// 008086ed  be3c000000           mov esi, 0x3c
// 008086f2  bb04000000           mov ebx, 4
// 008086f7  3bc3                 cmp eax, ebx
// 008086f9  7e38                 jle 0x808733
// 008086fb  eb03                 jmp 0x808700
// 008086fd  8d4900               lea ecx, [ecx]
// 00808700  8b542414             mov edx, dword ptr [esp + 0x14]
// 00808704  8b4704               mov eax, dword ptr [edi + 4]
// 00808707  52                   push edx
// 00808708  53                   push ebx
// 00808709  50                   push eax
// 0080870a  ff15d8e08900         call dword ptr [0x89e0d8]
// 00808710  8bc8                 mov ecx, eax
// 00808712  e899fcffff           call 0x8083b0
// 00808717  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080871b  8b5704               mov edx, dword ptr [edi + 4]
// 0080871e  50                   push eax
// 0080871f  51                   push ecx
// 00808720  53                   push ebx
// 00808721  52                   push edx
// 00808722  ff15d4e08900         call dword ptr [0x89e0d4]
// 00808728  8b4508               mov eax, dword ptr [ebp + 8]
// 0080872b  43                   inc ebx
// 0080872c  83c0fc               add eax, -4
// 0080872f  3bd8                 cmp ebx, eax
// 00808731  7ccd                 jl 0x808700
// 00808733  ff442414             inc dword ptr [esp + 0x14]
// 00808737  83ee0f               sub esi, 0xf
// 0080873a  85f6                 test esi, esi
// 0080873c  7fb4                 jg 0x8086f2
// 0080873e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00808746  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0080874e  8bff                 mov edi, edi
// 00808750  8b742414             mov esi, dword ptr [esp + 0x14]
// 00808754  bb03000000           mov ebx, 3
// 00808759  8da42400000000       lea esp, [esp]
// 00808760  8b4508               mov eax, dword ptr [ebp + 8]
// 00808763  2b442418             sub eax, dword ptr [esp + 0x18]
// 00808767  53                   push ebx
// 00808768  48                   dec eax
// 00808769  50                   push eax
// 0080876a  8b4704               mov eax, dword ptr [edi + 4]
// 0080876d  50                   push eax
// 0080876e  ff15d8e08900         call dword ptr [0x89e0d8]
// 00808774  8bc8                 mov ecx, eax
// 00808776  e835fcffff           call 0x8083b0
// 0080877b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0080877e  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00808782  8b5704               mov edx, dword ptr [edi + 4]
// 00808785  50                   push eax
// 00808786  53                   push ebx
// 00808787  49                   dec ecx
// 00808788  51                   push ecx
// 00808789  52                   push edx
// 0080878a  ff15d4e08900         call dword ptr [0x89e0d4]
// 00808790  03742414             add esi, dword ptr [esp + 0x14]
// 00808794  4b                   dec ebx
// 00808795  83fbff               cmp ebx, -1
// 00808798  7fc6                 jg 0x808760
// 0080879a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080879e  ff442418             inc dword ptr [esp + 0x18]
// 008087a2  83c003               add eax, 3
// 008087a5  83f80f               cmp eax, 0xf
// 008087a8  89442414             mov dword ptr [esp + 0x14], eax
// 008087ac  7ca2                 jl 0x808750
// 008087ae  5f                   pop edi
// 008087af  5e                   pop esi
// 008087b0  5d                   pop ebp
// 008087b1  5b                   pop ebx
// 008087b2  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
