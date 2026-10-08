// from server: 100% by auto
// roc 2008-06 00776600  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776600
//
// 00776600  56                   push esi
// 00776601  6a00                 push 0
// 00776603  8bf1                 mov esi, ecx
// 00776605  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00776609  6a00                 push 0
// 0077660b  e830b1f9ff           call 0x711740
// 00776610  85c0                 test eax, eax
// 00776612  742e                 je 0x776642
// 00776614  8b4030               mov eax, dword ptr [eax + 0x30]
// 00776617  83f8ff               cmp eax, -1
// 0077661a  7426                 je 0x776642
// 0077661c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0077661f  6a00                 push 0
// 00776621  50                   push eax
// 00776622  e8293ff8ff           call 0x6fa550
// 00776627  8bc8                 mov ecx, eax
// 00776629  e8229ff4ff           call 0x6c0550
// 0077662e  85c0                 test eax, eax
// 00776630  7410                 je 0x776642
// 00776632  8bc8                 mov ecx, eax
// 00776634  e8673ff8ff           call 0x6fa5a0
// 00776639  8d4805               lea ecx, [eax + 5]
// 0077663c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00776640  0108                 add dword ptr [eax], ecx
// 00776642  5e                   pop esi
// 00776643  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemCaptionRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
