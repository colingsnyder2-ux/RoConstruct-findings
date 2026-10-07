// roc 2007-08 00703b80  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703b80
//
// 00703b80  8b442418             mov eax, dword ptr [esp + 0x18]
// 00703b84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00703b88  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00703b8c  56                   push esi
// 00703b8d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703b91  57                   push edi
// 00703b92  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00703b96  50                   push eax
// 00703b97  83ec10               sub esp, 0x10
// 00703b9a  8bc4                 mov eax, esp
// 00703b9c  f7d9                 neg ecx
// 00703b9e  8908                 mov dword ptr [eax], ecx
// 00703ba0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00703ba4  f7da                 neg edx
// 00703ba6  895004               mov dword ptr [eax + 4], edx
// 00703ba9  f7de                 neg esi
// 00703bab  f7df                 neg edi
// 00703bad  897008               mov dword ptr [eax + 8], esi
// 00703bb0  51                   push ecx
// 00703bb1  89780c               mov dword ptr [eax + 0xc], edi
// 00703bb4  e8c7f6ffff           call 0x703280
// 00703bb9  83c418               add esp, 0x18
// 00703bbc  5f                   pop edi
// 00703bbd  5e                   pop esi
// 00703bbe  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DeflateRectEx@CAppearanceSet@CXTPTabPaintManager@@SAXAAVCRect@@V3@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
