// roc 2010-06 00801c90  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801c90
//
// 00801c90  56                   push esi
// 00801c91  8bf1                 mov esi, ecx
// 00801c93  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 00801c99  85c9                 test ecx, ecx
// 00801c9b  7413                 je 0x801cb0
// 00801c9d  e87a62faff           call 0x7a7f1c
// 00801ca2  8b442408             mov eax, dword ptr [esp + 8]
// 00801ca6  898654010000         mov dword ptr [esi + 0x154], eax
// 00801cac  5e                   pop esi
// 00801cad  c20400               ret 4
// 00801cb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00801cb4  898e54010000         mov dword ptr [esi + 0x154], ecx
// 00801cba  5e                   pop esi
// 00801cbb  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetImageManager@CXTPPropertyGrid@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
