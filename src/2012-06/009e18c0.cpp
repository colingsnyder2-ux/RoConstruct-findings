// roc 2012-06 009e18c0  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e18c0
//
// 009e18c0  56                   push esi
// 009e18c1  8bf1                 mov esi, ecx
// 009e18c3  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 009e18c9  85c9                 test ecx, ecx
// 009e18cb  7413                 je 0x9e18e0
// 009e18cd  e8b80dfaff           call 0x98268a
// 009e18d2  8b442408             mov eax, dword ptr [esp + 8]
// 009e18d6  898654010000         mov dword ptr [esi + 0x154], eax
// 009e18dc  5e                   pop esi
// 009e18dd  c20400               ret 4
// 009e18e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e18e4  898e54010000         mov dword ptr [esi + 0x154], ecx
// 009e18ea  5e                   pop esi
// 009e18eb  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetImageManager@CXTPPropertyGrid@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
