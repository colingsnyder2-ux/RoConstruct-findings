// from server: 100% by auto
// roc 2007-08 0069dcc0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069dcc0
//
// 0069dcc0  56                   push esi
// 0069dcc1  8bf1                 mov esi, ecx
// 0069dcc3  e8c8320700           call 0x710f90
// 0069dcc8  83780800             cmp dword ptr [eax + 8], 0
// 0069dccc  7418                 je 0x69dce6
// 0069dcce  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069dcd2  830001               add dword ptr [eax], 1
// 0069dcd5  83400401             add dword ptr [eax + 4], 1
// 0069dcd9  83c9ff               or ecx, 0xffffffff
// 0069dcdc  014808               add dword ptr [eax + 8], ecx
// 0069dcdf  01480c               add dword ptr [eax + 0xc], ecx
// 0069dce2  5e                   pop esi
// 0069dce3  c20800               ret 8
// 0069dce6  8bce                 mov ecx, esi
// 0069dce8  e85125f9ff           call 0x63023e
// 0069dced  5e                   pop esi
// 0069dcee  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPopup.cpp
