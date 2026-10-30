// from server: 100% by auto
// roc 2012-06 00a51b80  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51b80
//
// 00a51b80  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a51b84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a51b88  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a51b8c  56                   push esi
// 00a51b8d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a51b91  57                   push edi
// 00a51b92  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a51b96  50                   push eax
// 00a51b97  83ec10               sub esp, 0x10
// 00a51b9a  8bc4                 mov eax, esp
// 00a51b9c  f7d9                 neg ecx
// 00a51b9e  8908                 mov dword ptr [eax], ecx
// 00a51ba0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a51ba4  f7da                 neg edx
// 00a51ba6  895004               mov dword ptr [eax + 4], edx
// 00a51ba9  f7de                 neg esi
// 00a51bab  f7df                 neg edi
// 00a51bad  897008               mov dword ptr [eax + 8], esi
// 00a51bb0  51                   push ecx
// 00a51bb1  89780c               mov dword ptr [eax + 0xc], edi
// 00a51bb4  e8f7f6ffff           call 0xa512b0
// 00a51bb9  83c418               add esp, 0x18
// 00a51bbc  5f                   pop edi
// 00a51bbd  5e                   pop esi
// 00a51bbe  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DeflateRectEx@CXTPTabPaintManagerAppearanceSet@@SAXAAVCRect@@V2@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
