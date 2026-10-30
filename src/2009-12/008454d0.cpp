// roc 2009-12 008454d0  unit: CXTPControls  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008454d0
//
// 008454d0  57                   push edi
// 008454d1  8bf9                 mov edi, ecx
// 008454d3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008454d6  85c0                 test eax, eax
// 008454d8  7507                 jne 0x8454e1
// 008454da  83c8ff               or eax, 0xffffffff
// 008454dd  5f                   pop edi
// 008454de  c21400               ret 0x14
// 008454e1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008454e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008454e9  56                   push esi
// 008454ea  8d3411               lea esi, [ecx + edx]
// 008454ed  83faff               cmp edx, -1
// 008454f0  7507                 jne 0x8454f9
// 008454f2  3bca                 cmp ecx, edx
// 008454f4  7503                 jne 0x8454f9
// 008454f6  8d70ff               lea esi, [eax - 1]
// 008454f9  53                   push ebx
// 008454fa  55                   push ebp
// 008454fb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008454ff  f7dd                 neg ebp
// 00845501  1bed                 sbb ebp, ebp
// 00845503  83e5e0               and ebp, 0xffffffe0
// 00845506  83c520               add ebp, 0x20
// 00845509  83cd08               or ebp, 8
// 0084550c  33db                 xor ebx, ebx
// 0084550e  3bf1                 cmp esi, ecx
// 00845510  7516                 jne 0x845528
// 00845512  5d                   pop ebp
// 00845513  5b                   pop ebx
// 00845514  8bc6                 mov eax, esi
// 00845516  5e                   pop esi
// 00845517  5f                   pop edi
// 00845518  c21400               ret 0x14
// 0084551b  eb03                 jmp 0x845520
// 0084551d  8d4900               lea ecx, [ecx]
// 00845520  8b542418             mov edx, dword ptr [esp + 0x18]
// 00845524  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00845528  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0084552b  3bf0                 cmp esi, eax
// 0084552d  7c1d                 jl 0x84554c
// 0084552f  83f9ff               cmp ecx, -1
// 00845532  7509                 jne 0x84553d
// 00845534  83fa01               cmp edx, 1
// 00845537  0f84c6000000         je 0x845603
// 0084553d  85db                 test ebx, ebx
// 0084553f  0f85be000000         jne 0x845603
// 00845545  33f6                 xor esi, esi
// 00845547  8d5e01               lea ebx, [esi + 1]
// 0084554a  eb25                 jmp 0x845571
// 0084554c  85f6                 test esi, esi
// 0084554e  7d21                 jge 0x845571
// 00845550  83f9ff               cmp ecx, -1
// 00845553  7508                 jne 0x84555d
// 00845555  3bd1                 cmp edx, ecx
// 00845557  0f84a6000000         je 0x845603
// 0084555d  85db                 test ebx, ebx
// 0084555f  0f859e000000         jne 0x845603
// 00845565  8d70ff               lea esi, [eax - 1]
// 00845568  bb01000000           mov ebx, 1
// 0084556d  85f6                 test esi, esi
// 0084556f  7c1c                 jl 0x84558d
// 00845571  3bf0                 cmp esi, eax
// 00845573  7d18                 jge 0x84558d
// 00845575  85f6                 test esi, esi
// 00845577  0f8c90000000         jl 0x84560d
// 0084557d  3bf0                 cmp esi, eax
// 0084557f  0f8d88000000         jge 0x84560d
// 00845585  8b4728               mov eax, dword ptr [edi + 0x28]
// 00845588  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0084558b  eb02                 jmp 0x84558f
// 0084558d  33c9                 xor ecx, ecx
// 0084558f  8b11                 mov edx, dword ptr [ecx]
// 00845591  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00845597  55                   push ebp
// 00845598  ffd0                 call eax
// 0084559a  85c0                 test eax, eax
// 0084559c  744e                 je 0x8455ec
// 0084559e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008455a3  741c                 je 0x8455c1
// 008455a5  85f6                 test esi, esi
// 008455a7  7c0d                 jl 0x8455b6
// 008455a9  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008455ac  7d08                 jge 0x8455b6
// 008455ae  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008455b1  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 008455b4  eb02                 jmp 0x8455b8
// 008455b6  33c0                 xor eax, eax
// 008455b8  f680d400000002       test byte ptr [eax + 0xd4], 2
// 008455bf  752b                 jne 0x8455ec
// 008455c1  837c242000           cmp dword ptr [esp + 0x20], 0
// 008455c6  0f8446ffffff         je 0x845512
// 008455cc  85f6                 test esi, esi
// 008455ce  7c0d                 jl 0x8455dd
// 008455d0  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008455d3  7d08                 jge 0x8455dd
// 008455d5  8b5728               mov edx, dword ptr [edi + 0x28]
// 008455d8  8b04b2               mov eax, dword ptr [edx + esi*4]
// 008455db  eb02                 jmp 0x8455df
// 008455dd  33c0                 xor eax, eax
// 008455df  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 008455e6  0f8426ffffff         je 0x845512
// 008455ec  03742418             add esi, dword ptr [esp + 0x18]
// 008455f0  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008455f4  0f8526ffffff         jne 0x845520
// 008455fa  5d                   pop ebp
// 008455fb  5b                   pop ebx
// 008455fc  8bc6                 mov eax, esi
// 008455fe  5e                   pop esi
// 008455ff  5f                   pop edi
// 00845600  c21400               ret 0x14
// 00845603  5d                   pop ebp
// 00845604  5b                   pop ebx
// 00845605  5e                   pop esi
// 00845606  83c8ff               or eax, 0xffffffff
// 00845609  5f                   pop edi
// 0084560a  c21400               ret 0x14
// 0084560d  e8fae4faff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetNext@CXTPControls@@QBEJJHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp