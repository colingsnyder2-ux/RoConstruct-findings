// from server: 100% by auto
// roc 2008-06 007765b0  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007765b0
//
// 007765b0  56                   push esi
// 007765b1  6a00                 push 0
// 007765b3  8bf1                 mov esi, ecx
// 007765b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007765b9  6a01                 push 1
// 007765bb  e880b1f9ff           call 0x711740
// 007765c0  85c0                 test eax, eax
// 007765c2  742e                 je 0x7765f2
// 007765c4  8b4030               mov eax, dword ptr [eax + 0x30]
// 007765c7  83f8ff               cmp eax, -1
// 007765ca  7426                 je 0x7765f2
// 007765cc  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007765cf  6a00                 push 0
// 007765d1  50                   push eax
// 007765d2  e8793ff8ff           call 0x6fa550
// 007765d7  8bc8                 mov ecx, eax
// 007765d9  e8729ff4ff           call 0x6c0550
// 007765de  85c0                 test eax, eax
// 007765e0  7410                 je 0x7765f2
// 007765e2  8bc8                 mov ecx, eax
// 007765e4  e8b73ff8ff           call 0x6fa5a0
// 007765e9  8d4805               lea ecx, [eax + 5]
// 007765ec  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007765f0  0108                 add dword ptr [eax], ecx
// 007765f2  5e                   pop esi
// 007765f3  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemValueRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
