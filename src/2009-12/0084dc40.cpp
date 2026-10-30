// roc 2009-12 0084dc40  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dc40
//
// 0084dc40  56                   push esi
// 0084dc41  8bf1                 mov esi, ecx
// 0084dc43  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 0084dc49  85c9                 test ecx, ecx
// 0084dc4b  7413                 je 0x84dc60
// 0084dc4d  e88a61faff           call 0x7f3ddc
// 0084dc52  8b442408             mov eax, dword ptr [esp + 8]
// 0084dc56  898654010000         mov dword ptr [esi + 0x154], eax
// 0084dc5c  5e                   pop esi
// 0084dc5d  c20400               ret 4
// 0084dc60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084dc64  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0084dc6a  5e                   pop esi
// 0084dc6b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetImageManager@CXTPPropertyGrid@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
