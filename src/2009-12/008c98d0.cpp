// roc 2009-12 008c98d0  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c98d0
//
// 008c98d0  56                   push esi
// 008c98d1  6a00                 push 0
// 008c98d3  8bf1                 mov esi, ecx
// 008c98d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c98d9  6a00                 push 0
// 008c98db  e860b6f9ff           call 0x864f40
// 008c98e0  85c0                 test eax, eax
// 008c98e2  742e                 je 0x8c9912
// 008c98e4  8b4030               mov eax, dword ptr [eax + 0x30]
// 008c98e7  83f8ff               cmp eax, -1
// 008c98ea  7426                 je 0x8c9912
// 008c98ec  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008c98ef  6a00                 push 0
// 008c98f1  50                   push eax
// 008c98f2  e83943f8ff           call 0x84dc30
// 008c98f7  8bc8                 mov ecx, eax
// 008c98f9  e88262f4ff           call 0x80fb80
// 008c98fe  85c0                 test eax, eax
// 008c9900  7410                 je 0x8c9912
// 008c9902  8bc8                 mov ecx, eax
// 008c9904  e87743f8ff           call 0x84dc80
// 008c9909  8d4805               lea ecx, [eax + 5]
// 008c990c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c9910  0108                 add dword ptr [eax], ecx
// 008c9912  5e                   pop esi
// 008c9913  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemCaptionRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
