// roc 2012-06 00998e20  unit: CXTPImageManagerResource::CBitmapDC  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998e20
//
// 00998e20  83ec0c               sub esp, 0xc
// 00998e23  56                   push esi
// 00998e24  8bf1                 mov esi, ecx
// 00998e26  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00998e29  f7d8                 neg eax
// 00998e2b  1bc0                 sbb eax, eax
// 00998e2d  89442404             mov dword ptr [esp + 4], eax
// 00998e31  742b                 je 0x998e5e
// 00998e33  57                   push edi
// 00998e34  8d7e10               lea edi, [esi + 0x10]
// 00998e37  8d44240c             lea eax, [esp + 0xc]
// 00998e3b  50                   push eax
// 00998e3c  8d4c2414             lea ecx, [esp + 0x14]
// 00998e40  51                   push ecx
// 00998e41  8d542410             lea edx, [esp + 0x10]
// 00998e45  52                   push edx
// 00998e46  8bcf                 mov ecx, edi
// 00998e48  e813f3ffff           call 0x998160
// 00998e4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00998e51  e83498feff           call 0x98268a
// 00998e56  837c240800           cmp dword ptr [esp + 8], 0
// 00998e5b  75da                 jne 0x998e37
// 00998e5d  5f                   pop edi
// 00998e5e  8d4e10               lea ecx, [esi + 0x10]
// 00998e61  5e                   pop esi
// 00998e62  83c40c               add esp, 0xc
// 00998e65  e946c8abff           jmp 0x4556b0
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerImageList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
