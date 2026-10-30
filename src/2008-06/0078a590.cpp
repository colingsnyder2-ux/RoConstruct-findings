// from server: 100% by auto
// roc 2008-06 0078a590  unit: CXTColorWnd  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a590
//
// 0078a590  83ec10               sub esp, 0x10
// 0078a593  833dd4f1970001       cmp dword ptr [0x97f1d4], 1
// 0078a59a  53                   push ebx
// 0078a59b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0078a59f  56                   push esi
// 0078a5a0  8bf1                 mov esi, ecx
// 0078a5a2  0f85f3000000         jne 0x78a69b
// 0078a5a8  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 0078a5af  0f85e6000000         jne 0x78a69b
// 0078a5b5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a5b8  8d442408             lea eax, [esp + 8]
// 0078a5bc  50                   push eax
// 0078a5bd  51                   push ecx
// 0078a5be  ff15842d8000         call dword ptr [0x802d84]
// 0078a5c4  0fbe4308             movsx eax, byte ptr [ebx + 8]
// 0078a5c8  83c0f3               add eax, -0xd
// 0078a5cb  83f81b               cmp eax, 0x1b
// 0078a5ce  0f87c7000000         ja 0x78a69b
// 0078a5d4  0fb690c4a67800       movzx edx, byte ptr [eax + 0x78a6c4]
// 0078a5db  ff2495aca67800       jmp dword ptr [edx*4 + 0x78a6ac]
// 0078a5e2  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0078a5e5  ff4e70               dec dword ptr [esi + 0x70]
// 0078a5e8  8b06                 mov eax, dword ptr [esi]
// 0078a5ea  8b5670               mov edx, dword ptr [esi + 0x70]
// 0078a5ed  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0078a5f3  51                   push ecx
// 0078a5f4  52                   push edx
// 0078a5f5  8bce                 mov ecx, esi
// 0078a5f7  ffd0                 call eax
// 0078a5f9  5e                   pop esi
// 0078a5fa  b801000000           mov eax, 1
// 0078a5ff  5b                   pop ebx
// 0078a600  83c410               add esp, 0x10
// 0078a603  c20400               ret 4
// 0078a606  ff4e74               dec dword ptr [esi + 0x74]
// 0078a609  8b4674               mov eax, dword ptr [esi + 0x74]
// 0078a60c  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0078a60f  8b16                 mov edx, dword ptr [esi]
// 0078a611  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0078a617  50                   push eax
// 0078a618  51                   push ecx
// 0078a619  8bce                 mov ecx, esi
// 0078a61b  ffd2                 call edx
// 0078a61d  5e                   pop esi
// 0078a61e  b801000000           mov eax, 1
// 0078a623  5b                   pop ebx
// 0078a624  83c410               add esp, 0x10
// 0078a627  c20400               ret 4
// 0078a62a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0078a62d  ff4670               inc dword ptr [esi + 0x70]
// 0078a630  8b06                 mov eax, dword ptr [esi]
// 0078a632  8b5670               mov edx, dword ptr [esi + 0x70]
// 0078a635  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0078a63b  51                   push ecx
// 0078a63c  52                   push edx
// 0078a63d  8bce                 mov ecx, esi
// 0078a63f  ffd0                 call eax
// 0078a641  5e                   pop esi
// 0078a642  b801000000           mov eax, 1
// 0078a647  5b                   pop ebx
// 0078a648  83c410               add esp, 0x10
// 0078a64b  c20400               ret 4
// 0078a64e  ff4674               inc dword ptr [esi + 0x74]
// 0078a651  8b4674               mov eax, dword ptr [esi + 0x74]
// 0078a654  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0078a657  8b16                 mov edx, dword ptr [esi]
// 0078a659  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0078a65f  50                   push eax
// 0078a660  51                   push ecx
// 0078a661  8bce                 mov ecx, esi
// 0078a663  ffd2                 call edx
// 0078a665  5e                   pop esi
// 0078a666  b801000000           mov eax, 1
// 0078a66b  5b                   pop ebx
// 0078a66c  83c410               add esp, 0x10
// 0078a66f  c20400               ret 4
// 0078a672  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078a675  57                   push edi
// 0078a676  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 0078a67c  50                   push eax
// 0078a67d  ffd7                 call edi
// 0078a67f  50                   push eax
// 0078a680  e85965f1ff           call 0x6a0bde
// 0078a685  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0078a688  51                   push ecx
// 0078a689  ffd7                 call edi
// 0078a68b  50                   push eax
// 0078a68c  e84d65f1ff           call 0x6a0bde
// 0078a691  6a01                 push 1
// 0078a693  8bc8                 mov ecx, eax
// 0078a695  e8e8220300           call 0x7bc982
// 0078a69a  5f                   pop edi
// 0078a69b  53                   push ebx
// 0078a69c  8bce                 mov ecx, esi
// 0078a69e  e8f565f1ff           call 0x6a0c98
// 0078a6a3  5e                   pop esi
// 0078a6a4  5b                   pop ebx
// 0078a6a5  83c410               add esp, 0x10
// 0078a6a8  c20400               ret 4
// 0078a6ab  90                   nop 
// 0078a6ac  72a6                 jb 0x78a654
// 0078a6ae  7800                 js 0x78a6b0
// 0078a6b0  e2a5                 loop 0x78a657
// 0078a6b2  7800                 js 0x78a6b4
// 0078a6b4  06                   push es
// 0078a6b5  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 0078a6b6  7800                 js 0x78a6b8
// 0078a6b8  2aa678004ea6         sub ah, byte ptr [esi - 0x59b1ff88]
// 0078a6be  7800                 js 0x78a6c0
// 0078a6c0  9b                   wait 
// 0078a6c1  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 0078a6c2  7800                 js 0x78a6c4
// 0078a6c4  000505050505         add byte ptr [0x5050505], al
// 0078a6ca  0505050505           add eax, 0x5050505
// 0078a6cf  0505050505           add eax, 0x5050505
// 0078a6d4  0505050005           add eax, 0x5000505
// 0078a6d9  0505050102           add eax, 0x2010505
// library xtp-11.2.2-lib-strlen/Source\Controls\XTColorPageCustom.cpp (function ?PreTranslateMessage@CXTColorWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTColorPageCustom.cpp
