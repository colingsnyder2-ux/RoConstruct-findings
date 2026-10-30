// roc 2009-12 0086b4b0  unit: CXTPPropertyGridItemBool  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086b4b0
//
// 0086b4b0  83ec10               sub esp, 0x10
// 0086b4b3  56                   push esi
// 0086b4b4  8bf1                 mov esi, ecx
// 0086b4b6  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0086b4bd  7509                 jne 0x86b4c8
// 0086b4bf  33c0                 xor eax, eax
// 0086b4c1  5e                   pop esi
// 0086b4c2  83c410               add esp, 0x10
// 0086b4c5  c21400               ret 0x14
// 0086b4c8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086b4cc  8b542428             mov edx, dword ptr [esp + 0x28]
// 0086b4d0  8d41ff               lea eax, [ecx - 1]
// 0086b4d3  89442404             mov dword ptr [esp + 4], eax
// 0086b4d7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086b4db  03c2                 add eax, edx
// 0086b4dd  99                   cdq 
// 0086b4de  2bc2                 sub eax, edx
// 0086b4e0  d1f8                 sar eax, 1
// 0086b4e2  83c10c               add ecx, 0xc
// 0086b4e5  8d50fa               lea edx, [eax - 6]
// 0086b4e8  894c240c             mov dword ptr [esp + 0xc], ecx
// 0086b4ec  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0086b4f2  83c007               add eax, 7
// 0086b4f5  57                   push edi
// 0086b4f6  8954240c             mov dword ptr [esp + 0xc], edx
// 0086b4fa  89442414             mov dword ptr [esp + 0x14], eax
// 0086b4fe  e84dc4ffff           call 0x867950
// 0086b503  83780401             cmp dword ptr [eax + 4], 1
// 0086b507  7567                 jne 0x86b570
// 0086b509  8d7814               lea edi, [eax + 0x14]
// 0086b50c  8bcf                 mov ecx, edi
// 0086b50e  e8ad060000           call 0x86bbc0
// 0086b513  85c0                 test eax, eax
// 0086b515  7459                 je 0x86b570
// 0086b517  8b06                 mov eax, dword ptr [esi]
// 0086b519  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086b51c  8bce                 mov ecx, esi
// 0086b51e  ffd2                 call edx
// 0086b520  85c0                 test eax, eax
// 0086b522  8b06                 mov eax, dword ptr [esi]
// 0086b524  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0086b52a  8bce                 mov ecx, esi
// 0086b52c  740e                 je 0x86b53c
// 0086b52e  ffd2                 call edx
// 0086b530  f7d8                 neg eax
// 0086b532  1bc0                 sbb eax, eax
// 0086b534  83e004               and eax, 4
// 0086b537  83c004               add eax, 4
// 0086b53a  eb0a                 jmp 0x86b546
// 0086b53c  ffd2                 call edx
// 0086b53e  f7d8                 neg eax
// 0086b540  1bc0                 sbb eax, eax
// 0086b542  83e004               and eax, 4
// 0086b545  40                   inc eax
// 0086b546  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086b54a  85c9                 test ecx, ecx
// 0086b54c  7403                 je 0x86b551
// 0086b54e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086b551  6a00                 push 0
// 0086b553  8d54240c             lea edx, [esp + 0xc]
// 0086b557  52                   push edx
// 0086b558  50                   push eax
// 0086b559  6a03                 push 3
// 0086b55b  51                   push ecx
// 0086b55c  8bcf                 mov ecx, edi
// 0086b55e  e8dd020000           call 0x86b840
// 0086b563  5f                   pop edi
// 0086b564  b801000000           mov eax, 1
// 0086b569  5e                   pop esi
// 0086b56a  83c410               add esp, 0x10
// 0086b56d  c21400               ret 0x14
// 0086b570  8b06                 mov eax, dword ptr [esi]
// 0086b572  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0086b578  8bce                 mov ecx, esi
// 0086b57a  ffd2                 call edx
// 0086b57c  8bf8                 mov edi, eax
// 0086b57e  8b06                 mov eax, dword ptr [esi]
// 0086b580  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086b583  f7df                 neg edi
// 0086b585  1bff                 sbb edi, edi
// 0086b587  8bce                 mov ecx, esi
// 0086b589  81e700040000         and edi, 0x400
// 0086b58f  ffd2                 call edx
// 0086b591  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086b595  8b5104               mov edx, dword ptr [ecx + 4]
// 0086b598  f7d8                 neg eax
// 0086b59a  1bc0                 sbb eax, eax
// 0086b59c  2500010000           and eax, 0x100
// 0086b5a1  0bc7                 or eax, edi
// 0086b5a3  50                   push eax
// 0086b5a4  6a04                 push 4
// 0086b5a6  8d442410             lea eax, [esp + 0x10]
// 0086b5aa  50                   push eax
// 0086b5ab  52                   push edx
// 0086b5ac  ff1568ca9800         call dword ptr [0x98ca68]
// 0086b5b2  5f                   pop edi
// 0086b5b3  b801000000           mov eax, 1
// 0086b5b8  5e                   pop esi
// 0086b5b9  83c410               add esp, 0x10
// 0086b5bc  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrawItemValue@CXTPPropertyGridItemBool@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp