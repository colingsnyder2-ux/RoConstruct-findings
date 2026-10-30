// roc 2009-12 008973b0  unit: CXTPRibbonBar  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008973b0
//
// 008973b0  55                   push ebp
// 008973b1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008973b5  56                   push esi
// 008973b6  8bf1                 mov esi, ecx
// 008973b8  85ed                 test ebp, ebp
// 008973ba  0f8480000000         je 0x897440
// 008973c0  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 008973c6  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008973c9  57                   push edi
// 008973ca  8d442410             lea eax, [esp + 0x10]
// 008973ce  50                   push eax
// 008973cf  52                   push edx
// 008973d0  ff1554cc9800         call dword ptr [0x98cc54]
// 008973d6  8b06                 mov eax, dword ptr [esi]
// 008973d8  8b9040020000         mov edx, dword ptr [eax + 0x240]
// 008973de  55                   push ebp
// 008973df  8bce                 mov ecx, esi
// 008973e1  ffd2                 call edx
// 008973e3  8bf8                 mov edi, eax
// 008973e5  85ff                 test edi, edi
// 008973e7  7456                 je 0x89743f
// 008973e9  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 008973f0  53                   push ebx
// 008973f1  7404                 je 0x8973f7
// 008973f3  8bde                 mov ebx, esi
// 008973f5  eb09                 jmp 0x897400
// 008973f7  8bce                 mov ecx, esi
// 008973f9  e8f2fcf6ff           call 0x8070f0
// 008973fe  8bd8                 mov ebx, eax
// 00897400  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00897406  6a00                 push 0
// 00897408  e8c3eefaff           call 0x8462d0
// 0089740d  85c0                 test eax, eax
// 0089740f  7e26                 jle 0x897437
// 00897411  8b442418             mov eax, dword ptr [esp + 0x18]
// 00897415  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00897419  33d2                 xor edx, edx
// 0089741b  39b500010000         cmp dword ptr [ebp + 0x100], esi
// 00897421  53                   push ebx
// 00897422  6a00                 push 0
// 00897424  0f95c2               setne dl
// 00897427  53                   push ebx
// 00897428  50                   push eax
// 00897429  51                   push ecx
// 0089742a  83ca02               or edx, 2
// 0089742d  52                   push edx
// 0089742e  57                   push edi
// 0089742f  e80cf1f7ff           call 0x816540
// 00897434  83c41c               add esp, 0x1c
// 00897437  8bcf                 mov ecx, edi
// 00897439  e89ec9f5ff           call 0x7f3ddc
// 0089743e  5b                   pop ebx
// 0089743f  5f                   pop edi
// 00897440  5e                   pop esi
// 00897441  5d                   pop ebp
// 00897442  c20c00               ret 0xc
// copied from an identical function in another client (function ?ShowContextMenu@CXTPRibbonBar@@IAEXVCPoint@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp