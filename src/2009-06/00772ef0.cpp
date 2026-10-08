// roc 2009-06 00772ef0  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772ef0
//
// 00772ef0  56                   push esi
// 00772ef1  8bf1                 mov esi, ecx
// 00772ef3  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 00772ef9  85c9                 test ecx, ecx
// 00772efb  7413                 je 0x772f10
// 00772efd  e8a660faff           call 0x718fa8
// 00772f02  8b442408             mov eax, dword ptr [esp + 8]
// 00772f06  898654010000         mov dword ptr [esi + 0x154], eax
// 00772f0c  5e                   pop esi
// 00772f0d  c20400               ret 4
// 00772f10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00772f14  898e54010000         mov dword ptr [esi + 0x154], ecx
// 00772f1a  5e                   pop esi
// 00772f1b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetImageManager@CXTPPropertyGrid@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
