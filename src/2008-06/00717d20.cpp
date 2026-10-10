// roc 2008-06 00717d20  unit: CXTPPropertyGridItemBool  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717d20
//
// 00717d20  83ec10               sub esp, 0x10
// 00717d23  56                   push esi
// 00717d24  8bf1                 mov esi, ecx
// 00717d26  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 00717d2d  7509                 jne 0x717d38
// 00717d2f  33c0                 xor eax, eax
// 00717d31  5e                   pop esi
// 00717d32  83c410               add esp, 0x10
// 00717d35  c21400               ret 0x14
// 00717d38  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00717d3c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00717d40  8d41ff               lea eax, [ecx - 1]
// 00717d43  89442404             mov dword ptr [esp + 4], eax
// 00717d47  8b442420             mov eax, dword ptr [esp + 0x20]
// 00717d4b  03c2                 add eax, edx
// 00717d4d  99                   cdq 
// 00717d4e  2bc2                 sub eax, edx
// 00717d50  d1f8                 sar eax, 1
// 00717d52  83c10c               add ecx, 0xc
// 00717d55  8d50fa               lea edx, [eax - 6]
// 00717d58  894c240c             mov dword ptr [esp + 0xc], ecx
// 00717d5c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00717d62  83c007               add eax, 7
// 00717d65  57                   push edi
// 00717d66  8954240c             mov dword ptr [esp + 0xc], edx
// 00717d6a  89442414             mov dword ptr [esp + 0x14], eax
// 00717d6e  e8cdc3ffff           call 0x714140
// 00717d73  83780401             cmp dword ptr [eax + 4], 1
// 00717d77  7567                 jne 0x717de0
// 00717d79  8d7814               lea edi, [eax + 0x14]
// 00717d7c  8bcf                 mov ecx, edi
// 00717d7e  e8ad060000           call 0x718430
// 00717d83  85c0                 test eax, eax
// 00717d85  7459                 je 0x717de0
// 00717d87  8b06                 mov eax, dword ptr [esi]
// 00717d89  8b5058               mov edx, dword ptr [eax + 0x58]
// 00717d8c  8bce                 mov ecx, esi
// 00717d8e  ffd2                 call edx
// 00717d90  85c0                 test eax, eax
// 00717d92  8b06                 mov eax, dword ptr [esi]
// 00717d94  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00717d9a  8bce                 mov ecx, esi
// 00717d9c  740e                 je 0x717dac
// 00717d9e  ffd2                 call edx
// 00717da0  f7d8                 neg eax
// 00717da2  1bc0                 sbb eax, eax
// 00717da4  83e004               and eax, 4
// 00717da7  83c004               add eax, 4
// 00717daa  eb0a                 jmp 0x717db6
// 00717dac  ffd2                 call edx
// 00717dae  f7d8                 neg eax
// 00717db0  1bc0                 sbb eax, eax
// 00717db2  83e004               and eax, 4
// 00717db5  40                   inc eax
// 00717db6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00717dba  85c9                 test ecx, ecx
// 00717dbc  7403                 je 0x717dc1
// 00717dbe  8b4904               mov ecx, dword ptr [ecx + 4]
// 00717dc1  6a00                 push 0
// 00717dc3  8d54240c             lea edx, [esp + 0xc]
// 00717dc7  52                   push edx
// 00717dc8  50                   push eax
// 00717dc9  6a03                 push 3
// 00717dcb  51                   push ecx
// 00717dcc  8bcf                 mov ecx, edi
// 00717dce  e8dd020000           call 0x7180b0
// 00717dd3  5f                   pop edi
// 00717dd4  b801000000           mov eax, 1
// 00717dd9  5e                   pop esi
// 00717dda  83c410               add esp, 0x10
// 00717ddd  c21400               ret 0x14
// 00717de0  8b06                 mov eax, dword ptr [esi]
// 00717de2  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00717de8  8bce                 mov ecx, esi
// 00717dea  ffd2                 call edx
// 00717dec  8bf8                 mov edi, eax
// 00717dee  8b06                 mov eax, dword ptr [esi]
// 00717df0  8b5058               mov edx, dword ptr [eax + 0x58]
// 00717df3  f7df                 neg edi
// 00717df5  1bff                 sbb edi, edi
// 00717df7  8bce                 mov ecx, esi
// 00717df9  81e700040000         and edi, 0x400
// 00717dff  ffd2                 call edx
// 00717e01  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00717e05  8b5104               mov edx, dword ptr [ecx + 4]
// 00717e08  f7d8                 neg eax
// 00717e0a  1bc0                 sbb eax, eax
// 00717e0c  2500010000           and eax, 0x100
// 00717e11  0bc7                 or eax, edi
// 00717e13  50                   push eax
// 00717e14  6a04                 push 4
// 00717e16  8d442410             lea eax, [esp + 0x10]
// 00717e1a  50                   push eax
// 00717e1b  52                   push edx
// 00717e1c  ff15402d8000         call dword ptr [0x802d40]
// 00717e22  5f                   pop edi
// 00717e23  b801000000           mov eax, 1
// 00717e28  5e                   pop esi
// 00717e29  83c410               add esp, 0x10
// 00717e2c  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?OnDrawItemValue@CXTPPropertyGridItemBool@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
