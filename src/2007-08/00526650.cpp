// roc 2007-08 00526650  unit: G3D::Line  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00526650
//
// 00526650  51                   push ecx
// 00526651  53                   push ebx
// 00526652  55                   push ebp
// 00526653  56                   push esi
// 00526654  8b742414             mov esi, dword ptr [esp + 0x14]
// 00526658  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 0052665f  57                   push edi
// 00526660  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00526666  751b                 jne 0x526683
// 00526668  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 0052666f  7512                 jne 0x526683
// 00526671  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 00526678  7509                 jne 0x526683
// 0052667a  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 00526681  7416                 je 0x526699
// 00526683  8b06                 mov eax, dword ptr [esi]
// 00526685  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 0052668c  8b0e                 mov ecx, dword ptr [esi]
// 0052668e  8b5104               mov edx, dword ptr [ecx + 4]
// 00526691  6aff                 push -1
// 00526693  56                   push esi
// 00526694  ffd2                 call edx
// 00526696  83c408               add esp, 8
// 00526699  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 005266a0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005266a8  7e5b                 jle 0x526705
// 005266aa  8d4714               lea eax, [edi + 0x14]
// 005266ad  89442410             mov dword ptr [esp + 0x10], eax
// 005266b1  8d9e28010000         lea ebx, [esi + 0x128]
// 005266b7  8b03                 mov eax, dword ptr [ebx]
// 005266b9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005266bc  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005266bf  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 005266c3  52                   push edx
// 005266c4  51                   push ecx
// 005266c5  6a01                 push 1
// 005266c7  56                   push esi
// 005266c8  e8d3f5ffff           call 0x525ca0
// 005266cd  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 005266d1  50                   push eax
// 005266d2  55                   push ebp
// 005266d3  6a00                 push 0
// 005266d5  56                   push esi
// 005266d6  e8c5f5ffff           call 0x525ca0
// 005266db  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005266df  8b442438             mov eax, dword ptr [esp + 0x38]
// 005266e3  c70100000000         mov dword ptr [ecx], 0
// 005266e9  83c001               add eax, 1
// 005266ec  83c104               add ecx, 4
// 005266ef  83c420               add esp, 0x20
// 005266f2  83c304               add ebx, 4
// 005266f5  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005266fb  89442418             mov dword ptr [esp + 0x18], eax
// 005266ff  894c2410             mov dword ptr [esp + 0x10], ecx
// 00526703  7cb2                 jl 0x5266b7
// 00526705  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0052670c  7e72                 jle 0x526780
// 0052670e  b868ffffff           mov eax, 0xffffff68
// 00526713  2bc7                 sub eax, edi
// 00526715  8d8f98000000         lea ecx, [edi + 0x98]
// 0052671b  8d5770               lea edx, [edi + 0x70]
// 0052671e  8dae44010000         lea ebp, [esi + 0x144]
// 00526724  89442418             mov dword ptr [esp + 0x18], eax
// 00526728  eb06                 jmp 0x526730
// 0052672a  8d9b00000000         lea ebx, [ebx]
// 00526730  8b4500               mov eax, dword ptr [ebp]
// 00526733  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 0052673a  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0052673d  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 00526741  895ad8               mov dword ptr [edx - 0x28], ebx
// 00526744  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00526747  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 0052674b  891a                 mov dword ptr [edx], ebx
// 0052674d  80783000             cmp byte ptr [eax + 0x30], 0
// 00526751  740f                 je 0x526762
// 00526753  c60101               mov byte ptr [ecx], 1
// 00526756  83782401             cmp dword ptr [eax + 0x24], 1
// 0052675a  0f9fc0               setg al
// 0052675d  88410a               mov byte ptr [ecx + 0xa], al
// 00526760  eb07                 jmp 0x526769
// 00526762  c6410a00             mov byte ptr [ecx + 0xa], 0
// 00526766  c60100               mov byte ptr [ecx], 0
// 00526769  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052676d  83c101               add ecx, 1
// 00526770  03c1                 add eax, ecx
// 00526772  83c504               add ebp, 4
// 00526775  83c204               add edx, 4
// 00526778  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 0052677e  7cb0                 jl 0x526730
// 00526780  33c0                 xor eax, eax
// 00526782  894710               mov dword ptr [edi + 0x10], eax
// 00526785  89470c               mov dword ptr [edi + 0xc], eax
// 00526788  884708               mov byte ptr [edi + 8], al
// 0052678b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00526791  894f24               mov dword ptr [edi + 0x24], ecx
// 00526794  5f                   pop edi
// 00526795  5e                   pop esi
// 00526796  5d                   pop ebp
// 00526797  5b                   pop ebx
// 00526798  59                   pop ecx
// 00526799  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
