// from server: 100% by auto
// roc 2011-06 008d98b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d98b0
//
// 008d98b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d98b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d98b8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d98bc  56                   push esi
// 008d98bd  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d98c1  57                   push edi
// 008d98c2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008d98c6  50                   push eax
// 008d98c7  83ec10               sub esp, 0x10
// 008d98ca  8bc4                 mov eax, esp
// 008d98cc  f7d9                 neg ecx
// 008d98ce  8908                 mov dword ptr [eax], ecx
// 008d98d0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d98d4  f7da                 neg edx
// 008d98d6  895004               mov dword ptr [eax + 4], edx
// 008d98d9  f7de                 neg esi
// 008d98db  f7df                 neg edi
// 008d98dd  897008               mov dword ptr [eax + 8], esi
// 008d98e0  51                   push ecx
// 008d98e1  89780c               mov dword ptr [eax + 0xc], edi
// 008d98e4  e8b7f6ffff           call 0x8d8fa0
// 008d98e9  83c418               add esp, 0x18
// 008d98ec  5f                   pop edi
// 008d98ed  5e                   pop esi
// 008d98ee  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DeflateRectEx@CXTPTabPaintManagerAppearanceSet@@SAXAAVCRect@@V2@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
