// roc 2009-12 008ea7b0  unit: CXTPRibbonTab  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea7b0
//
// 008ea7b0  6aff                 push -1
// 008ea7b2  68b8659600           push 0x9665b8
// 008ea7b7  64a100000000         mov eax, dword ptr fs:[0]
// 008ea7bd  50                   push eax
// 008ea7be  51                   push ecx
// 008ea7bf  53                   push ebx
// 008ea7c0  56                   push esi
// 008ea7c1  57                   push edi
// 008ea7c2  a10052b600           mov eax, dword ptr [0xb65200]
// 008ea7c7  33c4                 xor eax, esp
// 008ea7c9  50                   push eax
// 008ea7ca  8d442414             lea eax, [esp + 0x14]
// 008ea7ce  64a300000000         mov dword ptr fs:[0], eax
// 008ea7d4  8bf1                 mov esi, ecx
// 008ea7d6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ea7da  8b4728               mov eax, dword ptr [edi + 0x28]
// 008ea7dd  85c0                 test eax, eax
// 008ea7df  742d                 je 0x8ea80e
// 008ea7e1  8b5f24               mov ebx, dword ptr [edi + 0x24]
// 008ea7e4  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008ea7ea  50                   push eax
// 008ea7eb  e890a1faff           call 0x894980
// 008ea7f0  50                   push eax
// 008ea7f1  e84894f0ff           call 0x7f3c3e
// 008ea7f6  8d8b84010000         lea ecx, [ebx + 0x184]
// 008ea7fc  83c408               add esp, 8
// 008ea7ff  898688000000         mov dword ptr [esi + 0x88], eax
// 008ea805  894e60               mov dword ptr [esi + 0x60], ecx
// 008ea808  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008ea80e  6856fd9900           push 0x99fd56
// 008ea813  8d4654               lea eax, [esi + 0x54]
// 008ea816  50                   push eax
// 008ea817  68b04a9f00           push 0x9f4ab0
// 008ea81c  57                   push edi
// 008ea81d  e89e62f6ff           call 0x850ac0
// 008ea822  6856fd9900           push 0x99fd56
// 008ea827  8d4e58               lea ecx, [esi + 0x58]
// 008ea82a  51                   push ecx
// 008ea82b  680cd1a000           push 0xa0d10c
// 008ea830  57                   push edi
// 008ea831  e88a62f6ff           call 0x850ac0
// 008ea836  6a00                 push 0
// 008ea838  8d9694000000         lea edx, [esi + 0x94]
// 008ea83e  52                   push edx
// 008ea83f  68fcd0a000           push 0xa0d0fc
// 008ea844  57                   push edi
// 008ea845  e8b661f6ff           call 0x850a00
// 008ea84a  6856fd9900           push 0x99fd56
// 008ea84f  8d8698000000         lea eax, [esi + 0x98]
// 008ea855  50                   push eax
// 008ea856  68ecd0a000           push 0xa0d0ec
// 008ea85b  57                   push edi
// 008ea85c  e85f62f6ff           call 0x850ac0
// 008ea861  83c440               add esp, 0x40
// 008ea864  6a00                 push 0
// 008ea866  8d8e90000000         lea ecx, [esi + 0x90]
// 008ea86c  51                   push ecx
// 008ea86d  68a4329f00           push 0x9f32a4
// 008ea872  57                   push edi
// 008ea873  e88861f6ff           call 0x850a00
// 008ea878  6a01                 push 1
// 008ea87a  8d5634               lea edx, [esi + 0x34]
// 008ea87d  52                   push edx
// 008ea87e  68b0589b00           push 0x9b58b0
// 008ea883  57                   push edi
// 008ea884  e8d761f6ff           call 0x850a60
// 008ea889  83c420               add esp, 0x20
// 008ea88c  837f2800             cmp dword ptr [edi + 0x28], 0
// 008ea890  6a00                 push 0
// 008ea892  7524                 jne 0x8ea8b8
// 008ea894  8b4660               mov eax, dword ptr [esi + 0x60]
// 008ea897  33c9                 xor ecx, ecx
// 008ea899  397004               cmp dword ptr [eax + 4], esi
// 008ea89c  8d542414             lea edx, [esp + 0x14]
// 008ea8a0  0f94c1               sete cl
// 008ea8a3  52                   push edx
// 008ea8a4  68281b9d00           push 0x9d1b28
// 008ea8a9  57                   push edi
// 008ea8aa  894c2420             mov dword ptr [esp + 0x20], ecx
// 008ea8ae  e8ad61f6ff           call 0x850a60
// 008ea8b3  83c410               add esp, 0x10
// 008ea8b6  eb29                 jmp 0x8ea8e1
// 008ea8b8  8d442428             lea eax, [esp + 0x28]
// 008ea8bc  50                   push eax
// 008ea8bd  68281b9d00           push 0x9d1b28
// 008ea8c2  57                   push edi
// 008ea8c3  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008ea8cb  e89061f6ff           call 0x850a60
// 008ea8d0  83c410               add esp, 0x10
// 008ea8d3  837c242400           cmp dword ptr [esp + 0x24], 0
// 008ea8d8  7407                 je 0x8ea8e1
// 008ea8da  8bce                 mov ecx, esi
// 008ea8dc  e82f37feff           call 0x8ce010
// 008ea8e1  8b17                 mov edx, dword ptr [edi]
// 008ea8e3  8b4270               mov eax, dword ptr [edx + 0x70]
// 008ea8e6  68e4d0a000           push 0xa0d0e4
// 008ea8eb  8bcf                 mov ecx, edi
// 008ea8ed  ffd0                 call eax
// 008ea8ef  8bf8                 mov edi, eax
// 008ea8f1  897c2410             mov dword ptr [esp + 0x10], edi
// 008ea8f5  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008ea8fb  8b11                 mov edx, dword ptr [ecx]
// 008ea8fd  8b4258               mov eax, dword ptr [edx + 0x58]
// 008ea900  57                   push edi
// 008ea901  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008ea909  ffd0                 call eax
// 008ea90b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008ea913  85ff                 test edi, edi
// 008ea915  7407                 je 0x8ea91e
// 008ea917  8bcf                 mov ecx, edi
// 008ea919  e8be94f0ff           call 0x7f3ddc
// 008ea91e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ea922  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea929  59                   pop ecx
// 008ea92a  5f                   pop edi
// 008ea92b  5e                   pop esi
// 008ea92c  5b                   pop ebx
// 008ea92d  83c410               add esp, 0x10
// 008ea930  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonTab@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp