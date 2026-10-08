// roc 2011-06 00869350  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869350
//
// 00869350  56                   push esi
// 00869351  8bf1                 mov esi, ecx
// 00869353  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 00869359  85c9                 test ecx, ecx
// 0086935b  7413                 je 0x869370
// 0086935d  e87812faff           call 0x80a5da
// 00869362  8b442408             mov eax, dword ptr [esp + 8]
// 00869366  898654010000         mov dword ptr [esi + 0x154], eax
// 0086936c  5e                   pop esi
// 0086936d  c20400               ret 4
// 00869370  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00869374  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0086937a  5e                   pop esi
// 0086937b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetImageManager@CXTPPropertyGrid@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
