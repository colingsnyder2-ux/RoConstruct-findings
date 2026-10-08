// from server: 100% by auto
// roc 2007-08 005093d0  unit: G3D::GCamera  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005093d0
//
// 005093d0  8b442404             mov eax, dword ptr [esp + 4]
// 005093d4  83781400             cmp dword ptr [eax + 0x14], 0
// 005093d8  762d                 jbe 0x509407
// 005093da  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005093de  7215                 jb 0x5093f5
// 005093e0  8b4004               mov eax, dword ptr [eax + 4]
// 005093e3  50                   push eax
// 005093e4  68400b7a00           push 0x7a0b40
// 005093e9  51                   push ecx
// 005093ea  e811ffffff           call 0x509300
// 005093ef  83c40c               add esp, 0xc
// 005093f2  c20400               ret 4
// 005093f5  83c004               add eax, 4
// 005093f8  50                   push eax
// 005093f9  68400b7a00           push 0x7a0b40
// 005093fe  51                   push ecx
// 005093ff  e8fcfeffff           call 0x509300
// 00509404  83c40c               add esp, 0xc
// 00509407  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeSymbol@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
