// roc 2011-06 008207d0  unit: CXTPImageManagerResource::CBitmapDC  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008207d0
//
// 008207d0  83ec0c               sub esp, 0xc
// 008207d3  56                   push esi
// 008207d4  8bf1                 mov esi, ecx
// 008207d6  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008207d9  f7d8                 neg eax
// 008207db  1bc0                 sbb eax, eax
// 008207dd  89442404             mov dword ptr [esp + 4], eax
// 008207e1  742b                 je 0x82080e
// 008207e3  57                   push edi
// 008207e4  8d7e10               lea edi, [esi + 0x10]
// 008207e7  8d44240c             lea eax, [esp + 0xc]
// 008207eb  50                   push eax
// 008207ec  8d4c2414             lea ecx, [esp + 0x14]
// 008207f0  51                   push ecx
// 008207f1  8d542410             lea edx, [esp + 0x10]
// 008207f5  52                   push edx
// 008207f6  8bcf                 mov ecx, edi
// 008207f8  e8e3ce0a00           call 0x8cd6e0
// 008207fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00820801  e8d49dfeff           call 0x80a5da
// 00820806  837c240800           cmp dword ptr [esp + 8], 0
// 0082080b  75da                 jne 0x8207e7
// 0082080d  5f                   pop edi
// 0082080e  8d4e10               lea ecx, [esi + 0x10]
// 00820811  5e                   pop esi
// 00820812  83c40c               add esp, 0xc
// 00820815  e9968a0900           jmp 0x8b92b0
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerImageList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
