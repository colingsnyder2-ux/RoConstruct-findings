// roc 2007-03 006cc610  unit: seg_006c0000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc610
//
// 006cc610  83ec2c               sub esp, 0x2c
// 006cc613  53                   push ebx
// 006cc614  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006cc618  55                   push ebp
// 006cc619  57                   push edi
// 006cc61a  53                   push ebx
// 006cc61b  8be9                 mov ebp, ecx
// 006cc61d  e83ed0ffff           call 0x6c9660
// 006cc622  8bcd                 mov ecx, ebp
// 006cc624  33ff                 xor edi, edi
// 006cc626  e8c5f0f9ff           call 0x66b6f0
// 006cc62b  85c0                 test eax, eax
// 006cc62d  8944243c             mov dword ptr [esp + 0x3c], eax
// 006cc631  0f8455010000         je 0x6cc78c
// 006cc637  56                   push esi
// 006cc638  8d442440             lea eax, [esp + 0x40]
// 006cc63c  50                   push eax
// 006cc63d  8bcd                 mov ecx, ebp
// 006cc63f  e8dc8b0400           call 0x715220
// 006cc644  8bf0                 mov esi, eax
// 006cc646  8b16                 mov edx, dword ptr [esi]
// 006cc648  8b4214               mov eax, dword ptr [edx + 0x14]
// 006cc64b  8bce                 mov ecx, esi
// 006cc64d  ffd0                 call eax
// 006cc64f  85c0                 test eax, eax
// 006cc651  0f85ec000000         jne 0x6cc743
// 006cc657  8b16                 mov edx, dword ptr [esi]
// 006cc659  8b5210               mov edx, dword ptr [edx + 0x10]
// 006cc65c  8d442414             lea eax, [esp + 0x14]
// 006cc660  83c701               add edi, 1
// 006cc663  50                   push eax
// 006cc664  8bce                 mov ecx, esi
// 006cc666  897c2414             mov dword ptr [esp + 0x14], edi
// 006cc66a  ffd2                 call edx
// 006cc66c  83ff01               cmp edi, 1
// 006cc66f  7516                 jne 0x6cc687
// 006cc671  b90a000000           mov ecx, 0xa
// 006cc676  8d742414             lea esi, [esp + 0x14]
// 006cc67a  8bfb                 mov edi, ebx
// 006cc67c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006cc67e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006cc682  e9bc000000           jmp 0x6cc743
// 006cc687  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 006cc68a  85c9                 test ecx, ecx
// 006cc68c  8d4318               lea eax, [ebx + 0x18]
// 006cc68f  7543                 jne 0x6cc6d4
// 006cc691  8d431c               lea eax, [ebx + 0x1c]
// 006cc694  8d4c2430             lea ecx, [esp + 0x30]
// 006cc698  8b09                 mov ecx, dword ptr [ecx]
// 006cc69a  0108                 add dword ptr [eax], ecx
// 006cc69c  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 006cc69f  85c9                 test ecx, ecx
// 006cc6a1  8d4320               lea eax, [ebx + 0x20]
// 006cc6a4  7534                 jne 0x6cc6da
// 006cc6a6  8d4324               lea eax, [ebx + 0x24]
// 006cc6a9  8d4c2438             lea ecx, [esp + 0x38]
// 006cc6ad  8b11                 mov edx, dword ptr [ecx]
// 006cc6af  0110                 add dword ptr [eax], edx
// 006cc6b1  8b4570               mov eax, dword ptr [ebp + 0x70]
// 006cc6b4  85c0                 test eax, eax
// 006cc6b6  8d5318               lea edx, [ebx + 0x18]
// 006cc6b9  7425                 je 0x6cc6e0
// 006cc6bb  8d531c               lea edx, [ebx + 0x1c]
// 006cc6be  8d4c2430             lea ecx, [esp + 0x30]
// 006cc6c2  8b12                 mov edx, dword ptr [edx]
// 006cc6c4  3b11                 cmp edx, dword ptr [ecx]
// 006cc6c6  7e1e                 jle 0x6cc6e6
// 006cc6c8  85c0                 test eax, eax
// 006cc6ca  8d4b18               lea ecx, [ebx + 0x18]
// 006cc6cd  7423                 je 0x6cc6f2
// 006cc6cf  8d4b1c               lea ecx, [ebx + 0x1c]
// 006cc6d2  eb1e                 jmp 0x6cc6f2
// 006cc6d4  8d4c242c             lea ecx, [esp + 0x2c]
// 006cc6d8  ebbe                 jmp 0x6cc698
// 006cc6da  8d4c2434             lea ecx, [esp + 0x34]
// 006cc6de  ebcd                 jmp 0x6cc6ad
// 006cc6e0  8d4c242c             lea ecx, [esp + 0x2c]
// 006cc6e4  ebdc                 jmp 0x6cc6c2
// 006cc6e6  85c0                 test eax, eax
// 006cc6e8  8d4c242c             lea ecx, [esp + 0x2c]
// 006cc6ec  7404                 je 0x6cc6f2
// 006cc6ee  8d4c2430             lea ecx, [esp + 0x30]
// 006cc6f2  8b09                 mov ecx, dword ptr [ecx]
// 006cc6f4  85c0                 test eax, eax
// 006cc6f6  8d4318               lea eax, [ebx + 0x18]
// 006cc6f9  7403                 je 0x6cc6fe
// 006cc6fb  8d431c               lea eax, [ebx + 0x1c]
// 006cc6fe  8908                 mov dword ptr [eax], ecx
// 006cc700  8b4570               mov eax, dword ptr [ebp + 0x70]
// 006cc703  85c0                 test eax, eax
// 006cc705  8d5320               lea edx, [ebx + 0x20]
// 006cc708  7419                 je 0x6cc723
// 006cc70a  8d5324               lea edx, [ebx + 0x24]
// 006cc70d  8d4c2438             lea ecx, [esp + 0x38]
// 006cc711  8b12                 mov edx, dword ptr [edx]
// 006cc713  3b11                 cmp edx, dword ptr [ecx]
// 006cc715  7d12                 jge 0x6cc729
// 006cc717  85c0                 test eax, eax
// 006cc719  8d4b20               lea ecx, [ebx + 0x20]
// 006cc71c  7417                 je 0x6cc735
// 006cc71e  8d4b24               lea ecx, [ebx + 0x24]
// 006cc721  eb12                 jmp 0x6cc735
// 006cc723  8d4c2434             lea ecx, [esp + 0x34]
// 006cc727  ebe8                 jmp 0x6cc711
// 006cc729  85c0                 test eax, eax
// 006cc72b  8d4c2434             lea ecx, [esp + 0x34]
// 006cc72f  7404                 je 0x6cc735
// 006cc731  8d4c2438             lea ecx, [esp + 0x38]
// 006cc735  8b09                 mov ecx, dword ptr [ecx]
// 006cc737  85c0                 test eax, eax
// 006cc739  8d4320               lea eax, [ebx + 0x20]
// 006cc73c  7403                 je 0x6cc741
// 006cc73e  8d4324               lea eax, [ebx + 0x24]
// 006cc741  8908                 mov dword ptr [eax], ecx
// 006cc743  837c244000           cmp dword ptr [esp + 0x40], 0
// 006cc748  0f85eafeffff         jne 0x6cc638
// 006cc74e  85ff                 test edi, edi
// 006cc750  7e39                 jle 0x6cc78b
// 006cc752  837d7000             cmp dword ptr [ebp + 0x70], 0
// 006cc756  8d7318               lea esi, [ebx + 0x18]
// 006cc759  7503                 jne 0x6cc75e
// 006cc75b  8d731c               lea esi, [ebx + 0x1c]
// 006cc75e  8bcd                 mov ecx, ebp
// 006cc760  83c7ff               add edi, -1
// 006cc763  e8c8cdffff           call 0x6c9530
// 006cc768  8b4028               mov eax, dword ptr [eax + 0x28]
// 006cc76b  0fafc7               imul eax, edi
// 006cc76e  0106                 add dword ptr [esi], eax
// 006cc770  837d7000             cmp dword ptr [ebp + 0x70], 0
// 006cc774  8d7320               lea esi, [ebx + 0x20]
// 006cc777  7503                 jne 0x6cc77c
// 006cc779  8d7324               lea esi, [ebx + 0x24]
// 006cc77c  8bcd                 mov ecx, ebp
// 006cc77e  e8adcdffff           call 0x6c9530
// 006cc783  8b4828               mov ecx, dword ptr [eax + 0x28]
// 006cc786  0fafcf               imul ecx, edi
// 006cc789  010e                 add dword ptr [esi], ecx
// 006cc78b  5e                   pop esi
// 006cc78c  5f                   pop edi
// 006cc78d  5d                   pop ebp
// 006cc78e  5b                   pop ebx
// 006cc78f  83c42c               add esp, 0x2c
// 006cc792  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneSplitterContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
