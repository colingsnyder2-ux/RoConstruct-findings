// from server: 100% by auto
// roc 2008-06 006bad10  unit: CXTPImageManagerResource::CBitmapDC  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bad10
//
// 006bad10  83ec0c               sub esp, 0xc
// 006bad13  56                   push esi
// 006bad14  8bf1                 mov esi, ecx
// 006bad16  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006bad19  f7d8                 neg eax
// 006bad1b  1bc0                 sbb eax, eax
// 006bad1d  89442404             mov dword ptr [esp + 4], eax
// 006bad21  742b                 je 0x6bad4e
// 006bad23  57                   push edi
// 006bad24  8d7e10               lea edi, [esi + 0x10]
// 006bad27  8d44240c             lea eax, [esp + 0xc]
// 006bad2b  50                   push eax
// 006bad2c  8d4c2414             lea ecx, [esp + 0x14]
// 006bad30  51                   push ecx
// 006bad31  8d542410             lea edx, [esp + 0x10]
// 006bad35  52                   push edx
// 006bad36  8bcf                 mov ecx, edi
// 006bad38  e813e10a00           call 0x768e50
// 006bad3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bad41  e89e5efeff           call 0x6a0be4
// 006bad46  837c240800           cmp dword ptr [esp + 8], 0
// 006bad4b  75da                 jne 0x6bad27
// 006bad4d  5f                   pop edi
// 006bad4e  8d4e10               lea ecx, [esi + 0x10]
// 006bad51  5e                   pop esi
// 006bad52  83c40c               add esp, 0xc
// 006bad55  e9d683feff           jmp 0x6a3130
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerImageList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
