// roc 2008-06 00724800  unit: CXTPRibbonBar  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00724800
//
// 00724800  55                   push ebp
// 00724801  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00724805  56                   push esi
// 00724806  8bf1                 mov esi, ecx
// 00724808  85ed                 test ebp, ebp
// 0072480a  0f8480000000         je 0x724890
// 00724810  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00724816  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00724819  57                   push edi
// 0072481a  8d442410             lea eax, [esp + 0x10]
// 0072481e  50                   push eax
// 0072481f  52                   push edx
// 00724820  ff15802d8000         call dword ptr [0x802d80]
// 00724826  8b06                 mov eax, dword ptr [esi]
// 00724828  8b9040020000         mov edx, dword ptr [eax + 0x240]
// 0072482e  55                   push ebp
// 0072482f  8bce                 mov ecx, esi
// 00724831  ffd2                 call edx
// 00724833  8bf8                 mov edi, eax
// 00724835  85ff                 test edi, edi
// 00724837  7456                 je 0x72488f
// 00724839  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 00724840  53                   push ebx
// 00724841  7404                 je 0x724847
// 00724843  8bde                 mov ebx, esi
// 00724845  eb09                 jmp 0x724850
// 00724847  8bce                 mov ecx, esi
// 00724849  e8d231f9ff           call 0x6b7a20
// 0072484e  8bd8                 mov ebx, eax
// 00724850  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00724856  6a00                 push 0
// 00724858  e853e3fcff           call 0x6f2bb0
// 0072485d  85c0                 test eax, eax
// 0072485f  7e26                 jle 0x724887
// 00724861  8b442418             mov eax, dword ptr [esp + 0x18]
// 00724865  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00724869  33d2                 xor edx, edx
// 0072486b  39b500010000         cmp dword ptr [ebp + 0x100], esi
// 00724871  53                   push ebx
// 00724872  6a00                 push 0
// 00724874  0f95c2               setne dl
// 00724877  53                   push ebx
// 00724878  50                   push eax
// 00724879  51                   push ecx
// 0072487a  83ca02               or edx, 2
// 0072487d  52                   push edx
// 0072487e  57                   push edi
// 0072487f  e82c07f8ff           call 0x6a4fb0
// 00724884  83c41c               add esp, 0x1c
// 00724887  8bcf                 mov ecx, edi
// 00724889  e856c3f7ff           call 0x6a0be4
// 0072488e  5b                   pop ebx
// 0072488f  5f                   pop edi
// 00724890  5e                   pop esi
// 00724891  5d                   pop ebp
// 00724892  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?ShowContextMenu@CXTPRibbonBar@@IAEXVCPoint@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
