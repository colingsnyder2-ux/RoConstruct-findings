// roc 2009-12 008ca530  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ca530
//
// 008ca530  8b4174               mov eax, dword ptr [ecx + 0x74]
// 008ca533  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008ca536  83c04c               add eax, 0x4c
// 008ca539  83f9ff               cmp ecx, -1
// 008ca53c  7515                 jne 0x8ca553
// 008ca53e  8b4004               mov eax, dword ptr [eax + 4]
// 008ca541  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ca545  50                   push eax
// 008ca546  8d44240c             lea eax, [esp + 0xc]
// 008ca54a  50                   push eax
// 008ca54b  e8aea0f2ff           call 0x7f45fe
// 008ca550  c21400               ret 0x14
// 008ca553  8bc1                 mov eax, ecx
// 008ca555  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ca559  50                   push eax
// 008ca55a  8d44240c             lea eax, [esp + 0xc]
// 008ca55e  50                   push eax
// 008ca55f  e89aa0f2ff           call 0x7f45fe
// 008ca564  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
