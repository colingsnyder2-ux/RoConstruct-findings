// from server: 100% by auto
// roc 2008-06 00781560  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781560
//
// 00781560  8b442418             mov eax, dword ptr [esp + 0x18]
// 00781564  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00781568  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078156c  56                   push esi
// 0078156d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00781571  57                   push edi
// 00781572  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00781576  50                   push eax
// 00781577  83ec10               sub esp, 0x10
// 0078157a  8bc4                 mov eax, esp
// 0078157c  f7d9                 neg ecx
// 0078157e  8908                 mov dword ptr [eax], ecx
// 00781580  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00781584  f7da                 neg edx
// 00781586  895004               mov dword ptr [eax + 4], edx
// 00781589  f7de                 neg esi
// 0078158b  f7df                 neg edi
// 0078158d  897008               mov dword ptr [eax + 8], esi
// 00781590  51                   push ecx
// 00781591  89780c               mov dword ptr [eax + 0xc], edi
// 00781594  e8b7f6ffff           call 0x780c50
// 00781599  83c418               add esp, 0x18
// 0078159c  5f                   pop edi
// 0078159d  5e                   pop esi
// 0078159e  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DeflateRectEx@CAppearanceSet@CXTPTabPaintManager@@SAXAAVCRect@@V3@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
