// roc 2011-06 008e2390  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e2390
//
// 008e2390  8b4174               mov eax, dword ptr [ecx + 0x74]
// 008e2393  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008e2396  83c04c               add eax, 0x4c
// 008e2399  83f9ff               cmp ecx, -1
// 008e239c  7515                 jne 0x8e23b3
// 008e239e  8b4004               mov eax, dword ptr [eax + 4]
// 008e23a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008e23a5  50                   push eax
// 008e23a6  8d44240c             lea eax, [esp + 0xc]
// 008e23aa  50                   push eax
// 008e23ab  e8708af2ff           call 0x80ae20
// 008e23b0  c21400               ret 0x14
// 008e23b3  8bc1                 mov eax, ecx
// 008e23b5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008e23b9  50                   push eax
// 008e23ba  8d44240c             lea eax, [esp + 0xc]
// 008e23be  50                   push eax
// 008e23bf  e85c8af2ff           call 0x80ae20
// 008e23c4  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
