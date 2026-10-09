// roc 2008-06 0042a5f0  unit: MainLogManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a5f0
//
// 0042a5f0  8bc1                 mov eax, ecx
// 0042a5f2  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 0042a5f8  85c9                 test ecx, ecx
// 0042a5fa  7405                 je 0x42a601
// 0042a5fc  e9efffffff           jmp 0x42a5f0
// 0042a601  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?getRootAncestor@Instance@RBX@@QAEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
