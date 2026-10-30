// roc 2009-12 008c9880  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9880
//
// 008c9880  56                   push esi
// 008c9881  6a00                 push 0
// 008c9883  8bf1                 mov esi, ecx
// 008c9885  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c9889  6a01                 push 1
// 008c988b  e8b0b6f9ff           call 0x864f40
// 008c9890  85c0                 test eax, eax
// 008c9892  742e                 je 0x8c98c2
// 008c9894  8b4030               mov eax, dword ptr [eax + 0x30]
// 008c9897  83f8ff               cmp eax, -1
// 008c989a  7426                 je 0x8c98c2
// 008c989c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008c989f  6a00                 push 0
// 008c98a1  50                   push eax
// 008c98a2  e88943f8ff           call 0x84dc30
// 008c98a7  8bc8                 mov ecx, eax
// 008c98a9  e8d262f4ff           call 0x80fb80
// 008c98ae  85c0                 test eax, eax
// 008c98b0  7410                 je 0x8c98c2
// 008c98b2  8bc8                 mov ecx, eax
// 008c98b4  e8c743f8ff           call 0x84dc80
// 008c98b9  8d4805               lea ecx, [eax + 5]
// 008c98bc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c98c0  0108                 add dword ptr [eax], ecx
// 008c98c2  5e                   pop esi
// 008c98c3  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemValueRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
