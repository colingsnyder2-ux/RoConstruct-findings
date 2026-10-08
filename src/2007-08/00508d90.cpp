// from server: 100% by auto
// roc 2007-08 00508d90  unit: G3D::GCamera  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508d90
//
// 00508d90  51                   push ecx
// 00508d91  56                   push esi
// 00508d92  8d7128               lea esi, [ecx + 0x28]
// 00508d95  8d442407             lea eax, [esp + 7]
// 00508d99  50                   push eax
// 00508d9a  8bce                 mov ecx, esi
// 00508d9c  c644240b00           mov byte ptr [esp + 0xb], 0
// 00508da1  e86afeffff           call 0x508c10
// 00508da6  8b0e                 mov ecx, dword ptr [esi]
// 00508da8  51                   push ecx
// 00508da9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00508dad  ff152ce67700         call dword ptr [0x77e62c]
// 00508db3  8b5604               mov edx, dword ptr [esi + 4]
// 00508db6  6a00                 push 0
// 00508db8  83ea01               sub edx, 1
// 00508dbb  52                   push edx
// 00508dbc  8bce                 mov ecx, esi
// 00508dbe  e83dfdffff           call 0x508b00
// 00508dc3  5e                   pop esi
// 00508dc4  59                   pop ecx
// 00508dc5  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
