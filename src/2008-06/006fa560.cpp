// roc 2008-06 006fa560  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa560
//
// 006fa560  56                   push esi
// 006fa561  8bf1                 mov esi, ecx
// 006fa563  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 006fa569  85c9                 test ecx, ecx
// 006fa56b  7413                 je 0x6fa580
// 006fa56d  e87266faff           call 0x6a0be4
// 006fa572  8b442408             mov eax, dword ptr [esp + 8]
// 006fa576  898654010000         mov dword ptr [esi + 0x154], eax
// 006fa57c  5e                   pop esi
// 006fa57d  c20400               ret 4
// 006fa580  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fa584  898e54010000         mov dword ptr [esi + 0x154], ecx
// 006fa58a  5e                   pop esi
// 006fa58b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetImageManager@CXTPPropertyGrid@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
