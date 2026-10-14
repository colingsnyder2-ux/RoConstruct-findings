// roc 2008-06 0078b050  unit: CXTColorLum  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078b050
//
// 0078b050  83ec10               sub esp, 0x10
// 0078b053  833dd4f1970002       cmp dword ptr [0x97f1d4], 2
// 0078b05a  53                   push ebx
// 0078b05b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0078b05f  56                   push esi
// 0078b060  8bf1                 mov esi, ecx
// 0078b062  0f85a2000000         jne 0x78b10a
// 0078b068  8d442408             lea eax, [esp + 8]
// 0078b06c  50                   push eax
// 0078b06d  e80efaffff           call 0x78aa80
// 0078b072  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 0078b079  0f858b000000         jne 0x78b10a
// 0078b07f  0fbe4308             movsx eax, byte ptr [ebx + 8]
// 0078b083  83c0f3               add eax, -0xd
// 0078b086  83f81b               cmp eax, 0x1b
// 0078b089  777f                 ja 0x78b10a
// 0078b08b  0fb6882cb17800       movzx ecx, byte ptr [eax + 0x78b12c]
// 0078b092  ff248d1cb17800       jmp dword ptr [ecx*4 + 0x78b11c]
// 0078b099  ff4e74               dec dword ptr [esi + 0x74]
// 0078b09c  8b4674               mov eax, dword ptr [esi + 0x74]
// 0078b09f  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0078b0a2  8b16                 mov edx, dword ptr [esi]
// 0078b0a4  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0078b0aa  50                   push eax
// 0078b0ab  51                   push ecx
// 0078b0ac  8bce                 mov ecx, esi
// 0078b0ae  ffd2                 call edx
// 0078b0b0  5e                   pop esi
// 0078b0b1  b801000000           mov eax, 1
// 0078b0b6  5b                   pop ebx
// 0078b0b7  83c410               add esp, 0x10
// 0078b0ba  c20400               ret 4
// 0078b0bd  ff4674               inc dword ptr [esi + 0x74]
// 0078b0c0  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0078b0c3  8b06                 mov eax, dword ptr [esi]
// 0078b0c5  8b5670               mov edx, dword ptr [esi + 0x70]
// 0078b0c8  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0078b0ce  51                   push ecx
// 0078b0cf  52                   push edx
// 0078b0d0  8bce                 mov ecx, esi
// 0078b0d2  ffd0                 call eax
// 0078b0d4  5e                   pop esi
// 0078b0d5  b801000000           mov eax, 1
// 0078b0da  5b                   pop ebx
// 0078b0db  83c410               add esp, 0x10
// 0078b0de  c20400               ret 4
// 0078b0e1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078b0e4  57                   push edi
// 0078b0e5  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 0078b0eb  51                   push ecx
// 0078b0ec  ffd7                 call edi
// 0078b0ee  50                   push eax
// 0078b0ef  e8ea5af1ff           call 0x6a0bde
// 0078b0f4  8b5020               mov edx, dword ptr [eax + 0x20]
// 0078b0f7  52                   push edx
// 0078b0f8  ffd7                 call edi
// 0078b0fa  50                   push eax
// 0078b0fb  e8de5af1ff           call 0x6a0bde
// 0078b100  6a01                 push 1
// 0078b102  8bc8                 mov ecx, eax
// 0078b104  e879180300           call 0x7bc982
// 0078b109  5f                   pop edi
// 0078b10a  53                   push ebx
// 0078b10b  8bce                 mov ecx, esi
// 0078b10d  e8865bf1ff           call 0x6a0c98
// 0078b112  5e                   pop esi
// 0078b113  5b                   pop ebx
// 0078b114  83c410               add esp, 0x10
// 0078b117  c20400               ret 4
// 0078b11a  8bff                 mov edi, edi
// 0078b11c  e1b0                 loope 0x78b0ce
// 0078b11e  7800                 js 0x78b120
// 0078b120  99                   cdq 
// 0078b121  b078                 mov al, 0x78
// 0078b123  00bdb078000a         add byte ptr [ebp + 0xa0078b0], bh
// 0078b129  b178                 mov cl, 0x78
// 0078b12b  0000                 add byte ptr [eax], al
// 0078b12d  0303                 add eax, dword ptr [ebx]
// 0078b12f  0303                 add eax, dword ptr [ebx]
// 0078b131  0303                 add eax, dword ptr [ebx]
// 0078b133  0303                 add eax, dword ptr [ebx]
// 0078b135  0303                 add eax, dword ptr [ebx]
// 0078b137  0303                 add eax, dword ptr [ebx]
// 0078b139  0303                 add eax, dword ptr [ebx]
// 0078b13b  0303                 add eax, dword ptr [ebx]
// 0078b13d  0303                 add eax, dword ptr [ebx]
// 0078b13f  0003                 add byte ptr [ebx], al
// 0078b141  0303                 add eax, dword ptr [ebx]
// 0078b143  0303                 add eax, dword ptr [ebx]
// 0078b145  0103                 add dword ptr [ebx], eax
// library xtp-11.2.2-lib-strlen/Source\Controls\XTColorPageCustom.cpp (function ?PreTranslateMessage@CXTColorLum@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTColorPageCustom.cpp
