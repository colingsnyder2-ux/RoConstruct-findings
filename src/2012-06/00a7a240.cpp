// roc 2012-06 00a7a240  unit: CXTCaptionButtonTheme  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a240
//
// 00a7a240  83ec20               sub esp, 0x20
// 00a7a243  53                   push ebx
// 00a7a244  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00a7a248  8b03                 mov eax, dword ptr [ebx]
// 00a7a24a  8b5308               mov edx, dword ptr [ebx + 8]
// 00a7a24d  55                   push ebp
// 00a7a24e  56                   push esi
// 00a7a24f  57                   push edi
// 00a7a250  8be9                 mov ebp, ecx
// 00a7a252  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00a7a255  6a00                 push 0
// 00a7a257  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a7a25b  89442424             mov dword ptr [esp + 0x24], eax
// 00a7a25f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00a7a262  6afe                 push -2
// 00a7a264  8d4c2428             lea ecx, [esp + 0x28]
// 00a7a268  51                   push ecx
// 00a7a269  89542434             mov dword ptr [esp + 0x34], edx
// 00a7a26d  89442438             mov dword ptr [esp + 0x38], eax
// 00a7a271  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a7a277  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a7a27b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a7a27f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a7a283  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a7a287  8916                 mov dword ptr [esi], edx
// 00a7a289  894604               mov dword ptr [esi + 4], eax
// 00a7a28c  837f7800             cmp dword ptr [edi + 0x78], 0
// 00a7a290  7422                 je 0xa7a2b4
// 00a7a292  8d4c2410             lea ecx, [esp + 0x10]
// 00a7a296  51                   push ecx
// 00a7a297  8bcf                 mov ecx, edi
// 00a7a299  e8a20dffff           call 0xa6b040
// 00a7a29e  8b10                 mov edx, dword ptr [eax]
// 00a7a2a0  8916                 mov dword ptr [esi], edx
// 00a7a2a2  8b4004               mov eax, dword ptr [eax + 4]
// 00a7a2a5  5f                   pop edi
// 00a7a2a6  894604               mov dword ptr [esi + 4], eax
// 00a7a2a9  8bc6                 mov eax, esi
// 00a7a2ab  5e                   pop esi
// 00a7a2ac  5d                   pop ebp
// 00a7a2ad  5b                   pop ebx
// 00a7a2ae  83c420               add esp, 0x20
// 00a7a2b1  c21400               ret 0x14
// 00a7a2b4  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a7a2b8  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7a2bb  8b00                 mov eax, dword ptr [eax]
// 00a7a2bd  8b5500               mov edx, dword ptr [ebp]
// 00a7a2c0  8b5240               mov edx, dword ptr [edx + 0x40]
// 00a7a2c3  57                   push edi
// 00a7a2c4  51                   push ecx
// 00a7a2c5  50                   push eax
// 00a7a2c6  56                   push esi
// 00a7a2c7  8bcd                 mov ecx, ebp
// 00a7a2c9  ffd2                 call edx
// 00a7a2cb  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7a2ce  8906                 mov dword ptr [esi], eax
// 00a7a2d0  8b17                 mov edx, dword ptr [edi]
// 00a7a2d2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00a7a2d8  8bcf                 mov ecx, edi
// 00a7a2da  ffd0                 call eax
// 00a7a2dc  a804                 test al, 4
// 00a7a2de  7425                 je 0xa7a305
// 00a7a2e0  8b6f70               mov ebp, dword ptr [edi + 0x70]
// 00a7a2e3  8d4c2410             lea ecx, [esp + 0x10]
// 00a7a2e7  51                   push ecx
// 00a7a2e8  8bcf                 mov ecx, edi
// 00a7a2ea  e8d10cffff           call 0xa6afc0
// 00a7a2ef  8b4004               mov eax, dword ptr [eax + 4]
// 00a7a2f2  99                   cdq 
// 00a7a2f3  2bc2                 sub eax, edx
// 00a7a2f5  8bc8                 mov ecx, eax
// 00a7a2f7  8bc5                 mov eax, ebp
// 00a7a2f9  99                   cdq 
// 00a7a2fa  2bc2                 sub eax, edx
// 00a7a2fc  d1f9                 sar ecx, 1
// 00a7a2fe  d1f8                 sar eax, 1
// 00a7a300  03c8                 add ecx, eax
// 00a7a302  014e04               add dword ptr [esi + 4], ecx
// 00a7a305  8bcf                 mov ecx, edi
// 00a7a307  e8c6f20100           call 0xa995d2
// 00a7a30c  2500030000           and eax, 0x300
// 00a7a311  3d00010000           cmp eax, 0x100
// 00a7a316  7466                 je 0xa7a37e
// 00a7a318  3d00020000           cmp eax, 0x200
// 00a7a31d  7445                 je 0xa7a364
// 00a7a31f  8b17                 mov edx, dword ptr [edi]
// 00a7a321  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00a7a327  8bcf                 mov ecx, edi
// 00a7a329  ffd0                 call eax
// 00a7a32b  a804                 test al, 4
// 00a7a32d  7510                 jne 0xa7a33f
// 00a7a32f  8d4c2410             lea ecx, [esp + 0x10]
// 00a7a333  51                   push ecx
// 00a7a334  8bcf                 mov ecx, edi
// 00a7a336  e8850cffff           call 0xa6afc0
// 00a7a33b  8b10                 mov edx, dword ptr [eax]
// 00a7a33d  0116                 add dword ptr [esi], edx
// 00a7a33f  8b4308               mov eax, dword ptr [ebx + 8]
// 00a7a342  2b476c               sub eax, dword ptr [edi + 0x6c]
// 00a7a345  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a7a349  2b02                 sub eax, dword ptr [edx]
// 00a7a34b  8b0e                 mov ecx, dword ptr [esi]
// 00a7a34d  2bc1                 sub eax, ecx
// 00a7a34f  99                   cdq 
// 00a7a350  2bc2                 sub eax, edx
// 00a7a352  d1f8                 sar eax, 1
// 00a7a354  03c1                 add eax, ecx
// 00a7a356  5f                   pop edi
// 00a7a357  8906                 mov dword ptr [esi], eax
// 00a7a359  8bc6                 mov eax, esi
// 00a7a35b  5e                   pop esi
// 00a7a35c  5d                   pop ebp
// 00a7a35d  5b                   pop ebx
// 00a7a35e  83c420               add esp, 0x20
// 00a7a361  c21400               ret 0x14
// 00a7a364  8b4308               mov eax, dword ptr [ebx + 8]
// 00a7a367  2b476c               sub eax, dword ptr [edi + 0x6c]
// 00a7a36a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a7a36e  2b01                 sub eax, dword ptr [ecx]
// 00a7a370  5f                   pop edi
// 00a7a371  8906                 mov dword ptr [esi], eax
// 00a7a373  8bc6                 mov eax, esi
// 00a7a375  5e                   pop esi
// 00a7a376  5d                   pop ebp
// 00a7a377  5b                   pop ebx
// 00a7a378  83c420               add esp, 0x20
// 00a7a37b  c21400               ret 0x14
// 00a7a37e  8b17                 mov edx, dword ptr [edi]
// 00a7a380  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00a7a386  8bcf                 mov ecx, edi
// 00a7a388  ffd0                 call eax
// 00a7a38a  a804                 test al, 4
// 00a7a38c  7515                 jne 0xa7a3a3
// 00a7a38e  8b5f70               mov ebx, dword ptr [edi + 0x70]
// 00a7a391  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a395  51                   push ecx
// 00a7a396  8bcf                 mov ecx, edi
// 00a7a398  e8230cffff           call 0xa6afc0
// 00a7a39d  8b10                 mov edx, dword ptr [eax]
// 00a7a39f  03d3                 add edx, ebx
// 00a7a3a1  0116                 add dword ptr [esi], edx
// 00a7a3a3  5f                   pop edi
// 00a7a3a4  8bc6                 mov eax, esi
// 00a7a3a6  5e                   pop esi
// 00a7a3a7  5d                   pop ebp
// 00a7a3a8  5b                   pop ebx
// 00a7a3a9  83c420               add esp, 0x20
// 00a7a3ac  c21400               ret 0x14
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetTextPosition@CXTButtonTheme@@MAE?AVCPoint@@IAAVCRect@@AAVCSize@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp
