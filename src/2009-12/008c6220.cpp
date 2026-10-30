// roc 2009-12 008c6220  unit: CXTPControlCustom  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6220
//
// 008c6220  56                   push esi
// 008c6221  8bf1                 mov esi, ecx
// 008c6223  8d4e54               lea ecx, [esi + 0x54]
// 008c6226  c7069c9aa000         mov dword ptr [esi], 0xa09a9c
// 008c622c  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6232  8d4e48               lea ecx, [esi + 0x48]
// 008c6235  ff15c0de9800         call dword ptr [0x98dec0]
// 008c623b  8bce                 mov ecx, esi
// 008c623d  5e                   pop esi
// 008c623e  e99fe1f2ff           jmp 0x7f43e2
// copied from an identical function in another client (function ??1CXTPPropertyGridInplaceButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp